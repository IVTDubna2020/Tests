#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
    int m = -1;
    int k = 1;    
    float x0;
    float s = 0, s1 = 0;

    scanf("%f", &x0);
    float x = x0;

    do
    {
        s = s1;
        s1 += m * x / k * sin(k*x);
        m *= -1;
        x *= x0;
    } while(abs(s-s1) > 0.0001);
    
    printf("%f\n", s1);

    return 0;
}
