//   >>>>>  T-I-N-Y  M-I-N-E-Z v1.0 for ATTINY85  GPLv3 <<<<
//						Tinyjoypad rev2 compatible
//                   Programmer: Sven B 2021
//              Contact EMAIL: Lorandil@gmx.de

// Tiny Minez v1.0 is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// The code works at 16MHZ internal
// and uses ssd1306xled Library for SSD1306 oled display 128x64.
//
// To stuff all code and data into the 8192 bytes of the ATtiny85
// the ATTinyCore (v1.5.2) by Spence Konde is recommended.
// The core is available at github: [https://github.com/SpenceKonde/ATTinyCore], just add the
// following board manager to the Arduino IDE: [http://drazzy.com/package_drazzy.com_index.json]
// Please enable LTO (link time optimization) and disable 'millis()' and
// 'micros()'.

// enable serial screenshot
//#define _ENABLE_SERIAL_SCREENSHOT_
// perform a serial screenshot if this condition is true:
//#define _SERIAL_SCREENSHOT_TRIGGER_CONDITION_ ( isRightPressed() )

#include <Arduino.h>
#include <util/delay.h>

#if !defined(__AVR_ATtiny85__)
  #include "SerialHexTools.h"
#endif
#include "spritebank.h"
#include "tinyJoypadUtils.h"
#include "textUtils.h"
#include "soundFX.h"
#include "RLEdecompression.h"
#include "TinyMinezGame.h"
#include "Selection.h"

const uint8_t KEY_DELAY = 100;
const uint8_t FLAG_DELAY = 100;

// the mines per board for the 4 difficulties
const uint8_t mineDifficulty[] PROGMEM = { 5, 10, 15, 20 };

// the game object containing all logic and data
Game game;

// the difficulty selection
Selection selection( checked, unchecked, 16, 6, 0x01 );

// it's difficult to spot the cursor, so let it flash (frame time is ~50ms)
#ifdef _USE_ARDUBOY2_
  const uint8_t CursorMaxFlashCount = 160;
#else
  const uint8_t CursorMaxFlashCount = 24;
#endif
// flash if count is greater or equal the threshold
const uint8_t cursorFlashThreshold = CursorMaxFlashCount / 2;
// increase this counter on every display;
uint8_t cursorFlashCount = 0;

/*--------------------------------------------------------*/
void setup()
{
  // initialize the pins (and serial port if present)
  InitTinyJoypad();
  // perform display initialization
  InitDisplay();
}

