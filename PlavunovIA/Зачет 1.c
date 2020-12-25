#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, z, b;
    printf ("Введите х: ");
    scanf("%f", &x);
    printf ("Введите у: ");
    scanf("%f", &y);
    printf("Введите z: ");
    scanf("%f", &z);
    b = 1 + pow(z,2)/(3+pow(x,2)/5)*y;
    printf ("b = %f", b);
    return 0;
}
