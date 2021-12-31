
/* Print a sideways sine wave pattern using ASCII characters
 *
 * Outputs an MAXCHARS-byte array of ASCII characters (string) MAXLINES times, 
 * each time replacing elements inthe array with an asterisk ('*') character
 * to create a sideways plot of a sine function
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAXCHARS 80
#define MAXLINES 40
#define MAXSTR   (MAXCHARS-1)
#define MIDPOINT ((MAXCHARS/2)-1)
#define SCALEDIV (MAXLINES/2)

int main (void){

    int i;                      //loop index
    int offset;                 //offset into output str
    char sin_string[MAXCHARS];        //data array


    memset(sin_string, ' ', MAXCHARS);        //fill array with spaces 0x20
    sin_string[MAXSTR] = '\0';      //string terminator


    //printing 20 lines to cover one cycle
    for (i = 0; i<MAXLINES; i++){
        offset = MIDPOINT + (int)((int)MIDPOINT * sin(M_PI * (float) i/(int)SCALEDIV));

        sin_string[offset] = '*';
        printf("%s\n", sin_string);

        //printing done, now clearing the character...
        sin_string[offset] = ' ';

        //repeat
    }

}
