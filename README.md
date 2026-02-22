## TinyMinez
A MineSweeper-ish game for TinyJoypad and Arduboy

## The Idea
When I ran into a mental blockade about gameplay on TinyDungeon (https://github.com/Lorandil/TinyDungeon), I thought that programming something more simple would be fun.
From my long list of ideas, I chose a classic game idea which I encountered first on Windows 3.1: *MineSweeper*.

## The Game
The goal of TinyMinez is to uncover all tiles that DO NOT hide mines. To give the player a fair chance, if a tile is uncovered,
the game uncovers all adjacent tiles that are not a mine. All uncovered tiles that are direct neighbors of a mine, will show a
number indicating how many mines are in the neighborhood.
For figuring out where bombs might lie, the player can mark fields with a flag with a long button press (>300ms).
The game is won, when all non-mine tiles are uncovered and obviously lost, when a mine is triggered by uncovering that tile.

## Features
* Board size is 12 * 8 tiles
* Difficulty selection: 5, 10, 15 or 20 bombs
* sound effects
* FUN and ***BOOOM***


## Open Points
* add nicer screens when the game is won
* add a time limit?
* add sound effects (pitch depending of number of mines in the neighbourhood?)
* try vertical shearing on explosion (like a rotation)
* always save game state to EEPROM?
* replay level function (store last seed on level start)
* replay is optional (configuration value)
* increase board size to 14 * 8?
* add scrolling for even larger fields?


## Implementation Details
The only real difficulty in this project was to get the uncovering of the tiles done.
My first idea (and probably the most straightforward solution) was to use recursion.
Due to the limited RAM of the ATtiny85 that caused the game board to be overwritten with 
garbage bytes (aka the stack) when uncovering a board containing very few mines:
![Stack Overflow...](https://github.com/Lorandil/TinyMinez/blob/main/pic/stack_overflow.png)

So I had to implement the uncovering using an iterative approach. Not really difficult, but
less obvious and elegant.


## Current Size
7556 bytes (still 636 bytes left) using the marvelous 'ATTinyCore' from Spence Konde (v1.5.2) [https://github.com/SpenceKonde/ATTinyCore]

Please use the settings from ATTinyCore_settings_for_ATtiny85.png to get the size below 8192 bytes ;)

## License
GNU General Public License v3.0
