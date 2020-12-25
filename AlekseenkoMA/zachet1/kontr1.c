#include <stdio.h>
#include <math.h>

int main()
{
float x, y, z, a;
do
{
printf("Введите Х: ");
scanf("%f", &x);
printf("Введите У: ");
scanf("%f", &y);
printf("Введите Z: ");
scanf("%f", &z);
if (y < 0) printf ("Неверные значения!\n");
} while (y < 0);
a = (sqrt(fabs(x-1)) - sqrt(y)) / (1 + pow(z, 2)/2 + pow(y, 2)/4);
printf ("a = %f", a);
return 0;
}
