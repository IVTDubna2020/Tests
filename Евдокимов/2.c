#include <stdio.h>
#include <math.h>
int main()
{
    float x,n,N,i;
	printf ("Введите нижнюю границу области значений ф-ии: ");
	scanf ("%f", &n);
	printf ("Введите верхнюю границу области значений ф-ии: ");
	scanf ("%f", &N);
	printf ("Введите шаг цикла: ");
	scanf ("%f", &i);
	while (n <= N)
	{
	    if (3*n - 6 < 0) printf ("В точке %.2f ф-ия неопределена\n", n);
	    else if (3*n - 6 == 0) printf ("В точке %.2f ф-ия равна бесконечности\n", n);
	    else printf ("f(%.2f) = %.2f\n", n, log10(3*n - 6));
		n+=i;
	}
	return 0;
}

