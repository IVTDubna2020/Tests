#include <stdio.h>

int main()
{
    float x1, y1, x2, y2, x3, y3;

    scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);    
    float x0 = (x1 + x2)/2;
    float y0 = (y1 + y2)/2;

    float x4 = x0 * 2 - x3;
    float y4 = y0 * 2 - y3;

    printf("%f %f\n", x4, y4);

    return 0;
}
