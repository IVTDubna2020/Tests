//14 variant

#include <stdio.h>
#include <math.h>

float function(float, float);

int main()
{
    for(float x = 0; x <= 2 * M_PI; x += M_PI/10)
    {        
        for (float y = 0; y <= 2 * M_PI; y += M_PI/3)
            printf("%-20.3f ", function(x, y));
        printf("\n");        
    }
}

float function(float x, float y)
{
    return (x+y)/(sin(x)+cos(y));
}
