
#include "utf8.h"

size_t utf8_encode(uint32_t codepoint, uint8_t seq[4]){

    size_t size = 0;

    if (codepoint > 0x10FFFF){
        return size;
    }

    if (codepoint <= 0x007F){
        seq[0] = codepoint;

        size = 1;
        return size;
    }

    if (codepoint <= 0x07FF){
        uint8_t b0, b1;
        b0 = codepoint >> 6;
        b1 = codepoint;

        seq[0] = 0xC0 | b0;
        seq[1] = 0x80 | b1;

        size = 2;
        return size;
    }

    if (codepoint <= 0xFFFF){
        uint8_t b0, b1, b2;
        b0 = codepoint >> 12;
        b1 = codepoint >> 6;
        b2 = codepoint;

        seq[0] = 0xE0 | b0;
        seq[1] = 0x80 | b1;
        seq[2] = 0x80 | b2;

        size = 3;
        return size;
    }

    if (codepoint <= 0x10FFFF){
        uint8_t b0, b1, b2, b3;
        b0 = codepoint >> 18;
        b1 = codepoint >> 12;
        b2 = codepoint >> 6;
        b3 = codepoint;

        seq[0] = 0xF0 | b0;
        seq[1] = 0x80 | b1;
        seq[2] = 0x80 | b2;
        seq[3] = 0x80 | b3;

        size = 4;
        return size;
    }

    return size;
}