/*--------------------------------------------------------*/
void loop()
{
  game.setStatus( Status::intro );

  uint8_t count = 0;

  // game main loop
  while ( true )
  {
    // always incement seed
    game.incrementSeed();

    switch ( game.getStatus() )
    {
      /////////////////////////////
      // intro screen
      case Status::intro:
      case Status::rules:
      {
        // alternate between title screen and rules
        game.setStatus( ( count++ < 128 ) ? Status::intro : Status::rules );

        // display intro screen
        RenderImage( false );

        // check if button pressed
        if ( isFirePressed() )
        {
          game.setStatus( Status::difficultySelection );

          // increment seed while waiting - this way we get a good enough random seed
          while ( isFirePressed() ) { game.incrementSeed(); }
        }

      #ifdef _USE_ARDUBOY2_
        _delay_ms( 50 );
      #endif
        break;
      }

      /////////////////////////////
      // difficulty selection
      case Status::difficultySelection:
      {
        // reset title flip count
        count = 0;

        // force the first redraw
        bool userAction = true;

        do
        {
          // check for user actions
          if ( isUpPressed() ) 
          { 
            selection.previousSelection();
            // user action detected
            userAction = true;
          }
          if ( isDownPressed() )
          { 
            selection.nextSelection();
            // user action detected
            userAction = true;
          }

          if ( userAction )
          {
            // play a sound
            blip5();
            // display new selection
            RenderImage( false );
            // wait until the button is released
            waitUntilButtonsReleased( KEY_DELAY );
            // action processed
            userAction = false;
          }

          // help the RNG
          game.incrementSeed();

      #ifdef _USE_ARDUBOY2_
        _delay_ms( 50 );
      #endif

        } while( !isFirePressed() );

        // increment seed while waiting - this way we get a good enough random seed
        while ( isFirePressed() ) { game.incrementSeed(); }

        // prepare the game
        game.setStatus( Status::prepareGame );

        break;
      }

      /////////////////////////////
      // prepare new game
      case Status::prepareGame:
      {
        // acknowledge the pressed button
        blip5();

        // hide the selected number of mines
        uint8_t numberOfMines = pgm_read_byte( mineDifficulty + selection.getSelection() );

        // create a new level depending on the difficulty (TODO)
        game.createLevel( numberOfMines );
        // dump the level to serial
        game.serialPrintLevel();
        // start the game
        game.setStatus( Status::playGame );
        break;
      }

      /////////////////////////////
      // play the game
      case Status::playGame:
      {
        bool playerAction = false;

        while ( ( game.getStatus() != Status::gameWon ) && ( game.getStatus() != Status::boom ) )
        {
          // increase random seed
          game.incrementSeed();

          // get current cursor position
          uint8_t cursorX = game.getCursorX();
          uint8_t cursorY = game.getCursorY();

          // any buttons pressed?
          if ( isLeftPressed() && ( cursorX > 0 ) )
          {
            cursorX--;
            // wait a moment
            playerAction = true;
          }
          if ( isRightPressed() && ( cursorX < game.getLevelWidth() - 1 ) )
          {
            cursorX++;
            // wait a moment
            playerAction = true;
          }
          if ( isUpPressed() && ( cursorY > 0 ) )
          {
            cursorY--;
            // wait a moment
            playerAction = true;
          }
          if ( isDownPressed() && ( cursorY < game.getLevelHeight() - 1 ) )
          {
            cursorY++;
            // wait a moment
            playerAction = true;
          }
          if ( isFirePressed() || isFire2Pressed() )
          {
            // allow Button B to directly set flag
            uint8_t count = isFire2Pressed() ? 255 : 0;

            // let's check how long fire is pressed
            do
            {
              // wait until the button is released
              _delay_ms( FLAG_DELAY );
              // count this!
              if ( count < 255 ) { count++; }
            // wait unit the button is released
            } while ( isFirePressed() );

            // was fire pressed longer than 3 rounds(~400ms)?
            if ( count > 3 )
            {
              // set or remove a flag symbol
              game.toggleFlag( cursorX, cursorY );
            }
            // don't allow uncovering of a flagged tile
            else if ( !game.isFlagged( cursorX, cursorY ) )
            {
              // uncover this cell and all adjacent cells (if this cell is empty)
              if ( !game.uncoverCells( cursorX, cursorY ) )
              {
                // are all non mine fields uncovered?
                if ( game.isWon() ) 
                { 
                  // game won!
                  game.setStatus( Status::gameWon );
                }
              }
              else
              {
                // something bad did happen...
                game.setStatus( Status::boom );
              }
            }
            // wait a moment
            playerAction = true;
          }
          else if ( playerAction )
          {
            // play a sound
            blip2();
          }

          // update cursor flash count
          cursorFlashCount++;
          if ( cursorFlashCount >= CursorMaxFlashCount ) { cursorFlashCount = 0; }

          // set cursor to the new position
          game.setCursorPosition( cursorX, cursorY );

          // draw board
          RenderImage( false );

          // only delay if there were any changes (important for getting a good seed)
          if ( playerAction )
          {
            // reset cursor to visible
            cursorFlashCount = 0;
            // no forced update required
            playerAction = false;
            // wait a moment
            _delay_ms( KEY_DELAY );
          }
        }
        break;
      }

      /////////////////////////////
      // show game over screen (aka BOOM screen)
      case Status::boom:
      {
        // play some sound
        failingSound();

        // display ***BOOM*** screen and flash 
        for ( uint8_t flash = 0; flash < 10; flash++ ) { RenderImage( flash == 0 ); _delay_ms( 100 ); }

        // uncover all mines
        game.uncoverCells( BOMB );
        game.setStatus( Status::gameOver );

        while ( !isFirePressed() )
        { 
          // show the board with all tiles uncoverted
          RenderImage( true );
          // update cursor flash count
          cursorFlashCount++;
          if ( cursorFlashCount >= CursorMaxFlashCount ) { cursorFlashCount = 0; }
        }

        // wait until fire is released
        while ( isFirePressed() );
        _delay_ms( KEY_DELAY );

        // acknowledge the button
        blip5();

        // return to the title screen
        game.setStatus( Status::intro );

        break;
      }

      /////////////////////////////
      // all mines found, congratulations!
      case Status::gameWon:
      {
        // display game won screen
        RenderImage( false );
        // play a tune
        successSound();
        // wait for button
        waitForFireButtonPressedAndReleased();
        // acknowledge the button
        blip5();
        // switch to intro screen
        game.setStatus( Status::intro );

        break;
      }

    } // switch

  } // while ( true )
}

