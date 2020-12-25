#include <stdio.h>
#include <math.h>

int main()
{
float b,y,x,z;
printf("введите y\n");
scanf("%f",&y);
printf("введите x\n");
scanf("%f",&x);
printf("введите z\n");
scanf("%f",&z);
if ((x==0) || sin(z*M_PI/180) == 0) printf("неверные значения");
else b = (1 + pow(cos(M_PI*(y-x)/180), 3))/(pow(x,2)/2 + pow(sin (M_PI*z/180), 2));
printf("%f",b);
return 0;
}