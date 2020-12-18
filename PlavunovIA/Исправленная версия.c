#include <stdio.h>
#include <math.h>
float fx (float x, float y);
int check (float x, float y);
int main()
{
	float x, y;
	for (x = -1; x <= 1; x += 0.2)
	{
        for (y = -1; y <= 1; y += 0.1) 
        	if (check (x,y) == 0) printf ("Ф-ия не существует!\n"); 
        	else printf ("fx (%.1f, %.1f) = %.3f\n", x, y, fx(x,y));
	printf ("\n");
	}
	return 0;
}

float fx(float x, float y)
{ 
	return (2*x+3*y-1)/(pow(x,2) + pow(y,2) - x*y); 
}

int check (float x, float y)
{
    float b; int a;;
    b = pow(x,2) + pow (y,2) - x*y;
    if ((b > -0.0001) && (b < 0.0001)) a = 0;
    else a = 1;
    return a;
}

