#pragma once

#include <Arduino.h>

const uint8_t MAX_GAME_COLS = 12;
const uint8_t MAX_GAME_ROWS = 8;

enum
{
  EMPTY      = 0x00,
  COUNT_MASK = 0x0f,
  BOMB       = 0x10,
  FLAG       = 0x20,
  HIDDEN     = 0x40,
  CURSOR     = 0x80,
  DATA_MASK  = 0x7f,
};

enum class Status
{
  intro,
  rules,
  difficultySelection,
  prepareGame,
  playGame,
  boom,
  gameOver,
  gameWon,
};

class Game
{
public:
  Game();
  Game( uint8_t levelWidth, uint8_t levelHeight );
  
  void      createLevel( uint8_t numOfMines );
  bool      uncoverCells( const int8_t x, const int8_t y /*, bool countClick = true*/ );
  void      uncoverCells( uint8_t mask = 0xff );
  bool      isWon();
  Status    getStatus() { return( status ); }
  void      setStatus( Status newStatus ) { status = newStatus; }
  void      toggleFlag( const int8_t x, const int8_t y );
  bool      isFlagged( const int8_t x, const int8_t y );
  uint8_t   getCursorX() { return( cursorX ); }
  uint8_t   getCursorY() { return( cursorY ); }
  uint8_t   getLevelWidth() { return( levelWidth ); }
  uint8_t   getLevelHeight() { return( levelHeight ); }
  void      setCursorPosition( const uint8_t x, const uint8_t y );
  void      setCellValue( const int8_t x, const int8_t y, const uint8_t value );
  uint8_t   getCellValue( const int8_t x, const int8_t y );
  bool      isPositionValid( const int8_t x, const int8_t y );
  void      incrementSeed() { seed++; }
  long      getSeed() { return( seed ); }
  void      serialPrintLevel();
  void      serialPrintGameStatus();

  uint8_t   getClicksCount() { return( clicksCount ); }
  uint8_t   getFlaggedTilesCount() { return( countCellsWithAttribute( FLAG ) ); }
  uint8_t   getHiddenTilesCount() { return( countCellsWithAttribute( HIDDEN ) ); }


private:
  uint8_t   countNeighbors( const int8_t x, const int8_t y );
  void      clearLevel();
  uint8_t   countCellsWithAttribute( uint8_t mask );

// Attributes
private:
  // game status (intro, game, boom)
  Status    status;
  // number of bombs
  uint8_t   minesCount;
  // number of set flags
  uint8_t   flagsCount;
  // number of clicks
  uint16_t  clicksCount;
  // level size
  uint8_t   levelWidth;
  uint8_t   levelHeight;
  // cursor position
  uint8_t   cursorX;
  uint8_t   cursorY;
  // seed value
  long      seed;
  // level data
  uint8_t   levelData[MAX_GAME_COLS * MAX_GAME_ROWS];
};
