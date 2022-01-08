
#include "WTK.h"

/*      POINT(5 1)↵
        POINT(4 3.7)↵
        POINT(6.3 8)↵
*/

size_t write_points(FILE *f, const struct point *p, size_t n){

    if (!f || !p || n == 0)
        return 0;
    
    size_t w_count = 0;

    for (size_t i = 0; i<n; i++){
        //reading all p elements
        //writing in f 

        fprintf(f, "POINT(%g %g)\n", p[i].x, p[i].y);
        w_count++;
    }


    return w_count;
}
