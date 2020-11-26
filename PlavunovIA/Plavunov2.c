#include <stdio.h>
int main()
{
	float A, B, C, D;
	printf("Введите точку А отрезка АВ: ");
	scanf ("%f",&A);
	printf("Введите точку B отрезка АВ: ");
	scanf ("%f",&B);
	printf("Введите точку C отрезка CD: ");
	scanf ("%f",&C);
	printf("Введите точку D отрезка CD: ");
	scanf ("%f",&D);
	if ((A >= B) || (C >= D)) printf ("Некорректные значения!");
	else if (((A <= C) && (C <= B)) || ((C <= A) && (A <=D ))) printf ("Отрезки имеют общие точки"); 
	else printf ("Отрезки не имеют общие точки");
	return 0;
}