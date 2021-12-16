#include <stdbool.h>
#include <stdio.h>

bool crescente(unsigned int x)
{
  if(x<10){
    printf("%d è crescente\n", x);
    return true;
    }    
  unsigned int m, c, d, u;

  //m = (x/1000) % 10;
  c = (x/100) % 10;
  d = (x/10) % 10;
  u = (x/1) % 10;
  /*
  123/1=123  % 10 = 3;
  123/10=12  %10 = 2;
  123/100= 1 % 10 = 1;
  */
  if(c+1 == d && d+1 == u){
    printf("%d è crescente\n", x);
    return true;
  }
  else
    return false;
}

int main (void)
{
  unsigned int x = 123;

  bool c = crescente (x);
  return 0;
}

