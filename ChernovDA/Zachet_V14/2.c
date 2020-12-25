#include <stdio.h>
#include <math.h>

float function(float);

int main()
{
    float min = function(0.01);
    float result;
    for(float i = 0.5; i <= 10.0; i += 0.5)
    {   
        result = function(i);
        printf("y(%.1f)=%.4f\n", i, result);
        if (result < min) min = result;
    }
    printf("Min value = %.4f\n", min);
    return 0;
}

float function(float x)
{
    return x - log(x);
}
