#include <stdio.h>
#include <math.h>
int main()
{
	int N, k = 1, factorial = 1;
	float P = 1;
	printf ("Введите значение N: ");
	scanf ("%d", &N);
	for (k; k <= N; k++)
	{
	factorial *= k;
	P *= (pow(-1,k) * (k*k+k+1))/factorial;
	}
	printf ("Полученное значение: P = %f", P);
	return 0;
}