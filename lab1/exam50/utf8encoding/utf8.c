
#include "utf8.h"

/* the function receives a Unicode codepoint (between 0 and 10FFFF)
 * and converts it into a sequence (1 to 4 bytes) according to the utf8 standard
 * and inserts the resulting bytes into the buffer poined by seq
 *
 * return value is the total amount of bytes written, 0 if codepoint is >10FFFF
 *
 *++UTF8-ENCODING-SCHEMA+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 n_byte 	FIRST codep 	LAST codep 	(seq[0])        (seq[1])        (seq[2])        (seq[3])

  1 	        U+0000 	        U+007F 	        0xxxxxxx
  2 	        U+0080 	        U+07FF 	        110xxxxx 	10xxxxxx
  3 	        U+0800 	        U+FFFF 	        1110xxxx 	10xxxxxx 	10xxxxxx
  4 	        U+10000 	U+10FFFF 	11110xxx 	10xxxxxx 	10xxxxxx 	10xxxxxx
 *+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 */

size_t utf8_encode(uint32_t codepoint, uint8_t seq[4]){

    size_t c_byte = 0;

    //case 1 byte (n<128)
    if (codepoint <= 0x007F){

        seq[0] = codepoint;
        c_byte=1;
        return c_byte;

    }

    //case 2 bytes
    if (codepoint <= 0x07FF){

        seq[0] = 0xC0; //110(0 0000)
        seq[0] |= (codepoint >> 6); 
        seq[1] = codepoint; 

        //setting 7th bit to 1                  (1xxx xxxx)
        seq[1] |= (1<<7);
        //setting (clearing) 6th bit to 0       (x0xx xxxx)
        seq[1] &= ~(1<<6);

        c_byte=2;
        return c_byte;

    }

    //case 3 bytes
    if (codepoint <= 0xFFFF){

        //1ST BYTE
        seq[0] = 0xE0; //1110 (0000)
        seq[0] |= (codepoint >> 12); //1110 xxxx

        //2ND BYTE
        seq[1] = (codepoint >> 6); 
        //setting 7th bit to 1                  (1xxx xxxx)
        seq[1] |= (1<<7);
        //setting (clearing) 6th bit to 0       (x0xx xxxx)
        seq[1] &= ~(1<<6);

        //3DR BYTE
        seq[2] = codepoint; 
        //setting 7th bit to 1                  (1xxx xxxx)
        seq[2] |= (1<<7);
        //setting (clearing) 6th bit to 0       (x0xx xxxx)
        seq[2] &= ~(1<<6);

        c_byte=3;
        return c_byte;

    }

    //case 4 bytes
    if (codepoint <= 0x10FFFF){

        //1ST BYTE
        seq[0] = 0xF0; //1111 0(000)
        seq[0] |= (codepoint >> 18); //1111 0xxx

        //2ND BYTE
        seq[1] = (codepoint >> 12); 
        //setting 7th bit to 1                  (1xxx xxxx)
        seq[1] |= (1<<7);
        //setting (clearing) 6th bit to 0       (x0xx xxxx)
        seq[1] &= ~(1<<6);

        //3DR BYTE
        seq[2] = (codepoint >> 6); 
        //setting 7th bit to 1                  (1xxx xxxx)
        seq[2] |= (1<<7);
        //setting (clearing) 6th bit to 0       (x0xx xxxx)
        seq[2] &= ~(1<<6);

        //4TH BYTE
        seq[3] = codepoint; 
        //setting 7th bit to 1                  (1xxx xxxx)
        seq[3] |= (1<<7);
        //setting (clearing) 6th bit to 0       (x0xx xxxx)
        seq[3] &= ~(1<<6);

        c_byte=4;
        return c_byte;
    }

    return c_byte;
}
