#include <stdio.h>
#include <math.h>
float sum (float);

int main()
{
	float n;
	printf("N = ");
	scanf("%f", &n);
	printf("Sum = %f ",sum(n));
	return 0;
}

float sum (float n)
{
	float sum = 0;
	for (int i=1; i<=n; i++) sum += pow(i,-2) * pow(-1,i-1);
	return sum;
}