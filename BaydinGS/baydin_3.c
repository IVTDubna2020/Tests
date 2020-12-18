#include <stdio.h>
#include <math.h>
float function(float, float);
int main()
{
    float x, y;
	for(x = 0; x <= 0.5; x += 0.1)
{
	for (y = -1; y <= 1; y += 0.2)
	if (fabs(sin(M_PI*x/180)+sin(M_PI*y/180))<0.000001) printf("%-8s","NaN\n");
	else printf("%-8.3f \n", function(x, y));
	printf("\n");
	}
}

float function(float x, float y)
{
	return (sin(M_PI*x/180)+sin(M_PI*y/180))/(x*x+y*y);
}
