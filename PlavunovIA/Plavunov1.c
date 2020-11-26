#include <stdio.h>
#include <math.h>

int main()
{
	float A, B, C, h, AB, BC, AC, P, S, R, r;
	printf ("Введите угол при вершине А: ");
	scanf ("%f",&A);
	printf ("Введите угол при вершине B: ");
	scanf ("%f", &B);
	printf ("Введите высоту из вершины С: ");
	scanf ("%f", &h);
	C = 180-A-B;
	BC = h/sin(M_PI*B/180);
	AC = h/sin(M_PI*A/180);
	AB = AC * sin(M_PI*C/180)/sin(M_PI*B/180);
	P = AB + BC + AC;
	S = h * AB / 2;
	R = AB * BC * AC / (4*S);
	r = 2 * S / (P / 2);
	printf ("Сторона AB = %f\n",AB);
	printf ("Сторона BC = %f\n",BC);
	printf ("Сторона АС = %f\n",AC);
	printf ("Угол при вершине С = %f\n",C);
	printf ("Площадь = %f\n", S);
	printf ("Периметр = %f\n", P);
	printf ("Радиус вписанной окружности = %f\n", r);
	printf ("Радиус описанной окружности = %f\n", R);
	return 0;
}