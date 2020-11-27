#include <stdio.h>

float xx, xy, n1x1, n1x2, n1y1, n1y2, n2x1, n2x2, n2y1, n2y2, n1x, n1y, n2x, n2y;

int main () {
printf("Эта программа вычисляет лежит ли заданная точка на двух заданных отрезках.\n");

printf("Напишите координаты отрезка 1\n");
printf("Координаты начало отрезка 1 \n"); printf("x="); scanf("%f",&n1x1);printf("y="); scanf("%f",&n1y1);
printf("Координаты конца отрезка 1 \n"); printf("x="); scanf("%f",&n1x2);printf("y="); scanf("%f",&n1y2);

printf("Напишите координаты отрезка 2\n");
printf("Координаты начало отрезка 2 \n"); printf("x="); scanf("%f",&n2x1);printf("y="); scanf("%f",&n2y1);
printf("Координаты конца отрезка 2 \n"); printf("x="); scanf("%f",&n2x2);printf("y="); scanf("%f",&n2y2);

printf("Напишите координаты точки\n"); printf("x="); scanf("%f",&xx);printf("y="); scanf("%f",&xy);

n1x=(xx-n1x1)/(n1x2-n1x1);
n1y=(xy-n1y1)/(n1y2-n1y1);
n2x=(xx-n2x1)/(n2x2-n2x1);
n2y=(xy-n2y1)/(n2y2-n2y1);

if(n1x==n1y) 
   printf("Точка принадлежит отрезку 1\n");
else 
   printf("Точка не принадлежит отрезку 1\n");

if(n2x==n2y) 
   printf("Точка принадлежит отрезку 2\n");
else 
   printf("Точка не принадлежит отрезку 2\n");
 
return 0;
}

