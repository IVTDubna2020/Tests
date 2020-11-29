#include <stdio.h>

int main() {
	float x,y;
	scanf("%f",&x);
	printf("вы ввели число x = %f\n",x);
	y=5*x-4;
	if(y>=0)
	printf("значение функции |5x-4|=%f",y);
	else
	printf("значение функции |5x-4|=%f", -1*y);
	return 0;
}