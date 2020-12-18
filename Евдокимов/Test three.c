#include <stdio.h>
#include <math.h>
float fx (float x, float y);
int check (float x, float y);
int main()
{
	float x, y;
	for (x = 1; x <= 5; x += 1)
	{
        for (y = 0; y <= 2; y += 0.25) 
        {if (check (x,y) == 0) printf ("Ф-ия не существует!\n"); 
        else printf ("fx (%.1f, %.1f) = %.3f\n", x, y, fx(x,y));}
		printf ("\n");
	}
	return 0;
}

float fx(float x, float y)
{
	return (log(x-y))/(pow(x,2) + pow(y,2) + x + y + 1);
}

int check (float x, float y)
{
    float b, c; int a; 
    b = pow(x,2) + pow (y,2) + x + y + 1;
    if (((b > -0.0001) && (b < 0.0001)) || ((x - y) <= 0)) a = 0;
    else a = 1;
    return a;
}

