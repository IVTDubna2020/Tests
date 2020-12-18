#include <stdio.h>
#include <math.h>

float function(float, float);

int main()
{
     for(float x = -1; x <= 1; x += 0.25)
     {
         for (float y=0; y <= 2; y += 0.2)
         if (fabs(sin(x)*sin(y))<0.000001) printf("%-8s ", "NaN");
         else printf("%-8.3f ", function(x, y));
         printf("\n");
     }
}

float function(float x, float y)
{
    return ((x+y+1)/(sin(x)*sin(y)))*log((x+y)/2);
}