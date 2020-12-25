#include <stdio.h>
#include <math.h>
int main()
{
	float n, sum = 1;
	printf("N = ");
	scanf("%f", &n);
	for (int i=2; i<=n; i++) sum += pow(i,-2) * pow(-1,i-1);
	printf("Сумма равна %f ",sum);
	return 0;
}