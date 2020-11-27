#include <stdio.h>
#include <math.h>

float R;
float side(float d);
int main()
{
    float a,b,c,AB,BC,CA,h;
    printf("Введите угол a и b\n");
    scanf("%f%f",&a,&b);
    printf("Введите радиус описанной окружности\n");
    scanf("%f",&R);
    c=180-a-b;
    printf("Угол c = %f\n",c);
    AB=side(c);
	BC=side(a);
	CA=side(b);
	  printf("Сторона AB = %f\n",AB);
     printf("Сторона BC = %f\n",BC);
      printf("Сторона CA = %f\n",CA);
      h=BC*sin(c*M_PI/180);
      printf("Высота h из вершины B = %f\n",h);
      printf("Площадь = %f\n",0.5*AB*h);
      printf("Периметр = %f\n",AB+BC+CA);
    return 0;
}
float side(float d)
{
   return R*2*sin(d*M_PI/180);
}