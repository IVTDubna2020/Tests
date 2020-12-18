#include <stdio.h>
#include <math.h>

int check (float, float);
float fx(float, float);

int main()
{
	printf("  x      y       F\n");
	for(float x=0; x<=2; x+=0.25)
	{
		for(float y=0; y<=1; y+=0.1)
		{
			if (check (x,y) == 0) printf ("Ф-ия не существует!\n"); 
            else printf("%.3f  %.3f  %.3f\n",x, y, fx(x,y));
		}
	}
}

int check (float x, float y)
{
    float b; int a;
    b = pow(x,2) + pow (y,2) - 1;
    if ((b > -0.0001) && (b < 0.0001)) a = 0;
    else a = 1;
    return a;
}

float fx(float x, float y)
{
return pow(M_E,x)/(pow(x,2)+pow(y,2)-1);
}