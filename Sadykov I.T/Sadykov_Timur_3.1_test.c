#include <stdio.h>
#include <math.h>
float f(float, float);

void main()
{
printf("  x      y      result\n");
 for(float x=0; x<=5; x+=0.5)
 {
  for(float y=-1; y<=3; y++)
  { if(x!=y)printf("%.3f  %.3f  %.3f\n",x, y, f(x,y));
      else break;
  }
 }
}

float f(float x, float y)
{
float result;
result = (pow(x, 2)+ y/3+7)/(x - y);
return result;
}
