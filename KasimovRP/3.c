#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int k=1,N=1,f=1;
float S,ak,x;
printf("Введите значение x\n");
scanf("%f",&x);
while(fabs(x)>=1)
{
   printf("Неправильное значение x, введите заново\n"); 
   scanf("%f",&x);
}
 for(int k = 1;k==N;k++)
 {
     for (int i=1;i<=k;i++)
     f*=i;
     ak=pow(x,2*k+1)/f;
     if(abs(ak)<=0.001)
     {
         k+=1;
         N+=1;
         S+=pow(-1,k)*ak;
     }
     else k+=1;
 }
 printf("Сумма ряда = %f",S);
 return 0;
}