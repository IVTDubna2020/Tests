#include <stdio.h>
#include <math.h>
float x, N, P=1, n;
int main () {
printf("Программа находит P в уравнении 3 задачи 13 варианта\n");

printf("Введите переменные\n"); 

printf("(x должен быть больше нуля)x="); scanf("%f",&x); 
printf("(N должен быть больше нуля)N="); scanf("%f",&N);

for(int k=1; k<=N; k++){
   if(x>0)
      n=((pow(x, 2))*(log10f(x*k)))/((pow(k, 2)+k+1));
   else break;
   P*=n;
}
if(P==1) 
   printf("Ошибка, вы ввели некорректные данные\n");
else printf("P=%f", P);

return 0;
}


