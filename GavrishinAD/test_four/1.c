#include <stdio.h>
#include <math.h>
float a(float, float, float);

int main()
{
    float x, y, z;
    do
    {
        printf("Введите Х: ");
        scanf("%f", &x);
        printf("Введите У: ");
        scanf("%f", &y);
        printf("Введите Z: ");
        scanf("%f", &z);
        if (z == 90) printf ("Неверные значения!\n\n");
    } while (z == 90);
    printf ("a = %f", a(x,y,z));
    return 0;
}

float a(float x, float y, float z)
{
	return (2 + exp(2))/(1 + pow(x,2) * fabs(y - tan(z*M_PI/180)));
}