#include <stdio.h>
#include <math.h>
int main()
{
float x,func;
printf("Введите значение X");
scanf("%f",&x);
if(x>=0)
func = exp(-x);
else
func = cos(x);
printf("Значение функции = %f",func);
return 0;
}