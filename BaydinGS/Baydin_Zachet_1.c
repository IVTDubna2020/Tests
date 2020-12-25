#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,z,b;
	printf("Input x: ");
	scanf("%f",&x);
	printf("Input y: ");
	scanf("%f",&y);
	printf("Input z: ");
	scanf("%f",&z);
	b=x*(atan(z)+y);
	printf("b=%.4f\n",b);
	return 0;
}