/*--------------------------------------------------------*/
void RenderImage( bool invert )
{
  Status gameStatus = game.getStatus();

  // prepare text buffer for statistics (only displayed during the game)
  clearTextBuffer();
  uint8_t *textBuffer = getTextBuffer();

  // prepare statistics when game is running
  convertValueToDigits( game.getFlaggedTilesCount(), textBuffer + 1 + 1 * 4 );
  convertValueToDigits( game.getHiddenTilesCount(), textBuffer + 1 + 4 * 4 );
  convertValueToDigits( game.getClicksCount(), textBuffer + 1 + 7 * 4 );

  // optional bitmap buffer pointer
  uint8_t *compressedBitmap;

  // only invert cursor if flash count is less than threshold
  uint8_t cursor = ( cursorFlashCount < cursorFlashThreshold ) ? 0xff : 0x00;

  // there are 8 rows of 8 pixels each
  for ( uint8_t y = 0; y < 8; y++)
  {
    PrepareDisplayRow( y );

    switch ( gameStatus )
    {
      ///////////////////////////
      // display a compressed bitmap
      case Status::intro:
      case Status::rules:
      case Status::difficultySelection:
      case Status::prepareGame:
      case Status::boom:
      case Status::gameWon:
      {
        // select bitmap
        if ( y == 0 )
        {
          switch( gameStatus )
          {
            case Status::intro:
            case Status::prepareGame:
             compressedBitmap = TitleScreen; break;
            case Status::rules:
              compressedBitmap = Rules; break;
            case Status::difficultySelection:
             compressedBitmap = difficultySelection; break;
            case Status::boom:
             compressedBitmap = BOOM; break;
            case Status::gameWon:
             compressedBitmap = ( selection.getSelection() < 3 ) ? game_won : AWESOME; break;
          }
        }

        // display the full line
        compressedBitmap = displayBitmapRow( y, compressedBitmap, invert );
        break;
      }

      ///////////////////////////
      // display the board, if the game is over,
      // the board will be inverted
      case Status::playGame:
      case Status::gameOver:
      {
        // invert image?
        uint8_t invertValue = invert ? 0xff : 0x00;

        // the first 96 columns are used to display the dungeon
        for ( uint8_t x = 0; x < 96; x++ )
        {
          uint8_t spriteColumn = x & 0x07;
          uint8_t cellValue = game.getCellValue( x >> 3, y );

          uint8_t pixels = getSpriteData( cellValue, spriteColumn );
          // invert the tile with the cursor above it
          if ( cellValue & 0x80 ) { pixels ^= cursor; }
          // invert anyway?
          pixels ^= invertValue;

          SendPixels( pixels );
        } // for x

        // display the dashboard here
        for ( uint8_t x = 0; x < 32; x++)
        {
          uint8_t pixels = pgm_read_byte( dashBoard + x + y * 32 )
                         | displayText( x, y );
          SendPixels( pixels );
        }
        break;
      }

      ///////////////////////////
      // this should never happen
      default:
      {
      #if !defined(__AVR_ATtiny85__)
        Serial.println( F("*** RenderImage() : default branch hit - did you forget something? ***") );
        while( 1 );
        break;
      #endif
      }
    } // switch
    
    FinishDisplayRow();
  } // for y

  // display the whole screen at once
  DisplayBuffer();

  #ifdef _ENABLE_SERIAL_SCREENSHOT_
    if ( _SERIAL_SCREENSHOT_TRIGGER_CONDITION_ )
    {
      // print a screenshot to the serial interface
      SerialScreenshot();
    }
  #endif
}

/*--------------------------------------------------------*/
// Displays the row of the given bitmap and inverts it if required
// The bitmap is expected to be RLE encoded. The function returns
// the pointer of the next compressed chunk of image data.
uint8_t* displayBitmapRow( const uint8_t y, const uint8_t *bitmap, const bool invert )
{
  uint8_t xorValue = ( invert ? 0xff : 0x00 );

  // overlay is only required during difficulty selection
  Selection *overlay = nullptr;
  if ( game.getStatus() == Status::difficultySelection )
  {
    overlay = &selection;
  }

  // we will repurpose the text buffer to save valuable RAM
  uint8_t *chunkBuffer = getTextBuffer();

  // uncompress chunk and save next address
  uint8_t *render = pgm_RLEdecompress( bitmap, chunkBuffer, 128 );

  // display the full line
  for ( uint8_t x = 0; x < 128; x++ )
  {
    uint8_t pixels = ( *chunkBuffer++ ) ^ xorValue;

    if ( overlay != nullptr )
    {
      pixels |= selection.getOverlayPixels( x, y );
    }
    
    SendPixels( pixels );
  } // for x

  // return the current decompression pointer
  return( render );
}

/*--------------------------------------------------------*/
uint8_t getSpriteData( uint8_t cellValue, uint8_t spriteColumn )
{
  // remove cursor
  cellValue &= DATA_MASK;

  if ( cellValue & FLAG )
  {
    // a flag was planted here!
    return( pgm_read_byte( flag8x8 + spriteColumn ) );
  }
  if ( cellValue & HIDDEN )
  {
    // this cellValue is still covered
    return( pgm_read_byte( tile8x8 + spriteColumn ) );
  }
  if ( cellValue == BOMB )
  {
    // a bomb!
    return( pgm_read_byte( bomb8x8 + spriteColumn ) );
  }
  if ( ( cellValue >=1 ) && ( cellValue <= 9 ) )
  {
    // draw according digit
    return( pgm_read_byte( digits + cellValue * 8 + spriteColumn ) );
  }

  // obviously empty ;)
  return( pgm_read_byte( empty8x8 + spriteColumn ) );
}

/*--------------------------------------------------------*/
void waitForFireButtonPressedAndReleased()
{
  // wait until fire is pressed
  while ( !isFirePressed() ) { game.incrementSeed(); }
  // wait until fire is released
  while ( isFirePressed() ) { game.incrementSeed(); }
}
