#include <stdio.h> 
#include <math.h>
float x,n,S1,S2=0;
int main()
{
printf("введите переменные:\n");
scanf("%f %f",&x,&n);
for (int k=1;k<=n;k++)
{
if(x!=0)
S1=(pow(-1,k-1))*((pow(k,2)+k+1)/(pow(x,k)));
else break;
S2+=S1;
}
if (S2==0)
printf("ошибка, неправильные данные\n");
else printf("S2=%f\n", S2);
return 0;
}
