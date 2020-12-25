#include <stdio.h>
#include <math.h>
	int main()
	{
	 float x,y,z,a;
	  printf("Введите x ");
	 scanf("%f",&x);
	  printf("Введите y ");
	 scanf("%f",&y);
	  printf("Введите z ");
	 scanf("%f",&z);
	 a=y+x/(powf(z,2)+fabs(powf(x,2)/(y+powf(x,2))));
	 printf("Значение a=%f",a);
		return 0;
	} 
	
	
