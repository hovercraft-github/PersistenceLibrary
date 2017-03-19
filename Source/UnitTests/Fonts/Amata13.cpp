#include "Amata13.h"

const ePixelFormat        Amata13_PixelFormat   = pfBGR2ColorsPalette;
const TFontDataAlignment  Amata13_DataAlignment = ffVerticalAligned;
const unsigned short      Amata13_Width  = 10;
const unsigned short      Amata13_Height = 16;

const unsigned char Amata13[2840] = 
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xE8,0x3F,0xE8,0x00,0x00,
	0x3E,0x00,0x3E,0x00,0x00,0x00,0x3E,0x00,0x3E,0x00,0x00,0x00,0x00,0x40,0x04,0x58,
	0x04,0x78,0x07,0xE0,0x1F,0xC8,0x3C,0x78,0x25,0xF0,0x0F,0xC0,0x3E,0x40,0x34,0x40,
	0x04,0x00,0x00,0x00,0x00,0x70,0x1E,0x70,0x3E,0x58,0x23,0x08,0xFF,0xFE,0xFF,0xFE,
	0x21,0x08,0x39,0x98,0x19,0xF0,0x00,0xE0,0x00,0x00,0x1F,0x00,0x3F,0x80,0x31,0x80,
	0x20,0x88,0x31,0xB8,0x3F,0xF0,0x1F,0xC0,0x07,0xF0,0x1F,0xF8,0x3B,0x18,0x22,0x08,
	0x03,0x18,0x03,0xF8,0x01,0xF0,0x00,0x00,0x00,0xF0,0x01,0xF8,0x1D,0x18,0x3F,0x08,
	0x27,0x88,0x27,0xD8,0x3C,0xF8,0x19,0xF8,0x03,0xD8,0x06,0x88,0x04,0x88,0x07,0x88,
	0x03,0x00,0x00,0x00,0x3E,0x00,0x3E,0x00,0x00,0x00,0x03,0xE0,0x0F,0xF8,0x1C,0x1C,
	0x18,0x0C,0x30,0x06,0x20,0x02,0x00,0x00,0x20,0x02,0x30,0x06,0x18,0x0C,0x1C,0x1C,
	0x0F,0xF8,0x03,0xE0,0x00,0x00,0x14,0x00,0x14,0x00,0x3F,0x00,0x3F,0x00,0x1C,0x00,
	0x14,0x00,0x00,0x00,0x00,0x80,0x00,0x80,0x00,0x80,0x0F,0xF8,0x0F,0xF8,0x00,0x80,
	0x00,0x80,0x00,0x80,0x00,0x00,0x00,0x19,0x00,0x1F,0x00,0x1E,0x00,0x00,0x00,0x80,
	0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x00,0x00,0x08,0x00,0x08,0x00,0x00,
	0x00,0x04,0x00,0x3C,0x00,0xF8,0x03,0xC0,0x1F,0x00,0x3C,0x00,0x20,0x00,0x00,0x00,
	0x07,0xE0,0x1F,0xF0,0x38,0x38,0x30,0x18,0x20,0x08,0x20,0x08,0x30,0x18,0x38,0x38,
	0x1F,0xF0,0x0F,0xC0,0x00,0x00,0x20,0x08,0x20,0x08,0x3F,0xF8,0x3F,0xF8,0x00,0x08,
	0x00,0x08,0x00,0x00,0x0C,0x38,0x1C,0x78,0x34,0xD0,0x20,0x90,0x21,0x98,0x21,0x18,
	0x33,0x28,0x1F,0x28,0x1E,0x38,0x00,0x30,0x00,0x00,0x00,0x70,0x3C,0x70,0x3C,0x58,
	0x22,0x48,0x26,0x08,0x2E,0x08,0x3E,0x08,0x3B,0x18,0x31,0xF0,0x01,0xE0,0x00,0x00,
	0x00,0xC0,0x01,0xC0,0x03,0xC0,0x0F,0x40,0x1C,0x48,0x38,0x48,0x3F,0xF8,0x3F,0xF8,
	0x00,0x48,0x00,0x48,0x00,0x00,0x00,0x70,0x3F,0x70,0x3F,0x58,0x22,0x08,0x22,0x08,
	0x22,0x08,0x23,0x18,0x3B,0xF0,0x19,0xE0,0x00,0x00,0x07,0xE0,0x1F,0xF0,0x1B,0x18,
	0x32,0x08,0x22,0x08,0x22,0x08,0x22,0x08,0x3B,0x18,0x19,0xF0,0x00,0xE0,0x00,0x00,
	0x3E,0x00,0x3E,0x00,0x20,0x00,0x30,0x78,0x39,0xF8,0x1B,0x80,0x0E,0x00,0x3C,0x00,
	0x38,0x00,0x00,0x00,0x00,0xE0,0x1D,0xF0,0x3F,0x18,0x36,0x08,0x22,0x08,0x22,0x08,
	0x37,0x08,0x3D,0x18,0x1D,0xF0,0x00,0xE0,0x00,0x00,0x0E,0x30,0x1F,0x38,0x31,0x88,
	0x20,0x88,0x20,0x88,0x20,0x98,0x31,0xB8,0x1F,0xF0,0x0F,0xC0,0x00,0x00,0x02,0x08,
	0x02,0x08,0x00,0x00,0x02,0x0D,0x02,0x0F,0x00,0x0E,0x00,0x00,0x00,0x80,0x01,0xC0,
	0x01,0xC0,0x01,0x60,0x03,0x30,0x02,0x30,0x06,0x18,0x04,0x18,0x0C,0x08,0x00,0x00,
	0x01,0x20,0x01,0x20,0x01,0x20,0x01,0x20,0x01,0x20,0x01,0x20,0x01,0x20,0x01,0x20,
	0x01,0x20,0x00,0x00,0x04,0x08,0x06,0x18,0x02,0x10,0x02,0x30,0x03,0x20,0x01,0x60,
	0x01,0xC0,0x00,0xC0,0x00,0x80,0x00,0x00,0x1C,0x00,0x1C,0x00,0x34,0x00,0x20,0xE8,
	0x20,0xE8,0x21,0x80,0x33,0x00,0x1F,0x00,0x1E,0x00,0x00,0x00,0x03,0xC0,0x0E,0x70,
	0x18,0x10,0x13,0xC8,0x36,0x28,0x2C,0x28,0x28,0xE8,0x2F,0x88,0x20,0x48,0x30,0x20,
	0x18,0xC0,0x0F,0x80,0x00,0x00,0x00,0x08,0x00,0x08,0x00,0x78,0x03,0xF8,0x0F,0xC8,
	0x3E,0x88,0x38,0x80,0x3E,0x88,0x0F,0xE8,0x01,0xF8,0x00,0x38,0x00,0x08,0x00,0x08,
	0x00,0x00,0x20,0x08,0x20,0x08,0x3F,0xF8,0x3F,0xF8,0x21,0x08,0x21,0x08,0x21,0x08,
	0x21,0x08,0x23,0x98,0x3E,0xF0,0x1C,0xF0,0x00,0x00,0x07,0xC0,0x1F,0xF0,0x18,0x38,
	0x30,0x18,0x20,0x08,0x20,0x08,0x20,0x08,0x30,0x18,0x3E,0x70,0x3E,0x60,0x00,0x00,
	0x20,0x08,0x20,0x08,0x3F,0xF8,0x3F,0xF8,0x20,0x08,0x20,0x08,0x20,0x08,0x20,0x08,
	0x30,0x18,0x18,0x30,0x1F,0xF0,0x07,0xC0,0x00,0x00,0x20,0x08,0x20,0x08,0x3F,0xF8,
	0x3F,0xF8,0x21,0x08,0x23,0x88,0x27,0xC8,0x27,0xC8,0x20,0x08,0x3C,0xF8,0x3C,0xF8,
	0x00,0x00,0x20,0x08,0x20,0x08,0x3F,0xF8,0x3F,0xF8,0x21,0x08,0x23,0x88,0x27,0xC0,
	0x27,0xC0,0x20,0x00,0x3E,0x00,0x3E,0x00,0x00,0x00,0x07,0xC0,0x1F,0xF0,0x18,0x30,
	0x30,0x18,0x20,0x08,0x20,0x08,0x21,0x08,0x31,0x98,0x3D,0xF8,0x3D,0xF8,0x01,0x80,
	0x01,0x00,0x00,0x00,0x20,0x08,0x20,0x08,0x3F,0xF8,0x3F,0xF8,0x21,0x08,0x21,0x08,
	0x01,0x00,0x21,0x08,0x21,0x08,0x3F,0xF8,0x3F,0xF8,0x20,0x08,0x20,0x08,0x00,0x00,
	0x20,0x08,0x20,0x08,0x3F,0xF8,0x3F,0xF8,0x20,0x08,0x20,0x08,0x00,0x00,0x00,0x70,
	0x00,0xF8,0x00,0xD8,0x00,0xC8,0x00,0x08,0x20,0x08,0x20,0x18,0x3F,0xF0,0x3F,0xE0,
	0x20,0x00,0x20,0x00,0x00,0x00,0x20,0x08,0x20,0x08,0x3F,0xF8,0x3F,0xF8,0x23,0x08,
	0x27,0x08,0x07,0x80,0x2F,0xE8,0x3C,0x78,0x38,0x10,0x30,0x18,0x20,0x08,0x20,0x08,
	0x00,0x00,0x20,0x08,0x20,0x08,0x3F,0xF8,0x3F,0xF8,0x20,0x08,0x20,0x08,0x00,0x08,
	0x00,0x08,0x00,0xF8,0x00,0xF8,0x00,0x00,0x20,0x08,0x20,0x08,0x3F,0xF8,0x3F,0xF8,
	0x3F,0x00,0x1F,0xE0,0x03,0xF8,0x00,0x38,0x01,0xF8,0x1F,0xE0,0x3F,0x08,0x3F,0xF8,
	0x3F,0xF8,0x20,0x08,0x20,0x08,0x00,0x00,0x20,0x08,0x20,0x08,0x3F,0xF8,0x3F,0xF8,
	0x3C,0x08,0x1F,0x08,0x07,0xC0,0x21,0xF0,0x20,0x78,0x3F,0xF8,0x3F,0xF8,0x20,0x00,
	0x20,0x00,0x00,0x00,0x07,0xC0,0x1F,0xF0,0x38,0x38,0x30,0x18,0x20,0x08,0x20,0x08,
	0x30,0x18,0x38,0x38,0x1F,0xF0,0x0F,0xC0,0x00,0x00,0x20,0x08,0x20,0x08,0x3F,0xF8,
	0x3F,0xF8,0x21,0x08,0x21,0x08,0x21,0x00,0x21,0x00,0x33,0x00,0x1E,0x00,0x1E,0x00,
	0x00,0x00,0x07,0xC0,0x1F,0xF0,0x38,0x38,0x30,0x78,0x20,0x48,0x20,0x48,0x30,0x7E,
	0x38,0x3E,0x1F,0xF7,0x07,0xC7,0x00,0x00,0x20,0x08,0x20,0x08,0x3F,0xF8,0x3F,0xF8,
	0x21,0x08,0x21,0x08,0x21,0x00,0x21,0x00,0x33,0xF8,0x3E,0xF8,0x1C,0x08,0x00,0x08,
	0x00,0x00,0x1E,0xF8,0x1E,0x78,0x33,0x18,0x23,0x08,0x21,0x08,0x21,0x08,0x31,0x98,
	0x3D,0xF0,0x3C,0xF0,0x00,0x00,0x3E,0x00,0x3E,0x00,0x20,0x08,0x20,0x08,0x3F,0xF8,
	0x3F,0xF8,0x20,0x08,0x20,0x08,0x3E,0x00,0x3E,0x00,0x00,0x00,0x20,0x00,0x20,0x00,
	0x3F,0xF0,0x3F,0xF0,0x20,0x18,0x20,0x08,0x00,0x08,0x20,0x08,0x20,0x18,0x3F,0xF0,
	0x3F,0xE0,0x20,0x00,0x20,0x00,0x00,0x00,0x20,0x00,0x20,0x00,0x38,0x00,0x3E,0x00,
	0x3F,0xC0,0x23,0xF8,0x00,0x38,0x20,0xF8,0x27,0xF0,0x3F,0x80,0x38,0x00,0x20,0x00,
	0x20,0x00,0x00,0x00,0x20,0x00,0x20,0x00,0x3C,0x00,0x3F,0xC0,0x0F,0xF8,0x00,0xF8,
	0x3F,0xF8,0x3F,0x00,0x3F,0x00,0x1F,0xF8,0x00,0xF8,0x23,0xF8,0x3F,0xE0,0x3E,0x00,
	0x20,0x00,0x20,0x00,0x00,0x00,0x00,0x08,0x20,0x08,0x20,0x18,0x30,0x38,0x3C,0x78,
	0x3E,0xE8,0x07,0x88,0x27,0x80,0x3E,0xC8,0x38,0x78,0x30,0x38,0x20,0x18,0x20,0x08,
	0x00,0x08,0x00,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x38,0x00,0x3C,0x08,0x2F,0x08,
	0x23,0xF8,0x03,0xF8,0x27,0x08,0x3E,0x08,0x38,0x00,0x30,0x00,0x20,0x00,0x20,0x00,
	0x00,0x00,0x3C,0x18,0x3C,0x38,0x20,0x78,0x20,0xC8,0x21,0x88,0x23,0x08,0x26,0x08,
	0x2C,0x18,0x38,0x78,0x30,0x78,0x00,0x00,0x3F,0xFE,0x3F,0xFE,0x20,0x02,0x20,0x02,
	0x00,0x00,0x20,0x00,0x38,0x00,0x1F,0x00,0x07,0xC0,0x01,0xF0,0x00,0x38,0x00,0x08,
	0x00,0x00,0x20,0x02,0x20,0x02,0x3F,0xFE,0x3F,0xFE,0x00,0x00,0x01,0x00,0x07,0x00,
	0x1E,0x00,0x38,0x00,0x30,0x00,0x3C,0x00,0x0F,0x00,0x03,0x00,0x00,0x00,0x00,0x02,
	0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,
	0x00,0x00,0x20,0x00,0x30,0x00,0x30,0x00,0x10,0x00,0x00,0x00,0x00,0x30,0x03,0x78,
	0x07,0x48,0x04,0x48,0x04,0xC8,0x04,0x98,0x07,0xF8,0x03,0xF0,0x00,0x38,0x00,0x38,
	0x00,0x00,0x20,0x00,0x20,0x00,0x3F,0xF8,0x3F,0xF8,0x06,0x18,0x04,0x08,0x04,0x08,
	0x06,0x18,0x03,0xF0,0x01,0xE0,0x00,0x00,0x01,0xE0,0x03,0xF0,0x06,0x18,0x04,0x08,
	0x04,0x08,0x05,0x18,0x07,0x70,0x03,0x60,0x00,0x00,0x01,0xE0,0x03,0xF0,0x06,0x18,
	0x04,0x08,0x24,0x08,0x26,0x18,0x3F,0xF8,0x3F,0xF8,0x00,0x08,0x00,0x08,0x00,0x00,
	0x01,0xE0,0x03,0xF0,0x06,0x98,0x04,0x88,0x04,0x88,0x06,0x98,0x07,0xB8,0x03,0xB0,
	0x00,0x00,0x04,0x08,0x04,0x08,0x3F,0xF8,0x3F,0xF8,0x24,0x08,0x34,0x08,0x30,0x00,
	0x00,0x00,0x00,0x64,0x03,0xFF,0x07,0xDB,0x06,0x51,0x04,0x51,0x0E,0x51,0x1F,0xDB,
	0x1B,0x8F,0x18,0x04,0x18,0x00,0x00,0x00,0x20,0x08,0x20,0x08,0x3F,0xF8,0x3F,0xF8,
	0x03,0x08,0x06,0x00,0x06,0x08,0x07,0xF8,0x03,0xF8,0x00,0x08,0x00,0x08,0x00,0x00,
	0x04,0x08,0x24,0x08,0x27,0xF8,0x27,0xF8,0x00,0x08,0x00,0x08,0x00,0x00,0x00,0x03,
	0x00,0x03,0x04,0x01,0x04,0x01,0x27,0xFF,0x27,0xFE,0x00,0x00,0x20,0x08,0x20,0x08,
	0x3F,0xF8,0x3F,0xF8,0x00,0xC0,0x05,0xC8,0x07,0xF8,0x06,0x38,0x04,0x18,0x04,0x08,
	0x00,0x08,0x00,0x00,0x20,0x08,0x20,0x08,0x3F,0xF8,0x3F,0xF8,0x00,0x08,0x00,0x08,
	0x00,0x00,0x04,0x08,0x04,0x08,0x07,0xF8,0x07,0xF8,0x02,0x08,0x04,0x00,0x04,0x08,
	0x07,0xF8,0x07,0xF8,0x02,0x08,0x04,0x00,0x06,0x08,0x07,0xF8,0x03,0xF8,0x00,0x08,
	0x00,0x08,0x00,0x00,0x04,0x08,0x04,0x08,0x07,0xF8,0x03,0xF8,0x06,0x08,0x04,0x00,
	0x04,0x08,0x07,0xF8,0x03,0xF8,0x00,0x08,0x00,0x08,0x00,0x00,0x01,0xE0,0x03,0xF0,
	0x06,0x18,0x04,0x08,0x04,0x08,0x04,0x08,0x06,0x18,0x03,0xF0,0x01,0xE0,0x00,0x00,
	0x04,0x01,0x04,0x01,0x07,0xFF,0x07,0xFF,0x06,0x19,0x04,0x09,0x04,0x18,0x06,0x30,
	0x03,0xE0,0x01,0xC0,0x00,0x00,0x01,0xE0,0x03,0xF0,0x06,0x38,0x04,0x18,0x04,0x09,
	0x06,0x19,0x07,0xFF,0x07,0xFF,0x00,0x01,0x00,0x01,0x00,0x00,0x04,0x08,0x04,0x08,
	0x07,0xF8,0x07,0xF8,0x06,0x08,0x04,0x08,0x05,0x00,0x07,0x00,0x03,0x00,0x00,0x00,
	0x03,0xB8,0x07,0xB8,0x04,0x98,0x04,0x88,0x04,0xC8,0x07,0x48,0x07,0x78,0x00,0x70,
	0x00,0x00,0x04,0x00,0x3F,0xF0,0x3F,0xF8,0x04,0x08,0x04,0x08,0x04,0x78,0x00,0x70,
	0x00,0x00,0x04,0x00,0x04,0x00,0x07,0xF0,0x07,0xF8,0x00,0x18,0x00,0x08,0x04,0x18,
	0x07,0xF8,0x07,0xF8,0x04,0x08,0x00,0x08,0x00,0x00,0x04,0x00,0x04,0x00,0x07,0x80,
	0x07,0xE0,0x04,0xF8,0x00,0x18,0x04,0xF8,0x07,0xE0,0x07,0x80,0x04,0x00,0x04,0x00,
	0x00,0x00,0x04,0x00,0x04,0x00,0x07,0x80,0x07,0xF8,0x04,0x78,0x01,0xF8,0x07,0xE0,
	0x07,0xC0,0x03,0xF8,0x00,0x78,0x07,0xF8,0x07,0xE0,0x06,0x00,0x04,0x00,0x00,0x00,
	0x04,0x08,0x04,0x08,0x06,0x18,0x07,0x78,0x01,0xE8,0x05,0xE0,0x07,0x38,0x06,0x18,
	0x04,0x08,0x04,0x08,0x00,0x00,0x04,0x06,0x04,0x07,0x07,0x01,0x07,0xE3,0x07,0xFF,
	0x04,0x7E,0x00,0x7C,0x05,0xF0,0x07,0xC0,0x06,0x00,0x04,0x00,0x00,0x00,0x07,0x18,
	0x07,0x38,0x04,0x78,0x04,0xE8,0x05,0xC8,0x07,0x88,0x07,0x78,0x06,0x78,0x00,0x00,
	0x00,0x80,0x3F,0xFE,0x3F,0x7E,0x20,0x02,0x00,0x00,0x3F,0xF8,0x3F,0xF8,0x00,0x00,
	0x20,0x02,0x3F,0x7E,0x3F,0xFE,0x00,0x80,0x00,0x00,0x00,0xC0,0x01,0xC0,0x01,0x00,
	0x01,0x80,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x01,0xC0,0x01,0x00,0x00,0x00,0xFF,0xF8,
	0xFF,0xF8,0x80,0x08,0x80,0x08,0x80,0x08,0x80,0x08,0x80,0x08,0x80,0x08,0x80,0x08,
	0x80,0x08,0x80,0x08,0xFF,0xF8,0xFF,0xF8,0x00,0x00,0x07,0xC0,0x0C,0x60,0x18,0x30,
	0x33,0xD8,0x2F,0xE8,0x2C,0x68,0x28,0x28,0x2C,0x68,0x2E,0x68,0x32,0x58,0x1C,0x30,
	0x0F,0xE0,0x07,0xC0,0x00,0x00,0x07,0xC0,0x1F,0xE0,0x18,0x70,0x30,0x18,0x2F,0xC8,
	0x2F,0xC8,0x29,0x08,0x2F,0xC8,0x26,0xC8,0x30,0x58,0x1C,0x30,0x0F,0xE0,0x07,0xC0,
	0x00,0x00,0x01,0x8C,0x1F,0xCE,0x3E,0x6A,0x26,0x62,0x23,0x32,0x3B,0xFE,0x19,0xDC,
	0x00,0x00,0xFF,0xF8,0xFF,0xF8,0x80,0x08,0x80,0x08,0x80,0x08,0x80,0x08,0x80,0x08,
	0x80,0x08,0x80,0x08,0x80,0x08,0x80,0x08,0xFF,0xF8,0xFF,0xF8,0x00,0x00,0x00,0x30,
	0x03,0x78,0x07,0x48,0x14,0x48,0x34,0xC8,0x34,0x98,0x27,0xF8,0x03,0xF8,0x00,0x38,
	0x00,0x38,0x00,0x00,0x00,0x30,0x23,0x78,0x27,0x48,0x04,0x48,0x04,0xC8,0x24,0x98,
	0x27,0xF8,0x03,0xF8,0x00,0x38,0x00,0x38,0x00,0x00,0x01,0xE0,0x03,0xF0,0x26,0x18,
	0x34,0x08,0x14,0x08,0x35,0x18,0x27,0x70,0x03,0x60,0x00,0x00,0x01,0xE0,0x03,0xF0,
	0x06,0x18,0x04,0x08,0x24,0x08,0x26,0x18,0x3F,0xF8,0x3F,0xF8,0x00,0x08,0x04,0x08,
	0x3C,0x00,0x38,0x00,0x01,0xE0,0x03,0xF0,0x06,0x98,0x14,0x88,0x34,0x88,0x26,0x98,
	0x27,0xB8,0x03,0xB0,0x00,0x00,0x01,0xE0,0x03,0xF0,0x26,0x98,0x34,0x88,0x14,0x88,
	0x36,0x98,0x27,0xB8,0x03,0xB0,0x00,0x00,0x04,0x08,0x04,0x08,0x17,0xF8,0x37,0xF8,
	0x20,0x08,0x20,0x08,0x00,0x00,0x04,0x08,0x04,0x08,0x07,0xF8,0x27,0xF8,0x36,0x08,
	0x14,0x00,0x34,0x08,0x27,0xF8,0x03,0xF8,0x00,0x08,0x00,0x08,0x00,0x00,0x01,0xE0,
	0x03,0xF0,0x06,0x18,0x14,0x08,0x34,0x08,0x24,0x08,0x26,0x18,0x03,0xF0,0x01,0xE0,
	0x00,0x00,0x01,0xE0,0x23,0xF0,0x26,0x18,0x04,0x08,0x04,0x08,0x24,0x08,0x26,0x18,
	0x03,0xF0,0x01,0xE0,0x00,0x00,0x04,0x08,0x04,0x08,0x27,0xF8,0x37,0xF8,0x16,0x08,
	0x34,0x08,0x25,0x00,0x07,0x00,0x03,0x00,0x00,0x00,0x03,0xB8,0x27,0xB8,0x34,0x98,
	0x14,0x88,0x34,0xC8,0x2F,0x48,0x0F,0x78,0x00,0x70,0x00,0x00,0x04,0x00,0x3F,0xF0,
	0x3F,0xF8,0x04,0x08,0x14,0x08,0x74,0x78,0x60,0x70,0x00,0x00,0x04,0x00,0x04,0x00,
	0x07,0xF0,0x07,0xF8,0x10,0x18,0x10,0x08,0x34,0x18,0x27,0xF8,0x07,0xF8,0x04,0x08,
	0x00,0x08,0x00,0x00,0x04,0x00,0x04,0x00,0x07,0xF0,0x37,0xF8,0x20,0x18,0x00,0x08,
	0x34,0x18,0x27,0xF8,0x07,0xF8,0x00,0x08,0x00,0x08,0x00,0x00,0x04,0x00,0x07,0xF0,
	0x03,0xF8,0x18,0x18,0x28,0x08,0x28,0x08,0x34,0x18,0x07,0xF8,0x03,0xF8,0x00,0x08,
	0x00,0x08,0x00,0x00,0x04,0x06,0x04,0x07,0x07,0x01,0x07,0xE3,0x07,0xFF,0x10,0x7E,
	0x30,0x7C,0x25,0xF0,0x27,0xC0,0x06,0x00,0x04,0x00,0x00,0x00,0x07,0x18,0x07,0x38,
	0x24,0x78,0x34,0xE8,0x15,0xC8,0x37,0x88,0x27,0x78,0x06,0x78,0x00,0x00,0x00,0x08,
	0x00,0x08,0x00,0x78,0x03,0xF8,0x0F,0xC8,0x3E,0x88,0xB8,0x80,0xBE,0x88,0x8F,0xE8,
	0x81,0xF8,0x00,0x38,0x00,0x08,0x00,0x08,0x00,0x00,0x00,0x08,0x00,0x08,0x00,0x38,
	0x01,0xF8,0x8F,0xE8,0xBE,0x88,0x30,0x88,0xBE,0x88,0x8F,0xE8,0x01,0xF8,0x00,0x78,
	0x00,0x08,0x00,0x08,0x00,0x00,0x07,0xC0,0x1F,0xF0,0x18,0x38,0xB0,0x18,0xE0,0x08,
	0x60,0x08,0xE0,0x08,0xB0,0x18,0x3E,0x70,0x3E,0x60,0x00,0x00,0x20,0x08,0x20,0x08,
	0x3F,0xF8,0xBF,0xF8,0xE0,0x08,0x60,0x08,0xE0,0x08,0xA0,0x08,0x30,0x18,0x18,0x30,
	0x1F,0xF0,0x07,0xC0,0x00,0x00,0x20,0x08,0x20,0x08,0x3F,0xF8,0x3F,0xF8,0x21,0x08,
	0xA3,0x88,0xA7,0xC8,0xA7,0xC8,0xA0,0x08,0x3C,0xF8,0x3C,0xF8,0x00,0x00,0x20,0x08,
	0x20,0x08,0x3F,0xF8,0x3F,0xF8,0xA1,0x08,0xE3,0x88,0x67,0xC8,0xE7,0xC8,0xA0,0x08,
	0x3C,0xF8,0x3C,0xF8,0x00,0x00,0x20,0x08,0x20,0x08,0xBF,0xF8,0xBF,0xF8,0xA0,0x08,
	0xA0,0x08,0x00,0x00,0x20,0x08,0x20,0x08,0x3F,0xF8,0x3F,0xF8,0xBC,0x08,0xDF,0x08,
	0x47,0xC0,0xC1,0xF0,0xA0,0x78,0x3F,0xF8,0x3F,0xF8,0x20,0x00,0x20,0x00,0x00,0x00,
	0x07,0xC0,0x1F,0xF0,0x38,0x38,0x30,0x18,0xA0,0x08,0xA0,0x08,0xB0,0x18,0xB8,0x38,
	0x1F,0xF0,0x0F,0xC0,0x00,0x00,0x07,0xC0,0x1F,0xF0,0xB8,0x38,0xB0,0x18,0x20,0x08,
	0x20,0x08,0xB0,0x18,0xB8,0x38,0x1F,0xF0,0x0F,0xC0,0x00,0x00,0x20,0x08,0x20,0x08,
	0x3F,0xF8,0x3F,0xF8,0xA1,0x08,0xE1,0x08,0x61,0x00,0xE1,0x00,0xB3,0xF8,0x3E,0xF8,
	0x1C,0x08,0x00,0x08,0x00,0x00,0x1E,0xF8,0x1E,0xF8,0x33,0x18,0xA3,0x08,0xE1,0x08,
	0x61,0x08,0xF1,0x98,0xBD,0xF0,0x3C,0xF0,0x00,0x00,0x3E,0x00,0x3E,0x00,0x20,0x08,
	0xA0,0x08,0xFF,0xF8,0x7F,0xF8,0xE0,0x08,0xA0,0x08,0x3E,0x00,0x3E,0x00,0x00,0x00,
	0x20,0x00,0x20,0x00,0x3F,0xF0,0x3F,0xF0,0x20,0x18,0x20,0x08,0x80,0x08,0xA0,0x08,
	0xA0,0x18,0xBF,0xF0,0x3F,0xE0,0x20,0x00,0x20,0x00,0x00,0x00,0x20,0x00,0x20,0x00,
	0x3F,0xF0,0x3F,0xF0,0xA0,0x18,0xA0,0x08,0x00,0x08,0xA0,0x08,0xA0,0x18,0x3F,0xF0,
	0x3F,0xE0,0x20,0x00,0x20,0x00,0x00,0x00,0x20,0x00,0x20,0x00,0x3F,0xF0,0x3F,0xF0,
	0x00,0x18,0x60,0x08,0xA0,0x08,0xA0,0x08,0xC0,0x08,0x20,0x18,0x3F,0xF0,0x3F,0xE0,
	0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x38,0x00,0x3C,0x08,0x2F,0x08,
	0x03,0xF8,0x83,0xF8,0xA7,0x08,0xBE,0x08,0xB8,0x00,0xB0,0x00,0x20,0x00,0x20,0x00,
	0x00,0x00,0x3C,0x18,0x3C,0x38,0x20,0x78,0xA1,0xC8,0xE3,0x88,0x67,0x08,0xEE,0x08,
	0xBC,0x18,0x38,0x78,0x30,0x78,0x00,0x00
};

