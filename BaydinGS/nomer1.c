#include <stdio.h>
#include <math.h>
int main()
{
  float a,b,c,angleA,angleB,angleC,sinA,sinB,sinC,P,S,smp;
  printf("Введите сторону,a затем углы A и B,прилежащие к данной стороне\n");
  scanf("%f%f%f",&a,&angleA,&angleB);
  angleC=180-angleA-angleB;
  if(a>0&&angleA>0&&angleB>0&&angleC>0)
    {
      sinA=sin(angleA);
      sinB=sin(angleB);
      sinC=sin(angleC);
      c=a*(sin(angleC*M_PI/180)/sin(angleA*M_PI/180));
      printf("Сторона c = %.2f\n",c);
      b=c*(sin(angleB*M_PI/180)/sin(angleC*M_PI/180));
      printf("Сторона b = %.2f\n",b);
      printf("Сторона a = %.2f\n",a);
      P=a+b+c;
      smp=P/2;
      printf("Периметр = %.2f\n",P);
      printf("Полупериметр = %.2f\n",smp);
      S=sqrt(smp*(smp-a)*(smp-b)*(smp-c));
      printf("Площадь = %.2f\n",S);
      printf("Угол A = %.2f\n",angleA);
      printf("Угол B = %.2f\n",angleB);
      printf("Угол C = %.2f\n",angleC);
    }
  else
    {
      printf("Значения введены некорректно");
    }
  return 0;
}


 
  
