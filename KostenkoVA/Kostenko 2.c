#include <stdlib.h>
#include <stdio.h>

int main()
{
    float x, y;
    printf("Input x: ");
    scanf("%f", &x);
    if (x>1) y = x*x;
    else y = x;
    printf("y(x) = %.2f", y);
    return 0;
}
