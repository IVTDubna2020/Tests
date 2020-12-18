#include <stdio.h>
#include <math.h>
float func(float,float);
	int main()
	{
	printf("Таблица значений функции\n");
	for(float x=-1;x<=1;x+=0.25)
		{
	for(float y=-1;y<=1;y+=0.1)	
		{
		printf("x=%f,y=%f\n",x,y);
			if((powf(x,2)+powf(y,2)-4==0)||(fabs(x+y)>1))
			{
		printf("Невозможно\n");
			}
			else
			{
		printf("%.3f\n",func(x,y));
			}
		}
		}	
		return 0;
	} 
	
	float func(float x,float y)
	{   float value;
	    
		value=(x+y-2)/(powf(x,2)+powf(y,2)-4)*acosf(x+y);
		return value;
	}
  
