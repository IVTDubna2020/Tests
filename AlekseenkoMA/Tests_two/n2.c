#include<stdio.h>
#include<math.h>
int main(){
float x,y;
scanf("%f",&x);
if (1<x && x<2)
{
   y=(pow(cos(x),2));
}
else 
{
   y=(1+pow(sin(x),2));
}
printf("y=%f\n",y);
return 0;
}

   
