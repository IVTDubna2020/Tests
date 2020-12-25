#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float x,y,z,b;
    printf("Input x: ");
    scanf("%f", &x);
    printf("Input y: ");
    scanf("%f", &y);
    printf("Input z: ");
    scanf("%f", &z);
    b = pow(1.0+pow(tan((z+y)/2.0),2.0),2.0) *x;
    printf("b = %.4f\n", b);
    return 0;
}
