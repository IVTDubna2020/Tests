//14 variant

#include <stdio.h>
#include <math.h>

float function(float, float);

int main()
{
    for(float x = 0; x <= 2 * M_PI; x += M_PI/10)
    {        
        for (float y = 0; y <= 2 * M_PI; y += M_PI/3)            
            if (fabs(sin(x)+cos(y))<0.000001) printf("%-8s ", "NaN");            
            else printf("%-8.3f ", function(x, y));
        printf("\n");        
    }
    printf("%.15f", sin(5*M_PI/10)+cos(3*M_PI/3));
}

float function(float x, float y)
{
    
    return (x+y)/(sin(x)+cos(y));
}
