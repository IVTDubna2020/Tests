#include <stdio.h> 
#include <math.h>
float a,b,c,fi,S,P,smp;
int main()
{  
    printf("Введите стороны треугольника: a,b\nвведите угол между ними: fi\n");
    scanf("%f%f%f", &a, &b, &fi);
    fi=(fi*3.14159)/180;
    c=sqrt(pow(a,2)+pow(b,2)-2*a*b*cos(fi));
    P = a + b + c;
    smp=P/2;/*Полупериметр*/
    S=sqrt(smp*(smp-a)*(smp-b)*(smp-c));
    printf ("Площадь:%f\nПериметр:%f\nТретья сторона:%f\n",S,P,c);
    return 0;
}
