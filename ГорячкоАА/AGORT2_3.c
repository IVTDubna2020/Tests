#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float fun(float  x, int k);
int main()
{
	int k = 0;
	float x, ak, S;
	do
	{
		printf ("Введите значение х (abs(x)<1): ");
		scanf ("%f",&x);
		if (abs(x) >= 1) printf ("Введено некорректное значение\n");
	} while (abs(x) >= 1);
	
	do
	{
		ak = fun(x,k);
		S += ak; 
		k++;
	} while (fabs(fun(x,k+1)/(S+fun(x,k+1)))>0.001);
	printf ("Сумма ряда: %f\n", S);
	printf ("Кол-во итераций: %d\n\n",k);
}

float fun(float  x, int k)
{
    return pow(-x,k)/(k*k+2);
}
