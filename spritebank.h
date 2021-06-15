#pragma once

#include <Arduino.h>

// 'digits', 80x8px
const unsigned char digits[] PROGMEM = {
	0x00, 0x7c, 0xfe, 0x82, 0x82, 0xfe, 0x7c, 0x00, 0x00, 0x88, 0x8c, 0xfe, 0xfe, 0x80, 0x80, 0x00, 
	0x00, 0x84, 0xc6, 0xe2, 0xb2, 0x9e, 0x8c, 0x00, 0x00, 0x44, 0xc6, 0x82, 0x92, 0xfe, 0x6c, 0x00, 
	0x00, 0x30, 0x38, 0x2c, 0xa6, 0xfe, 0xfe, 0x80, 0x00, 0x5e, 0xde, 0x92, 0x92, 0xf2, 0x62, 0x00, 
	0x00, 0x7c, 0xfe, 0x92, 0x92, 0xf6, 0x64, 0x00, 0x00, 0x02, 0x02, 0xc2, 0xf2, 0x3e, 0x0e, 0x00, 
	0x00, 0x6c, 0xfe, 0x92, 0x92, 0xfe, 0x6c, 0x00, 0x00, 0x4c, 0xde, 0x92, 0x92, 0xfe, 0x7c, 0x00
};

// '7segmentFont space + 0-9 88x8', 88x8px
const unsigned char segementedDigits [] PROGMEM = {
  0x00, 0x00, 0x6c, 0x82, 0x82, 0x82, 0x6c, 0x00, // '0'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xee, 0x00, // '1'
  0x00, 0x00, 0x60, 0x92, 0x92, 0x92, 0x0c, 0x00, // '2'
	0x00, 0x00, 0x00, 0x92, 0x92, 0x92, 0x6c, 0x00, // '3'
  0x00, 0x00, 0x0e, 0x10, 0x10, 0x10, 0xee, 0x00, // '4'
	0x00, 0x00, 0x0c, 0x92, 0x92, 0x92, 0x60, 0x00, // '5'
  0x00, 0x00, 0x6c, 0x92, 0x92, 0x92, 0x60, 0x00, // '6'
	0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0xec, 0x00, // '7'
  0x00, 0x00, 0x6c, 0x92, 0x92, 0x92, 0x6c, 0x00, // '8'
	0x00, 0x00, 0x0c, 0x92, 0x92, 0x92, 0x6c, 0x00  // '9'
};

// 'empty_8x8', 8x8px
const unsigned char empty8x8 [] PROGMEM = {
  //0x00, 0x10, 0x00, 0x55, 0x00, 0x10, 0x00, 0x10
  0x00, 0x00, 0x04, 0x00, 0x40, 0x00, 0x08, 0x00
};


// 'flag_8x8', 8x8px
const unsigned char flag8x8 [] PROGMEM = {
	0xff, 0x7f, 0x01, 0x71, 0xf1, 0xfb, 0xff, 0xff
};
/*
// 'M_8x8', 8x8px
const unsigned char flag8x8 [] PROGMEM = {
	0x01, 0x01, 0xe3, 0xc7, 0xe3, 0x01, 0x01, 0xff
};
*/
// 'tile_8x8', 8x8px
const unsigned char tile8x8 [] PROGMEM = {
	0x00, 0x55, 0x2a, 0x55, 0x2a, 0x55, 0x2a, 0x55
};

// 'bomb8x8', 8x8px
const unsigned char bomb8x8[] PROGMEM = {
	0xff, 0x8f, 0x07, 0x03, 0x05, 0x05, 0x8e, 0xff
};

