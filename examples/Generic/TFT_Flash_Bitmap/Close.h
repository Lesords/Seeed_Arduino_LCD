// We need this header file to use FLASH as storage with PROGMEM directive:
#include <pgmspace.h>

// Icon width and height
const uint16_t closeWidth = 32;
const uint16_t closeHeight = 32;

const unsigned short  closeX[1024] PROGMEM = {
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x30C3, 0x4124, 0x61C7, 0x61C7, 0x4124, 0x30E3, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // row 0, 32 pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x48E3, 0xA249, 0xEB8E, 0xFCB2, 0xFD14, 0xFD75, 0xFD96, 0xFD34, 0xFCF3, 0xEBEF, 0xA28A, 0x4904, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // row 1, 64 pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x58E3, 0xC228, 0xFC10, 0xFD34, 0xFE18, 0xFE59, 0xFE79, 0xFE9A, 0xFE9A, 0xFE9A, 0xFE9A, 0xFE59, 0xFD75, 0xFC51, 0xC28A, 0x5904, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // row 2, 96 pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2041, 0x8945, 0xF34D, 0xFD34, 0xFDB6, 0xFD75, 0xFD55, 0xFD55, 0xFD96, 0xFDD7, 0xFDF7, 0xFDF7, 0xFDB6, 0xFDB6, 0xFDD7, 0xFDF7, 0xFD75, 0xF38E, 0x8965, 0x2041, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // row 3, 128 pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x4082, 0xE208, 0xF410, 0xFD34, 0xFC92, 0xFBEF, 0xFBAE, 0xFBEF, 0xFC71, 0xFD14, 0xFD75, 0xFDB6, 0xFD75, 0xFD14, 0xFC92, 0xFC51, 0xFC71, 0xFCF3, 0xFD75, 0xFC30, 0xEA28, 0x40A2, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // row 4, 160 pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x3861, 0xE1E7, 0xF451, 0xFC92, 0xFB4D, 0xFA49, 0xFA49, 0xFAEB, 0xFBAE, 0xFC71, 0xFD34, 0xFDB6, 0xFE18, 0xFDB6, 0xFD34, 0xFC71, 0xFBAE, 0xFB0C, 0xFAEB, 0xFBAE, 0xFCD3, 0xFC71, 0xE208, 0x4082, 0x0000, 0x0000, 0x0000, 0x0000, // row 5, 192 pixels
    0x0000, 0x0000, 0x0000, 0x1020, 0xD986, 0xF430, 0xFC30, 0xFA28, 0xF924, 0xF965, 0xFA8A, 0xFB0C, 0xFBAE, 0xFC51, 0xFD14, 0xFD75, 0xFDB6, 0xFD75, 0xFD14, 0xFC51, 0xFC71, 0xFBEF, 0xFA28, 0xF9C7, 0xFA8A, 0xFC51, 0xF430, 0xD9A6, 0x1020, 0x0000, 0x0000, 0x0000, // row 6, 224 pixels
    0x0000, 0x0000, 0x0000, 0x78A2, 0xEB6D, 0xFC30, 0xF9C7, 0xF861, 0xF8A2, 0xFA08, 0xFEDB, 0xFD55, 0xFB4D, 0xFC10, 0xFC92, 0xFD14, 0xFD34, 0xFD14, 0xFC92, 0xFCB2, 0xFF7D, 0xFF7D, 0xFB2C, 0xF945, 0xF8E3, 0xF9E7, 0xFC30, 0xEB8E, 0x78C3, 0x0000, 0x0000, 0x0000, // row 7, 256 pixels
    0x0000, 0x0000, 0x3841, 0xD9E7, 0xF492, 0xF208, 0xF041, 0xF800, 0xF945, 0xFE9A, 0xFFFF, 0xFFFF, 0xFD75, 0xFB8E, 0xFC10, 0xFC51, 0xFC71, 0xFC51, 0xFCB2, 0xFF7D, 0xFFFF, 0xFFFF, 0xFF3C, 0xFA8A, 0xF882, 0xF841, 0xFA08, 0xFC92, 0xDA08, 0x3841, 0x0000, 0x0000, // row 8, 288 pixels
    0x0000, 0x0000, 0x88A2, 0xEBCF, 0xF2EB, 0xF061, 0xF000, 0xF8E3, 0xFE79, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFD75, 0xFB4D, 0xFBAE, 0xFBAE, 0xFC71, 0xFF7D, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFEFB, 0xFA28, 0xF800, 0xF061, 0xF2EB, 0xEBEF, 0x90C3, 0x0000, 0x0000, // row 9, 320 pixels
    0x0000, 0x2820, 0xD1C7, 0xF410, 0xE945, 0xE800, 0xF000, 0xFE9A, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFD34, 0xFAEB, 0xFBCF, 0xFF5D, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFF1C, 0xF986, 0xF000, 0xF145, 0xF410, 0xD1E7, 0x2820, 0x0000, // row 10, 352 pixels
    0x0000, 0x6841, 0xDB2C, 0xEACB, 0xE041, 0xE800, 0xF000, 0xFEFB, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFD14, 0xFF1C, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFBCF, 0xF082, 0xF000, 0xE841, 0xEACB, 0xE34D, 0x7061, 0x0000, // row 11, 384 pixels
    0x0000, 0x9861, 0xE3CF, 0xE186, 0xE000, 0xE800, 0xE800, 0xF145, 0xFEDB, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFB8E, 0xF000, 0xF000, 0xE800, 0xE800, 0xE986, 0xEBCF, 0xA082, 0x0000, // row 12, 416 pixels
    0x0800, 0xB8A2, 0xE3AE, 0xD8A2, 0xD800, 0xE000, 0xE800, 0xE800, 0xF145, 0xFEFB, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFB8E, 0xF000, 0xF000, 0xE800, 0xE800, 0xE000, 0xE0A2, 0xEBAE, 0xC0C3, 0x0800, // row 13, 448 pixels
    0x1800, 0xC124, 0xE30C, 0xD020, 0xD800, 0xE000, 0xE000, 0xE800, 0xE800, 0xF145, 0xFEDB, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFB8E, 0xF000, 0xF000, 0xE800, 0xE800, 0xE000, 0xE000, 0xD820, 0xE30C, 0xC124, 0x1800, // row 14, 480 pixels
    0x2800, 0xC165, 0xDAAA, 0xC800, 0xD000, 0xD800, 0xE000, 0xE000, 0xE800, 0xE800, 0xF124, 0xFE79, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFB6D, 0xF000, 0xF000, 0xE800, 0xE800, 0xE000, 0xE000, 0xD800, 0xD000, 0xDAAA, 0xC165, 0x2800, // row 15, 512 pixels
    0x2000, 0xB924, 0xD269, 0xC800, 0xD000, 0xD000, 0xD800, 0xE000, 0xE000, 0xE800, 0xE924, 0xFEFB, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xF36D, 0xE800, 0xE800, 0xE800, 0xE000, 0xE000, 0xD800, 0xD000, 0xD000, 0xDA69, 0xC145, 0x2800, // row 16, 544 pixels
    0x1000, 0xB0A2, 0xD28A, 0xC000, 0xC800, 0xD000, 0xD000, 0xD800, 0xD800, 0xE165, 0xFEFB, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xF3AE, 0xE000, 0xE000, 0xD800, 0xD800, 0xD000, 0xD000, 0xC800, 0xD28A, 0xB8C3, 0x1000, // row 17, 576 pixels
    0x0000, 0xA800, 0xD2AA, 0xB800, 0xC000, 0xC800, 0xC800, 0xD000, 0xD965, 0xFEFB, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xEBAE, 0xD800, 0xD800, 0xD000, 0xC800, 0xC800, 0xC000, 0xD2AA, 0xB020, 0x0000, // row 18, 608 pixels
    0x0000, 0x8000, 0xCA69, 0xB841, 0xB800, 0xC000, 0xC800, 0xD186, 0xFEFB, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xEBCF, 0xD000, 0xC800, 0xC800, 0xC000, 0xC041, 0xCA69, 0x8000, 0x0000, // row 19, 640 pixels
    0x0000, 0x4800, 0xC1C7, 0xB8E3, 0xB800, 0xB800, 0xC000, 0xF69A, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xEBEF, 0xFE79, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xE410, 0xC841, 0xC000, 0xB800, 0xC0E3, 0xC1C7, 0x4800, 0x0000, // row 20, 672 pixels
    0x0000, 0x1000, 0xB061, 0xC1E7, 0xB000, 0xB000, 0xB800, 0xD269, 0xFFBE, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xE38E, 0xD000, 0xD965, 0xF69A, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xDB0C, 0xC020, 0xB800, 0xB000, 0xC1E7, 0xB061, 0x1000, 0x0000, // row 21, 704 pixels
    0x0000, 0x0000, 0x6000, 0xB9C7, 0xB061, 0xB000, 0xB000, 0xB800, 0xCA49, 0xFF9E, 0xFFFF, 0xFFFF, 0xFFFF, 0xE38E, 0xC800, 0xC800, 0xC800, 0xD186, 0xF69A, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xDB0C, 0xB800, 0xB800, 0xB000, 0xB061, 0xC1C7, 0x6000, 0x0000, 0x0000, // row 22, 736 pixels
    0x0000, 0x0000, 0x1800, 0xB041, 0xB986, 0xA800, 0xA800, 0xB000, 0xB000, 0xCA49, 0xFF7D, 0xFFFF, 0xDB8E, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC986, 0xF6DB, 0xFFFF, 0xFFFF, 0xD30C, 0xB800, 0xB000, 0xB000, 0xA800, 0xB986, 0xB041, 0x1800, 0x0000, 0x0000, // row 23, 768 pixels
    0x0000, 0x0000, 0x0000, 0x5800, 0xB0E3, 0xA8C3, 0xA800, 0xA800, 0xA800, 0xB000, 0xCACB, 0xD38E, 0xB000, 0xB800, 0xB800, 0xB800, 0xB800, 0xB800, 0xB800, 0xC145, 0xF6DB, 0xD34D, 0xB000, 0xB000, 0xA800, 0xA800, 0xB0C3, 0xB0E3, 0x5800, 0x0000, 0x0000, 0x0000, // row 24, 800 pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x6000, 0xB124, 0xA882, 0xA000, 0xA800, 0xA800, 0xA800, 0xA800, 0xB000, 0xB000, 0xB000, 0xB000, 0xB000, 0xB000, 0xB000, 0xB000, 0xB000, 0xA800, 0xA800, 0xA800, 0xA800, 0xA882, 0xB124, 0x6000, 0x0000, 0x0000, 0x0000, 0x0000, // row 25, 832 pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6000, 0xB104, 0xA882, 0xA000, 0xA000, 0xA000, 0xA800, 0xA800, 0xA800, 0xA800, 0xA800, 0xA800, 0xA800, 0xA800, 0xA800, 0xA800, 0xA800, 0xA000, 0xA000, 0xA882, 0xB104, 0x6000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // row 26, 864 pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6000, 0xB0A2, 0xA8C3, 0xA020, 0xA000, 0xA000, 0xA000, 0xA000, 0xA000, 0xA000, 0xA000, 0xA000, 0xA000, 0xA000, 0xA000, 0xA000, 0xA020, 0xA8C3, 0xB0A2, 0x6000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // row 27, 896 pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x4800, 0xA800, 0xB0C3, 0xA0A2, 0x9800, 0x9800, 0x9800, 0x9800, 0xA000, 0xA000, 0xA000, 0x9800, 0x9800, 0x9800, 0xA082, 0xB0E3, 0xA800, 0x4800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // row 28, 928 pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x5800, 0xA800, 0xB0A2, 0xA8E3, 0xA0A2, 0xA041, 0x9800, 0x9800, 0xA041, 0xA0A2, 0xA8E3, 0xB0A2, 0xA800, 0x5800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // row 29, 960 pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x3000, 0x6000, 0x8800, 0xA000, 0xA800, 0xA800, 0xA000, 0x8800, 0x6000, 0x3000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // row 30, 992 pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
}; // row 31, 1024 pixels
