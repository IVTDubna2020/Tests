#include <stdio.h>
int main()
{
	float x, t, y;
	printf ("Введите значение х: ");
	scanf ("%f",&x);
	if (x >= 1) t=x*x+x; else t=-5*x+3;
	y = t*t - t - 1;
	printf ("Для х = %f y = %f", x, y);
	return 0;
}