#include <stdio.h>

int main()
{
    float x1, x2, x3, x4, x5, x6;

    scanf("%f%f%f%f%f%f", &x1, &x2, &x3, &x4, &x5, &x6);    
    
    float s = x1 + x2 + x3 + x4 + x5 + x6;
    float p = x1 * x2 * x3 * x4 * x5 * x6;

    printf(s > p ? "Sum is bigger\n" : "Product is bigger\n");

    return 0;
}
