#include <stdio.h>
#include <math.h>
float fx(float, float);

void main()
{
	printf("  x      y       F\n");
	for(float x=0; x<=2; x+=0.25)
	{
		for(float y=0; y<=1; y+=0.1)
		{
		printf("%.3f  %.3f  %.3f\n",x, y, fx(x,y));
		}
	}
}

float fx(float x, float y)
{
float F;
F = pow(M_E,x)/(pow(x,2)+pow(y,2)-1);
return F;
}