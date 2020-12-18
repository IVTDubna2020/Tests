#include <stdio.h>
#include <math.h>
void fx (float x, float y);
int main()
{
	float x, y;
	for (x = -1; x <= 1; x += 0.2)
	{
		for (y = -1; y <= 1; y += 0.1) fx (x, y);
		printf ("\n");
	}
	return 0;
}

void fx(float x, float y)
{
    float Fxy, check;
    check = pow(x,2) + pow (y,2) - x*y;
	if ((check < 0.00001) && (check > -0.00001)) printf ("При x=%.1f и y=%.1f ф-ия не существует\n");
	else
	{
		Fxy = (2*x+3*y-1)/(pow(x,2) + pow(y,2) - x*y); 
		printf ("f(%.1f, %.1f) = %.3f\n", x, y, Fxy);
	}
	return 0;
}