// 'TinyMinezSideboard', 32x64px
const unsigned char dashBoard [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x40, 0x7f, 0x03, 0x3c, 0x60, 0x3c, 0x03, 0x7f, 0x40, 0x00, 0x7d, 0x00, 
	0x7c, 0x04, 0x04, 0x7c, 0x00, 0x38, 0x54, 0x54, 0x54, 0x58, 0x00, 0x48, 0x54, 0x74, 0x24, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x7f, 0x01, 0x01, 0x00, 0x7d, 0x00, 0x7f, 
	0x00, 0x38, 0x54, 0x54, 0x54, 0x58, 0x00, 0x48, 0x54, 0x74, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x7c, 0xc6, 0x82, 0x82, 0x82, 0x00, 0xff, 0x00, 0xfa, 0x00, 
	0x70, 0x88, 0x88, 0x88, 0x00, 0xff, 0x30, 0x48, 0x80, 0x00, 0x90, 0xa8, 0xe8, 0x48, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

#if 0
// 'BOOM_128x64_mono', 128x64px
const unsigned char BOOM [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0f, 0x1e, 0x3c, 0x78, 0xf0, 0xe0, 0xc0, 0x80, 0x01, 
	0x03, 0x03, 0x07, 0x0e, 0x0e, 0x1c, 0x1c, 0x38, 0x38, 0x70, 0x70, 0xe0, 0xe0, 0xc0, 0x81, 0x03, 
	0x07, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0f, 0x3f, 0xfc, 0xe0, 0x00, 0x00, 0x00, 0x01, 0x03, 
	0x07, 0x0f, 0x1e, 0x1c, 0x3c, 0x78, 0xf0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0f, 
	0x0f, 0x07, 0x03, 0x01, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xe0, 0x70, 0x38, 0x1c, 0x1c, 0x0e, 0x07, 
	0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xfc, 0xff, 0xff, 0x3f, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x03, 0x03, 0x03, 0x01, 0x01, 0x01, 0x01, 0x81, 0x81, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xc0, 
	0xe0, 0xe0, 0x60, 0x60, 0x30, 0x30, 0x30, 0x18, 0x18, 0x18, 0x08, 0x0c, 0x8c, 0xc4, 0xc6, 0x62, 
	0x7e, 0x78, 0x70, 0x70, 0x60, 0x60, 0x60, 0x40, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x0f, 0x1f, 
	0x3e, 0x7c, 0xf8, 0xf0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x07, 
	0x07, 0x0e, 0x0e, 0x1c, 0x38, 0x38, 0x70, 0xe0, 0xc0, 0xc1, 0x9f, 0xff, 0xf8, 0xc0, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0f, 0x1e, 0x3c, 0xf8, 0xf0, 0xf0, 
	0x78, 0x7c, 0x3c, 0x1e, 0x0e, 0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xc0, 0xf8, 0xff, 0xff, 0xff, 0xe3, 0xf1, 0x70, 0x78, 0x78, 0x3c, 0x3c, 
	0x1c, 0x1c, 0x1e, 0x0e, 0x0e, 0x0f, 0x07, 0x07, 0x07, 0x03, 0x03, 0x03, 0x01, 0x01, 0x01, 0x80, 
	0xc0, 0xc0, 0xe0, 0xe0, 0x70, 0x30, 0x38, 0x18, 0x1c, 0x0e, 0x06, 0x03, 0x01, 0x01, 0x80, 0xc0, 
	0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 
	0xe0, 0xe0, 0xe0, 0x61, 0x63, 0x67, 0x6f, 0x7f, 0x7e, 0x78, 0x70, 0x60, 0x40, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x07, 0x07, 0x0e, 0x08, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x03, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x40, 0xe0, 0xe0, 0xf0, 0xf0, 0xf8, 0x98, 0x1c, 0x1c, 0x0e, 0x0e, 0x07, 0x07, 0x03, 
	0x01, 0x01, 0x00, 0x00, 0x20, 0x20, 0x30, 0x70, 0x78, 0x7c, 0xfc, 0xfe, 0xe7, 0xc7, 0xc7, 0xc3, 
	0xe1, 0xe1, 0xe1, 0xc1, 0xc1, 0x81, 0x81, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xc0, 0xf0, 0xf8, 0x78, 0x38, 0x38, 0x38, 0x38, 0xf8, 0xf0, 0xe0, 0x00, 0x00, 0x00, 0xc0, 
	0xe0, 0xe0, 0x70, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0xf0, 0xf0, 0xe0, 0x00, 0x00, 0xc0, 0xe0, 
	0xe0, 0x70, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0xf0, 0xf0, 0xe0, 0x00, 0x00, 0x00, 0xc0, 0xf0, 
	0xf8, 0xf8, 0xe0, 0x00, 0x00, 0x80, 0xe0, 0xf8, 0xf8, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x03, 0x03, 0x07, 0x07, 0x06, 0x0e, 0x0c, 
	0x1c, 0x1c, 0x18, 0x38, 0x38, 0x70, 0x70, 0x70, 0xf0, 0xe0, 0xc0, 0xc0, 0x80, 0x80, 0x01, 0x01, 
	0x80, 0x80, 0x01, 0x01, 0x03, 0x03, 0x07, 0x07, 0x07, 0x0f, 0x0e, 0x1e, 0x1e, 0x1c, 0x3c, 0x38, 
	0x38, 0x38, 0x70, 0x70, 0x60, 0xe0, 0xe0, 0xc0, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xc0, 0xff, 0xff, 0xdf, 0xce, 0xce, 0xce, 0xce, 0xef, 0xff, 0x7f, 0x39, 0x00, 0x3c, 0x7f, 0xff, 
	0xe3, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xe0, 0xf0, 0x7c, 0x3f, 0x0f, 0x03, 0x3c, 0x7f, 0xff, 0xe3, 
	0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xe0, 0xf0, 0x7c, 0x3f, 0x0f, 0x03, 0xe0, 0xf8, 0xfe, 0x1f, 0x03, 
	0x3f, 0xff, 0xff, 0xf8, 0x3e, 0x1f, 0x03, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xc0, 0xc1, 0xc1, 0xc1, 0xc3, 0xc3, 0xc3, 
	0x87, 0x0f, 0x1f, 0x1f, 0x3f, 0x3e, 0x3c, 0xfc, 0xf8, 0xf8, 0xf8, 0x70, 0x10, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x80, 0xe0, 0xf0, 0xfc, 0x7f, 0x1f, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x06, 0x07, 0x0f, 0x1f, 0x1f, 0x33, 0x63, 0xc3, 0x83, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x01, 0x41, 0x61, 0xe1, 0xe1, 0xa1, 0xa1, 0x21, 0x21, 0x60, 0x60, 0x60, 0x60, 0x60, 
	0x03, 0x01, 0xc1, 0xe0, 0xf0, 0xfc, 0x3e, 0x0f, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
	0xf0, 0xf8, 0x7e, 0x1f, 0x0f, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 
	0xe0, 0xf0, 0x70, 0xe0, 0xc0, 0xc0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x02, 0x04, 0x0c, 
	0x18, 0x10, 0x30, 0x60, 0x60, 0xc0, 0x80, 0x81, 0x01, 0x01, 0x07, 0x06, 0x0c, 0x1c, 0x38, 0x38, 
	0x7e, 0x3f, 0x0f, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 0xf8, 0xfc, 0x3f, 0x0f, 
	0x03, 0x01, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xc0, 0xc0, 0x60, 0x60, 0x30, 0x10, 0x18, 0x98, 
	0x8c, 0x0c, 0x06, 0x06, 0xc3, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x80, 0xc0, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0x0f, 0x07, 0x87, 0x07, 0x0e, 0x3c, 0x78, 0xf0, 
	0xf0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 0x78, 0x1e, 0x0f, 0x03, 
	0x01, 0x00, 0x00, 0x80, 0xc0, 0xe1, 0xc3, 0xc3, 0xc7, 0xc7, 0x8f, 0x8e, 0x8e, 0x0c, 0x1c, 0x1c, 
	0x18, 0x18, 0x30, 0x30, 0x20, 0x60, 0x60, 0xc0, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x06, 0x0c, 0x0c, 0x18, 0x30, 0x60, 0x60
};
#endif

// 'BOOM_128x64_mono', 128x64px - RLE compressed 727 bytes
const unsigned char BOOM [] PROGMEM = {
0xA3, 0x0B, 0x01, 0x03, 0x07, 0x0F, 0x1E, 0x3C, 0x78, 0xF0, 0xE0, 0xC0, 0x80, 0x01, 0x81, 0x03, 
0x00, 0x07, 0x81, 0x0E, 0x81, 0x1C, 0x81, 0x38, 0x81, 0x70, 0x81, 0xE0, 0x04, 0xC0, 0x81, 0x03, 
0x07, 0x0C, 0xA3, 0x04, 0x03, 0x0F, 0x3F, 0xFC, 0xE0, 0xA2, 0x0B, 0x01, 0x03, 0x07, 0x0F, 0x1E, 
0x1C, 0x3C, 0x78, 0xF0, 0xE0, 0xC0, 0x80, 0xA1, 0x02, 0x01, 0x03, 0x07, 0x81, 0x0F, 0x02, 0x07, 
0x03, 0x01, 0xA1, 0x01, 0x80, 0xC0, 0x81, 0xE0, 0x01, 0x70, 0x38, 0x81, 0x1C, 0x01, 0x0E, 0x07, 
0x81, 0x03, 0x00, 0x01, 0xA3, 0x01, 0xE0, 0xFC, 0xC1, 0x01, 0x3F, 0x03, 0xA3, 0x82, 0x03, 0x83, 
0x01, 0x81, 0x81, 0x84, 0xC1, 0x00, 0xC0, 0x81, 0xE0, 0x81, 0x60, 0x82, 0x30, 0x82, 0x18, 0x04, 
0x08, 0x0C, 0x8C, 0xC4, 0xC6, 0x80, 0x62, 0x01, 0x7E, 0x78, 0x81, 0x70, 0x82, 0x60, 0x00, 0x40, 
0xA3, 0x0A, 0x01, 0x07, 0x0F, 0x1F, 0x3E, 0x7C, 0xF8, 0xF0, 0xE0, 0xC0, 0x80, 0xA4, 0x81, 0x01, 
0x00, 0x03, 0x81, 0x07, 0x81, 0x0E, 0x00, 0x1C, 0x81, 0x38, 0x07, 0x70, 0xE0, 0xC0, 0xC1, 0x9F, 
0xFF, 0xF8, 0xC0, 0xA8, 0x06, 0x01, 0x03, 0x07, 0x0F, 0x1E, 0x3C, 0xF8, 0x81, 0xF0, 0x05, 0x78, 
0x7C, 0x3C, 0x1E, 0x0E, 0x07, 0x81, 0x03, 0x00, 0x01, 0xAA, 0x01, 0xC0, 0xF8, 0xC2, 0x02, 0xE3, 
0xF1, 0x70, 0x81, 0x78, 0x81, 0x3C, 0x81, 0x1C, 0x00, 0x1E, 0x81, 0x0E, 0x00, 0x0F, 0x82, 0x07, 
0x82, 0x03, 0x82, 0x01, 0x00, 0x80, 0x81, 0xC0, 0x81, 0xE0, 0x07, 0x70, 0x30, 0x38, 0x18, 0x1C, 
0x0E, 0x06, 0x03, 0x81, 0x01, 0x00, 0x80, 0x80, 0xC0, 0x88, 0xC0, 0x89, 0xE0, 0x09, 0x61, 0x63, 
0x67, 0x6F, 0x7F, 0x7E, 0x78, 0x70, 0x60, 0x40, 0xAA, 0x81, 0x01, 0x81, 0x03, 0x81, 0x07, 0x01, 
0x0E, 0x08, 0xAD, 0x00, 0x01, 0xB4, 0x00, 0x03, 0x82, 0x01, 0xA9, 0x00, 0x40, 0x81, 0xE0, 0x81, 
0xF0, 0x01, 0xF8, 0x98, 0x81, 0x1C, 0x81, 0x0E, 0x81, 0x07, 0x00, 0x03, 0x81, 0x01, 0xA1, 0x81, 
0x20, 0x06, 0x30, 0x70, 0x78, 0x7C, 0xFC, 0xFE, 0xE7, 0x81, 0xC7, 0x80, 0xC3, 0x82, 0xE1, 0x81, 
0xC1, 0x81, 0x81, 0x00, 0x80, 0xB8, 0x03, 0xC0, 0xF0, 0xF8, 0x78, 0x83, 0x38, 0x02, 0xF8, 0xF0, 
0xE0, 0xA2, 0x00, 0xC0, 0x81, 0xE0, 0x00, 0x70, 0x85, 0x38, 0x81, 0xF0, 0x00, 0xE0, 0xA1, 0x00, 
0xC0, 0x81, 0xE0, 0x00, 0x70, 0x85, 0x38, 0x81, 0xF0, 0x00, 0xE0, 0xA2, 0x01, 0xC0, 0xF0, 0x81, 
0xF8, 0x00, 0xE0, 0xA1, 0x01, 0x80, 0xE0, 0x81, 0xF8, 0x00, 0xF0, 0xAB, 0x82, 0x01, 0x81, 0x03, 
0x81, 0x07, 0x02, 0x06, 0x0E, 0x0C, 0x81, 0x1C, 0x00, 0x18, 0x81, 0x38, 0x82, 0x70, 0x01, 0xF0, 
0xE0, 0x81, 0xC0, 0x81, 0x80, 0x81, 0x01, 0x81, 0x80, 0x81, 0x01, 0x81, 0x03, 0x82, 0x07, 0x01, 
0x0F, 0x0E, 0x81, 0x1E, 0x01, 0x1C, 0x3C, 0x82, 0x38, 0x81, 0x70, 0x00, 0x60, 0x81, 0xE0, 0x81, 
0xC0, 0x81, 0x80, 0xA4, 0x00, 0xC0, 0xC1, 0x00, 0xDF, 0x83, 0xCE, 0x08, 0xEF, 0xFF, 0x7F, 0x39, 
0x00, 0x3C, 0x7F, 0xFF, 0xE3, 0x84, 0xC0, 0x09, 0xE0, 0xF0, 0x7C, 0x3F, 0x0F, 0x03, 0x3C, 0x7F, 
0xFF, 0xE3, 0x84, 0xC0, 0x0B, 0xE0, 0xF0, 0x7C, 0x3F, 0x0F, 0x03, 0xE0, 0xF8, 0xFE, 0x1F, 0x03, 
0x3F, 0xC1, 0x03, 0xF8, 0x3E, 0x1F, 0x03, 0xC2, 0x00, 0x80, 0xAF, 0x8D, 0x80, 0x00, 0xC0, 0x82, 
0xC1, 0x82, 0xC3, 0x01, 0x87, 0x0F, 0x81, 0x1F, 0x03, 0x3F, 0x3E, 0x3C, 0xFC, 0x82, 0xF8, 0x01, 
0x70, 0x10, 0xA5, 0x07, 0x80, 0xE0, 0xF0, 0xFC, 0x7F, 0x1F, 0x07, 0x03, 0xA4, 0x87, 0x01, 0xA7, 
0x85, 0x01, 0xA8, 0x85, 0x01, 0xA5, 0x81, 0x01, 0xA3, 0x81, 0x01, 0xA4, 0x81, 0x01, 0xA7, 0x02, 
0x06, 0x07, 0x0F, 0x81, 0x1F, 0x03, 0x33, 0x63, 0xC3, 0x83, 0x86, 0x03, 0x02, 0x01, 0x41, 0x61, 
0x81, 0xE1, 0x81, 0xA1, 0x81, 0x21, 0x84, 0x60, 0x09, 0x03, 0x01, 0xC1, 0xE0, 0xF0, 0xFC, 0x3E, 
0x0F, 0x03, 0x01, 0xA4, 0x06, 0x80, 0xF0, 0xF8, 0x7E, 0x1F, 0x0F, 0x03, 0xAF, 0x01, 0x80, 0xC0, 
0xB0, 0x81, 0x80, 0xB2, 0x05, 0x80, 0xC0, 0xE0, 0xF0, 0x70, 0xE0, 0x81, 0xC0, 0x82, 0x80, 0xB1, 
0x07, 0x01, 0x03, 0x02, 0x04, 0x0C, 0x18, 0x10, 0x30, 0x81, 0x60, 0x02, 0xC0, 0x80, 0x81, 0x81, 
0x01, 0x03, 0x07, 0x06, 0x0C, 0x1C, 0x81, 0x38, 0x04, 0x7E, 0x3F, 0x0F, 0x07, 0x03, 0xA4, 0x07, 
0x80, 0xE0, 0xF8, 0xFC, 0x3F, 0x0F, 0x03, 0x01, 0xA2, 0x82, 0x80, 0x81, 0xC0, 0x81, 0x60, 0x05, 
0x30, 0x10, 0x18, 0x98, 0x8C, 0x0C, 0x81, 0x06, 0x00, 0xC3, 0xC1, 0x00, 0x03, 0xA8, 0x0D, 0x80, 
0xC0, 0xE0, 0xF0, 0x78, 0x3C, 0x1E, 0x0F, 0x07, 0x87, 0x07, 0x0E, 0x3C, 0x78, 0x81, 0xF0, 0x02, 
0xE0, 0xC0, 0x80, 0xA5, 0x06, 0x80, 0xE0, 0x78, 0x1E, 0x0F, 0x03, 0x01, 0xA1, 0x02, 0x80, 0xC0, 
0xE1, 0x81, 0xC3, 0x81, 0xC7, 0x00, 0x8F, 0x81, 0x8E, 0x00, 0x0C, 0x81, 0x1C, 0x81, 0x18, 0x81, 
0x30, 0x00, 0x20, 0x81, 0x60, 0x81, 0xC0, 0x81, 0x80, 0xAA, 0x00, 0x01, 0x81, 0x03, 0x00, 0x06, 
0x81, 0x0C, 0x01, 0x18, 0x30, 0x81, 0x60
};

#if 0
// 'TinyMinez_128x64', 128x64px
const unsigned char TitleScreen [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
	0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x70, 0x60, 0x00, 0x00, 0x60, 0xf0, 0xf0, 0x70, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
	0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xf8, 0xfc, 0xfc, 0x18, 0x00, 
	0x00, 0x00, 0xf8, 0xfc, 0xfc, 0xfc, 0x78, 0x38, 0x3c, 0x1c, 0xfc, 0xfc, 0xf8, 0x20, 0x00, 0x38, 
	0xfc, 0xfc, 0xf8, 0xe0, 0x80, 0x00, 0x00, 0x80, 0xe0, 0xf0, 0xf8, 0x7c, 0x3c, 0x08, 0x00, 0x00, 
	0x00, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 
	0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 
	0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 
	0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0x3f, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0xff, 0xff, 0x7f, 0x01, 0x00, 0x00, 
	0x70, 0xff, 0xff, 0x7f, 0x07, 0x01, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x00, 
	0x00, 0x03, 0x9f, 0xff, 0xff, 0xfe, 0x7e, 0x1f, 0x0f, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xf0, 0xf0, 0xf0, 0xe0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 
	0x7c, 0x7f, 0x3f, 0x0f, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xf0, 0xfe, 0xff, 
	0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x80, 0xe0, 0xfc, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xc0, 0xe3, 0xe7, 0xc7, 0x03, 0x00, 0x00, 0xc0, 0xe0, 0xe0, 0xe0, 0xc0, 0xc0, 
	0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 
	0xe0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 
	0xe0, 0xe1, 0xe1, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 
	0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 
	0x7c, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xf0, 0xfe, 0xff, 0x1f, 0x07, 0x00, 
	0xff, 0xff, 0xff, 0xf0, 0xf8, 0xfe, 0x3f, 0x0f, 0x03, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 
	0x00, 0x80, 0xfe, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x80, 0xf8, 0xff, 0xff, 0x3f, 0x0f, 0x03, 0x01, 
	0x01, 0xf0, 0xff, 0xff, 0xff, 0x01, 0xf8, 0xfe, 0xff, 0xff, 0xbb, 0x39, 0x1d, 0x1c, 0x1e, 0x8e, 
	0x8f, 0x87, 0x87, 0x01, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0x7c, 0x3e, 0x0f, 0x07, 
	0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x0f, 0x0f, 0x07, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x07, 0x07, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0f, 0x0f, 0x0f, 0x00, 0x00, 
	0x00, 0x03, 0x07, 0x07, 0x03, 0x00, 0x00, 0x00, 0x03, 0x07, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x07, 0x07, 0x07, 0x03, 0x00, 0x00, 0x01, 0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
	0x03, 0x03, 0x01, 0x00, 0x00, 0x06, 0x0f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
	0x07, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
#endif

// 'TinyMinez_128x64', 128x64px - RLE compressed 338 bytes
const unsigned char TitleScreen [] PROGMEM = {
0xA6, 0x00, 0x60, 0x8F, 0xF0, 0x01, 0x70, 0x60, 0xA1, 0x00, 0x60, 0x81, 0xF0, 0x00, 0x70, 0xBF, 
0xBF, 0xBF, 0xAC, 0xC3, 0xA8, 0x01, 0xC0, 0xF8, 0x81, 0xFC, 0x00, 0x18, 0xA2, 0x00, 0xF8, 0x82, 
0xFC, 0x03, 0x78, 0x38, 0x3C, 0x1C, 0x81, 0xFC, 0x03, 0xF8, 0x20, 0x00, 0x38, 0x81, 0xFC, 0x02, 
0xF8, 0xE0, 0x80, 0xA1, 0x06, 0x80, 0xE0, 0xF0, 0xF8, 0x7C, 0x3C, 0x08, 0xA2, 0x00, 0xC0, 0x9F, 
0xE0, 0x91, 0xE0, 0x00, 0xC0, 0xAA, 0xAB, 0x00, 0xFC, 0xC1, 0x00, 0x3F, 0xA8, 0x00, 0x70, 0xC1, 
0x01, 0x7F, 0x01, 0xA1, 0x00, 0x70, 0xC1, 0x02, 0x7F, 0x07, 0x01, 0xA2, 0x00, 0xFE, 0xC1, 0x00, 
0x7F, 0xA3, 0x01, 0x03, 0x9F, 0xC1, 0x05, 0xFE, 0x7E, 0x1F, 0x0F, 0x03, 0x01, 0xA5, 0x00, 0x01, 
0x9F, 0x03, 0x8D, 0x03, 0xC4, 0xAA, 0xAA, 0x00, 0xE0, 0x82, 0xF0, 0x00, 0xE0, 0xBE, 0x05, 0x70, 
0x7C, 0x7F, 0x3F, 0x0F, 0x03, 0xBF, 0xBA, 0xC4, 0xAA, 0xAA, 0xC4, 0xBF, 0x81, 0x80, 0xA7, 0x82, 
0x80, 0xA7, 0x82, 0x80, 0xBF, 0xA7, 0xC4, 0xAA, 0xAA, 0xC4, 0xBB, 0x02, 0x80, 0xF0, 0xFE, 0xC3, 
0xA2, 0x02, 0x80, 0xE0, 0xFC, 0xC3, 0xA5, 0x04, 0xC0, 0xE3, 0xE7, 0xC7, 0x03, 0xA1, 0x00, 0xC0, 
0x82, 0xE0, 0x81, 0xC0, 0x83, 0xE0, 0x00, 0xC0, 0xA3, 0x00, 0x80, 0x81, 0xC0, 0x85, 0xE0, 0x01, 
0xC0, 0x80, 0xA2, 0x89, 0xE0, 0x81, 0xE1, 0x00, 0x61, 0xAB, 0xAA, 0x00, 0x3F, 0x83, 0x7F, 0x90, 
0x7C, 0x00, 0x38, 0xA6, 0x06, 0xC0, 0xF0, 0xFE, 0xFF, 0x1F, 0x07, 0x00, 0xC2, 0x06, 0xF0, 0xF8, 
0xFE, 0x3F, 0x0F, 0x03, 0x00, 0xC3, 0xA2, 0x01, 0x80, 0xFE, 0xC1, 0x00, 0x0F, 0xA1, 0x01, 0x80, 
0xF8, 0xC1, 0x02, 0x3F, 0x0F, 0x03, 0x81, 0x01, 0x00, 0xF0, 0xC2, 0x02, 0x01, 0xF8, 0xFE, 0xC1, 
0x06, 0xBB, 0x39, 0x1D, 0x1C, 0x1E, 0x8E, 0x8F, 0x81, 0x87, 0x00, 0x01, 0xA2, 0x0A, 0x80, 0xC0, 
0xE0, 0xF0, 0xF8, 0x7C, 0x3E, 0x0F, 0x07, 0x03, 0x01, 0xAD, 0xBF, 0xA7, 0x00, 0x06, 0x81, 0x0F, 
0x00, 0x07, 0xA4, 0x82, 0x07, 0x00, 0x03, 0xA4, 0x00, 0x03, 0x82, 0x0F, 0xA2, 0x00, 0x03, 0x81, 
0x07, 0x00, 0x03, 0xA2, 0x00, 0x03, 0x81, 0x07, 0x00, 0x03, 0xA4, 0x82, 0x07, 0x00, 0x03, 0xA1, 
0x01, 0x01, 0x03, 0x86, 0x07, 0x81, 0x03, 0x00, 0x01, 0xA1, 0x01, 0x06, 0x0F, 0x89, 0x07, 0x00, 
0x02, 0xAD
};

#if 0
// 'difficulties_128x64', 128x64px
const unsigned char difficulty_selection [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xf8, 0xfc, 
	0xcc, 0xcc, 0x4c, 0x4c, 0x0c, 0xc0, 0xc0, 0x60, 0x60, 0xe0, 0xc0, 0x00, 0xc0, 0xe0, 0xe0, 0x60, 
	0x60, 0x00, 0x60, 0xe0, 0x80, 0x00, 0x80, 0xe0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 
	0xf0, 0x38, 0x1c, 0x0c, 0x80, 0xfc, 0x7c, 0x6c, 0x6c, 0x6c, 0xcc, 0x04, 0x00, 0x00, 0x00, 0xc0, 
	0xf0, 0xf0, 0xf8, 0xfc, 0xfa, 0xf2, 0xf4, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xfc, 0xf8, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x0c, 
	0x0c, 0x0c, 0x0c, 0x00, 0x07, 0x0f, 0x0c, 0x0c, 0x0c, 0x0f, 0x04, 0x00, 0x0c, 0x0d, 0x0d, 0x0f, 
	0x06, 0x00, 0x40, 0x73, 0x3f, 0x0f, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 
	0x7f, 0x60, 0x00, 0x00, 0x04, 0x0c, 0x0c, 0x0c, 0x0c, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x07, 0x07, 0x0f, 0x0f, 0x0f, 0x07, 0x07, 0x01, 0x00, 0x00, 0x40, 0x60, 0x30, 0x1f, 0x0f, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xf8, 
	0xfc, 0xfc, 0x00, 0xc0, 0x70, 0xfc, 0xfc, 0x00, 0x80, 0xc0, 0x60, 0xe0, 0xe0, 0xe0, 0x00, 0x80, 
	0xc0, 0x60, 0x60, 0x60, 0xe0, 0xfc, 0x0c, 0x00, 0xe0, 0x6c, 0x00, 0xc0, 0xe0, 0x00, 0x00, 0xc0, 
	0xe0, 0x00, 0xc0, 0xe0, 0xe0, 0x60, 0xe0, 0xe0, 0x60, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xc0, 0xf0, 0x38, 0x1c, 0x0c, 0x00, 0x18, 0xf8, 0xfc, 0x0c, 0x00, 0x00, 0x00, 0xc0, 
	0xf0, 0x18, 0x0c, 0x0c, 0x0c, 0xfc, 0x70, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xf0, 0xf0, 0xf8, 0xfc, 
	0xfa, 0xf2, 0xf4, 0xc0, 0x00, 0x00, 0x00, 0x0c, 0x3c, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x07, 0x00, 
	0x03, 0x0f, 0x07, 0x03, 0x00, 0x0f, 0x0f, 0x06, 0x07, 0x0f, 0x0d, 0x0d, 0x0c, 0x04, 0x00, 0x07, 
	0x0e, 0x0c, 0x0c, 0x0e, 0x0f, 0x01, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x0f, 0x0f, 0x0c, 0x0c, 0x0f, 
	0x03, 0x00, 0x0f, 0x07, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x3f, 0x7f, 0x60, 0x00, 0x00, 0x08, 0x0c, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x07, 
	0x0f, 0x0c, 0x0c, 0x0c, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x07, 0x0f, 0x0f, 
	0x0f, 0x07, 0x07, 0x01, 0x00, 0x40, 0x60, 0x30, 0x1e, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xf8, 0xfc, 
	0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfc, 0x1c, 0xc0, 0xc0, 0x60, 0x60, 0xe0, 0xc0, 0x00, 0xc0, 0xe0, 
	0x60, 0x60, 0xe0, 0xe0, 0x80, 0xc0, 0x60, 0x60, 0x60, 0xe0, 0xfc, 0x0c, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xc0, 0xf0, 0x38, 0x1c, 0x0c, 0x00, 0x18, 0xf8, 0xfc, 0x0c, 0x00, 0x00, 0x00, 0xc0, 
	0xfc, 0x7c, 0x6c, 0x6c, 0x6c, 0xec, 0x04, 0x00, 0x00, 0x00, 0xc0, 0xf0, 0xf0, 0xf8, 0xfc, 0xfa, 
	0xf2, 0xf4, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x7c, 0xf8, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x07, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x07, 0x0f, 0x0c, 0x0c, 0x0c, 0x0f, 0x04, 0x00, 0x0f, 0x03, 
	0x00, 0x00, 0x00, 0x00, 0x07, 0x0f, 0x0c, 0x0c, 0x0c, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x3f, 0x7f, 0x60, 0x00, 0x00, 0x08, 0x0c, 0x0f, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x0c, 0x0c, 0x0c, 0x0c, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x07, 0x0f, 0x0f, 0x0f, 
	0x07, 0x07, 0x01, 0x00, 0x00, 0x40, 0x60, 0x30, 0x1e, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 
	0xd8, 0xf8, 0x18, 0x18, 0x18, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 
	0xc0, 0x80, 0x80, 0x80, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 
	0x80, 0x80, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xf0, 0x38, 0x1c, 
	0x0c, 0x00, 0x10, 0x98, 0x8c, 0xcc, 0x6c, 0x78, 0x00, 0xc0, 0xf0, 0x18, 0x0c, 0x0c, 0x0c, 0xf8, 
	0x70, 0x00, 0x00, 0x00, 0xc0, 0xf0, 0xf0, 0xf8, 0xfc, 0xfa, 0xf2, 0xf4, 0xc0, 0x00, 0x00, 0x00, 
	0x00, 0x0c, 0x3c, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x18, 
	0x1f, 0x1f, 0x18, 0x18, 0x00, 0x1f, 0x07, 0x01, 0x00, 0x1f, 0x1f, 0x00, 0x19, 0x1b, 0x1b, 0x1e, 
	0x0c, 0x0e, 0x1f, 0x19, 0x18, 0x18, 0x1f, 0x09, 0x00, 0x1f, 0x0f, 0x01, 0x00, 0x1f, 0x0f, 0x00, 
	0x0f, 0x1f, 0x1a, 0x1b, 0x19, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x7f, 0x60, 0x00, 
	0x00, 0x0e, 0x0f, 0x0d, 0x0d, 0x0c, 0x0c, 0x00, 0x00, 0x07, 0x0f, 0x0c, 0x0c, 0x0c, 0x07, 0x03, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x07, 0x0f, 0x0f, 0x0f, 0x07, 0x07, 0x01, 0x00, 0x00, 0x40, 
	0x60, 0x30, 0x1e, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
#endif

// 'difficulties_128x64', 128x64px - RLE compressed 607 bytes
const unsigned char difficultySelection [] PROGMEM = {
0xBC, 0x02, 0xC0, 0xF8, 0xFC, 0x81, 0xCC, 0x81, 0x4C, 0x00, 0x0C, 0x81, 0xC0, 0x81, 0x60, 0x03, 
0xE0, 0xC0, 0x00, 0xC0, 0x81, 0xE0, 0x81, 0x60, 0x07, 0x00, 0x60, 0xE0, 0x80, 0x00, 0x80, 0xE0, 
0x60, 0xA5, 0x07, 0xC0, 0xF0, 0x38, 0x1C, 0x0C, 0x80, 0xFC, 0x7C, 0x82, 0x6C, 0x01, 0xCC, 0x04, 
0xA2, 0x00, 0xC0, 0x81, 0xF0, 0x05, 0xF8, 0xFC, 0xFA, 0xF2, 0xF4, 0xC0, 0xA3, 0x02, 0x0C, 0xFC, 
0xF8, 0xBF, 0xA0, 0xBC, 0x81, 0x0F, 0x83, 0x0C, 0x02, 0x00, 0x07, 0x0F, 0x82, 0x0C, 0x03, 0x0F, 
0x04, 0x00, 0x0C, 0x81, 0x0D, 0x08, 0x0F, 0x06, 0x00, 0x40, 0x73, 0x3F, 0x0F, 0x03, 0x01, 0xA6, 
0x02, 0x3F, 0x7F, 0x60, 0xA1, 0x00, 0x04, 0x83, 0x0C, 0x01, 0x07, 0x03, 0xA3, 0x00, 0x01, 0x81, 
0x07, 0x82, 0x0F, 0x81, 0x07, 0x00, 0x01, 0xA1, 0x04, 0x40, 0x60, 0x30, 0x1F, 0x0F, 0xBF, 0xA0, 
0xBD, 0x01, 0xC0, 0xF8, 0x81, 0xFC, 0x02, 0x00, 0xC0, 0x70, 0x81, 0xFC, 0x03, 0x00, 0x80, 0xC0, 
0x60, 0x82, 0xE0, 0x02, 0x00, 0x80, 0xC0, 0x82, 0x60, 0x08, 0xE0, 0xFC, 0x0C, 0x00, 0xE0, 0x6C, 
0x00, 0xC0, 0xE0, 0xA1, 0x03, 0xC0, 0xE0, 0x00, 0xC0, 0x81, 0xE0, 0x00, 0x60, 0x81, 0xE0, 0x00, 
0x60, 0x81, 0xE0, 0xA6, 0x09, 0xC0, 0xF0, 0x38, 0x1C, 0x0C, 0x00, 0x18, 0xF8, 0xFC, 0x0C, 0xA2, 
0x02, 0xC0, 0xF0, 0x18, 0x82, 0x0C, 0x01, 0xFC, 0x70, 0xA3, 0x00, 0xC0, 0x81, 0xF0, 0x05, 0xF8, 
0xFC, 0xFA, 0xF2, 0xF4, 0xC0, 0xA2, 0x02, 0x0C, 0x3C, 0xF8, 0xA5, 0xBC, 0x07, 0x0F, 0x07, 0x00, 
0x03, 0x0F, 0x07, 0x03, 0x00, 0x81, 0x0F, 0x02, 0x06, 0x07, 0x0F, 0x81, 0x0D, 0x04, 0x0C, 0x04, 
0x00, 0x07, 0x0E, 0x81, 0x0C, 0x03, 0x0E, 0x0F, 0x01, 0x00, 0x81, 0x0F, 0xA1, 0x81, 0x0F, 0x81, 
0x0C, 0x05, 0x0F, 0x03, 0x00, 0x0F, 0x07, 0x00, 0x81, 0x0F, 0xA1, 0x81, 0x0F, 0xA6, 0x02, 0x3F, 
0x7F, 0x60, 0xA1, 0x01, 0x08, 0x0C, 0x81, 0x0F, 0xA3, 0x01, 0x07, 0x0F, 0x82, 0x0C, 0x01, 0x07, 
0x03, 0xA4, 0x00, 0x01, 0x81, 0x07, 0x82, 0x0F, 0x81, 0x07, 0x06, 0x01, 0x00, 0x40, 0x60, 0x30, 
0x1E, 0x0F, 0xA5, 0xBC, 0x02, 0x80, 0xF8, 0xFC, 0x84, 0xC0, 0x01, 0xFC, 0x1C, 0x81, 0xC0, 0x81, 
0x60, 0x04, 0xE0, 0xC0, 0x00, 0xC0, 0xE0, 0x81, 0x60, 0x81, 0xE0, 0x01, 0x80, 0xC0, 0x82, 0x60, 
0x02, 0xE0, 0xFC, 0x0C, 0xA5, 0x09, 0xC0, 0xF0, 0x38, 0x1C, 0x0C, 0x00, 0x18, 0xF8, 0xFC, 0x0C, 
0xA2, 0x02, 0xC0, 0xFC, 0x7C, 0x82, 0x6C, 0x01, 0xEC, 0x04, 0xA2, 0x00, 0xC0, 0x81, 0xF0, 0x05, 
0xF8, 0xFC, 0xFA, 0xF2, 0xF4, 0xC0, 0xA3, 0x03, 0x0C, 0x7C, 0xF8, 0x40, 0xB4, 0xBC, 0x01, 0x0F, 
0x07, 0xA4, 0x81, 0x0F, 0x01, 0x07, 0x0F, 0x82, 0x0C, 0x04, 0x0F, 0x04, 0x00, 0x0F, 0x03, 0xA3, 
0x01, 0x07, 0x0F, 0x82, 0x0C, 0x00, 0x0F, 0xA7, 0x02, 0x3F, 0x7F, 0x60, 0xA1, 0x03, 0x08, 0x0C, 
0x0F, 0x0D, 0xA3, 0x00, 0x04, 0x83, 0x0C, 0x01, 0x07, 0x03, 0xA3, 0x00, 0x01, 0x81, 0x07, 0x82, 
0x0F, 0x81, 0x07, 0x00, 0x01, 0xA1, 0x04, 0x40, 0x60, 0x30, 0x1E, 0x0F, 0xB5, 0xBE, 0x02, 0x18, 
0xD8, 0xF8, 0x82, 0x18, 0x00, 0x80, 0x84, 0xC0, 0x01, 0x00, 0x80, 0x83, 0xC0, 0x82, 0x80, 0x82, 
0xC0, 0x02, 0x80, 0x00, 0x80, 0x84, 0xC0, 0x00, 0x00, 0x81, 0x80, 0x82, 0xC0, 0x00, 0x80, 0xA5, 
0x0F, 0xC0, 0xF0, 0x38, 0x1C, 0x0C, 0x00, 0x10, 0x98, 0x8C, 0xCC, 0x6C, 0x78, 0x00, 0xC0, 0xF0, 
0x18, 0x82, 0x0C, 0x01, 0xF8, 0x70, 0xA2, 0x00, 0xC0, 0x81, 0xF0, 0x05, 0xF8, 0xFC, 0xFA, 0xF2, 
0xF4, 0xC0, 0xA3, 0x02, 0x0C, 0x3C, 0xF8, 0xAB, 0xBD, 0x01, 0x10, 0x18, 0x81, 0x1F, 0x81, 0x18, 
0x04, 0x00, 0x1F, 0x07, 0x01, 0x00, 0x81, 0x1F, 0x01, 0x00, 0x19, 0x81, 0x1B, 0x04, 0x1E, 0x0C, 
0x0E, 0x1F, 0x19, 0x81, 0x18, 0x0F, 0x1F, 0x09, 0x00, 0x1F, 0x0F, 0x01, 0x00, 0x1F, 0x0F, 0x00, 
0x0F, 0x1F, 0x1A, 0x1B, 0x19, 0x09, 0xA5, 0x02, 0x3F, 0x7F, 0x60, 0xA1, 0x01, 0x0E, 0x0F, 0x81, 
0x0D, 0x81, 0x0C, 0xA1, 0x01, 0x07, 0x0F, 0x82, 0x0C, 0x01, 0x07, 0x03, 0xA3, 0x00, 0x01, 0x81, 
0x07, 0x82, 0x0F, 0x81, 0x07, 0x00, 0x01, 0xA1, 0x04, 0x40, 0x60, 0x30, 0x1E, 0x0F, 0xAB
};

// 'Rules128x64', 128x64px
const unsigned char Rules128x64 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x90, 
	0x00, 0x00, 0x80, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0xf0, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 
	0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xf0, 0x00, 0x00, 0x00, 0xe0, 0xf0, 
	0x80, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x80, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x3f, 0x03, 
	0x00, 0x00, 0x3f, 0x03, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x1f, 0x20, 0x20, 0x20, 0x31, 0x3f, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0c, 0x3f, 0x21, 0x20, 0x20, 0x1f, 0x20, 0x00, 0x00, 0x3f, 0x00, 0x00, 
	0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x03, 0x01, 0x1e, 0x30, 0x1c, 0x01, 0x00, 
	0x1f, 0x30, 0x00, 0x3f, 0x03, 0x00, 0x00, 0x3f, 0x03, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x1f, 0x2d, 
	0x24, 0x26, 0x23, 0x10, 0x20, 0x27, 0x25, 0x24, 0x1d, 0x01, 0x00, 0x2f, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x00, 
	0x00, 0xc0, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x40, 0x83, 0x84, 0x84, 0x84, 0x4c, 0x78, 0x00, 0x00, 0xff, 0x04, 0x02, 0x02, 0xfc, 
	0x00, 0x00, 0x7c, 0x82, 0x82, 0x82, 0x7c, 0x00, 0x00, 0xfe, 0x04, 0x02, 0x0e, 0x06, 0x02, 0x02, 
	0xff, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x83, 0x80, 0x80, 0x80, 0x40, 0x00, 0x00, 
	0x00, 0xff, 0x00, 0x00, 0xfc, 0x0e, 0x00, 0x00, 0x78, 0x84, 0x82, 0x82, 0xc6, 0x00, 0x00, 0xff, 
	0x30, 0x18, 0x3c, 0xc6, 0x80, 0x00, 0x00, 0x00, 0x00, 0x66, 0x40, 0x00, 0x00, 0x00, 0x00, 0x1f, 
	0x60, 0x80, 0x80, 0x80, 0x80, 0x60, 0x1f, 0x00, 0x00, 0xfe, 0x0c, 0x02, 0x02, 0xfe, 0x00, 0x00, 
	0x78, 0x84, 0x82, 0x82, 0xc6, 0x00, 0x00, 0x7c, 0x82, 0x82, 0x82, 0x7c, 0x00, 0x02, 0x1e, 0x60, 
	0xc0, 0x38, 0x06, 0x00, 0x7c, 0xb4, 0x92, 0x9a, 0x8c, 0x40, 0x00, 0xfe, 0x04, 0x02, 0x0e, 0x04, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x08, 0x08, 0x08, 0xf0, 0x00, 0x00, 
	0xf8, 0x30, 0x08, 0x08, 0xf8, 0x00, 0x80, 0xf0, 0x10, 0x08, 0x08, 0xf0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xf8, 0x0c, 0x02, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x00, 0x00, 0xf0, 0x39, 
	0x00, 0x00, 0xe0, 0x10, 0x08, 0x08, 0x18, 0x00, 0x00, 0xff, 0xc0, 0x60, 0xf0, 0x18, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x12, 0x11, 0x11, 0x31, 
	0xe1, 0x00, 0x00, 0xf0, 0xd0, 0x48, 0x68, 0x30, 0x00, 0x08, 0x08, 0xfe, 0x08, 0x08, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xff, 0x11, 0x11, 0x11, 0x11, 0x11, 0x01, 0x00, 0x00, 0xff, 0x00, 0xc0, 0xf0, 
	0x18, 0x08, 0x08, 0xf8, 0x00, 0x80, 0xf0, 0x10, 0x08, 0x08, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00, 
	0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x21, 0x22, 0x22, 0x11, 0x0f, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 
	0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x02, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x02, 0x01, 
	0x01, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 
	0x02, 0x02, 0x02, 0x01, 0x02, 0x00, 0x21, 0x22, 0x22, 0x11, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'checked_16x16', 16x16px
const unsigned char checked [] PROGMEM = {
	0x0c, 0x0e, 0x1e, 0xfc, 0x78, 0xf0, 0xe8, 0xc8, 0xe8, 0xf8, 0x78, 0x3c, 0xde, 0x1f, 0x0f, 0x07, 
	0x70, 0x70, 0x78, 0x3f, 0x1e, 0x0f, 0x17, 0x13, 0x13, 0x17, 0x0f, 0x1e, 0x3f, 0x78, 0x70, 0x70
};

// 'unchecked_16x16', 16x16px
const unsigned char unchecked [] PROGMEM = {
	0x00, 0x00, 0x00, 0xc0, 0x20, 0x10, 0x08, 0x08, 0x08, 0x08, 0x10, 0x20, 0xc0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x10, 0x10, 0x10, 0x10, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00
};
