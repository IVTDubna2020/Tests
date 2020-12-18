#include <stdio.h>
#include <math.h>
float f(float, float);

int main(){
  float x,y;
    for(y=-M_PI; y<=M_PI; y+=M_PI/10)
      {
      for(x=0; x<=2*M_PI; x+=M_PI/5)
	printf("%.3f\n",f);
      }
    return 0;
}
float f(float x, float y){
  float f;
  for(y=-M_PI; y<=M_PI; y+=M_PI/10)
    {
    for(x=0; x<=2*M_PI; x+=M_PI/5)
      {
	if ((sin(x)+cos(y))!=0)
	  f = tan(x)/(sin(x)+cos(y));
      }
    }
  return y;
}
  
    
    
