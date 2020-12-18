#include <stdio.h>
#include <math.h>

float Fr(float,float);
int main()
{
   for(float x=0; x<=2; x+=0.25)
    {        
        
        for (float y=-0.5; y<=0.5;y+=0.1)
         printf("%-10.3f",Fr(x, y));
        printf("\n");
    }
}

float Fr(float x,float y)
{
  return ((exp(x)+exp(x*-1))/(exp(y)-exp(y*-1)))*(asin((x+y)/2)*(180/M_PI));
}