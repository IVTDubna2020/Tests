#include <stdio.h>
#include <math.h>
float n,S1=0;
int main()
{
	printf("введите переменную:\n");
	scanf("%f",&n);
	for (int k=1;k<=n;k++)
	S1+=(pow(-1,k))/((pow(k,2))*((pow(k+2,2));
	printf("S1=%f\n", S1);
	return 0;
}