const unsigned short Amata13_Index[137] = 
{
	0x0000,0x000A,0x0010,0x001C,0x0034,0x004A,0x0068,0x0084,
	0x008A,0x0098,0x00A6,0x00B4,0x00C6,0x00CE,0x00DA,0x00E0,
	0x00F0,0x0106,0x0114,0x012A,0x0140,0x0156,0x016A,0x0180,
	0x0194,0x01AA,0x01BE,0x01C4,0x01CC,0x01E0,0x01F4,0x0208,
	0x021C,0x0236,0x0252,0x026A,0x0280,0x029A,0x02B2,0x02CA,
	0x02E4,0x0300,0x030E,0x0326,0x0342,0x0358,0x0378,0x0394,
	0x03AA,0x03C2,0x03D8,0x03F2,0x0406,0x041C,0x0438,0x0454,
	0x0476,0x0494,0x04B2,0x04C8,0x04D2,0x04E2,0x04EC,0x04FE,
	0x0512,0x051C,0x0532,0x0548,0x055A,0x0570,0x0582,0x0592,
	0x05A8,0x05C0,0x05CE,0x05DC,0x05F4,0x0602,0x0624,0x063C,
	0x0650,0x0666,0x067C,0x0690,0x06A2,0x06B2,0x06CA,0x06E2,
	0x0700,0x0716,0x072E,0x0740,0x074A,0x0750,0x075A,0x076E,
	0x078A,0x07A6,0x07C2,0x07D2,0x07EE,0x0804,0x081A,0x082C,
	0x0844,0x0856,0x0868,0x0876,0x088E,0x08A2,0x08B6,0x08CA,
	0x08DC,0x08EC,0x0904,0x091C,0x0934,0x094C,0x095E,0x097A,
	0x0996,0x09AC,0x09C6,0x09DE,0x09F6,0x0A04,0x0A20,0x0A36,
	0x0A4C,0x0A66,0x0A7A,0x0A90,0x0AAC,0x0AC8,0x0AE4,0x0B02,
	0x0B18
};

