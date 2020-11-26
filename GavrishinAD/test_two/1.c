#include <stdio.h>
#include <math.h>
 float perimetr(float, float, float);
 float square(float, float, float);
 float angle(float, float, float);
 float r(float, float, float);
 float R(float, float, float);
 
 int main()
{
    float a,b,c;
    printf ("Введите три стороны треугольника\n");
    scanf ("%f%f%f",&a,&b,&c);
    if ((a+b > c) && (a+c > b) && (b+c > a)){
        printf ("Периметр равен %.2f\n", perimetr(a,b,c));
		printf ("Площадь равна %.2f\n", square(a,b,c));
        printf ("Угол напротив стороны А %.2f\n", angle(a,b,c)*180/M_PI);
        printf ("Угол напротив стороны В %.2f\n", angle(b,a,c)*180/M_PI);
        printf ("Угол напротив стороны С %.2f\n", angle(c,a,b)*180/M_PI);
        printf ("Радиус вписаной окружности r %.2f\n", r(a,b,c));
        printf ("Радиус описаной окружности R %.2f\n", R(a,b,c));
    } else printf ("Треугольник не существует \n");
}
float perimetr(float a,float b,float c)
{
    return a+b+c;
}
float square(float a,float b,float c)
{
    float p = (perimetr(a,b,c))/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
float angle(float a,float b,float c)
{
    return acos((b*b + c*c  - a*a)/(2*b*c));
}
 
float r(float a,float b,float c)
{
    float p = (perimetr(a,b,c)/2);
    return sqrt(square(a,b,c)/p);
}
 
float R(float a,float b,float c)
{
    return a/(2*sin(angle(a,b,c)));
}