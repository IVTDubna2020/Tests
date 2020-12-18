#include <stdio.h> 
#include <math.h>
float function(float,float);
int main()
{
   for(float x=0;x<=0.5;x+=0.1)
   {
      for(float y=-1;y<=1;y+=0.2)
      {
          if((x+y)<0.000001)
          printf("%-8s","NaN");
          else printf("%-8.3f",function(x,y));
      }
      printf("\n");
   }
}
float function(float x,float y)
{
   return (asin(x+y))/(x+y);
}
