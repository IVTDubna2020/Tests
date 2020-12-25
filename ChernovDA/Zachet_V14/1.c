#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, y, z, b;
    scanf("%f%f%f", &x, &y, &z);
        
    if ((z+x*x/4==0) || (x-y/(z+x*x/4))==0) printf("NaN\n");
    else
    {        
        b = log(y-sqrt(fabs(x)))*(x-y/(z+x*x/4));
        printf("%f\n", b);
    }
    return 0;
}
