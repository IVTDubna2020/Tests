#include <stdio.h>
#include <math.h>
int main()
{
	float x, P = 1;
	int N, k;
	do
	{
		printf ("Введите значение x (оно должно быть по модулю меньше 1): ");
		scanf ("%f", &x);
		if ((x >= 1) || (x <= -1)) printf ("По-русски же написано: по модулю меньше 1!\n");
	} while ((x >= 1) || (x <= -1));
	do
	{
		printf ("Введите значение N (оно должно быть целым и больше нуля): ");
		scanf ("%d", &N);
		if (N <= 0) printf("Ещё раз для непонятливых: N БОЛЬШЕ нуля!\n");
	} while (N <= 0);
	for (k = 1;k <= N; k++) P *= pow(x,k) * (k * x + 1) * 2 * pow(k*x,2) + 3 * k * x + 1;
	printf ("Полученное значение: P = %f ",P);
	return 0;
}