#include <stdio.h>
#include <math.h>
int main()
{
    float A,B,C,a,b,c,f,R;
    printf("Введите сторону B,угол a и радиус описанной окружности R\n");
    scanf("%f%f%f",&B,&a,&R);
    A=2*R*sin(M_PI*a/180);
    f=B/(2*R);
    b=asin(f)*180/M_PI;
    c=180-a-b;
    C=2*R*sin(M_PI*c/180);
    printf("Cторона А=%f\nСторона С=%f\nУгол b=%.0f\nУгол c=%.0f\n",A,C,b,c);
    return 0;
}