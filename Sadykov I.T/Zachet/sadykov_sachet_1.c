#include <stdio.h>
#include <math.h>

int main()
{ 
int f;
while (f!=1){
    float x, y, z, a, xy, s;
    f=1;
    printf("Введите переменные x, y, z -"); 
    scanf("%f%f%f", &x, &y, &z);
    s=x-(2*x/(1 + pow(x , 2) * pow(y , 2)));
    if (s<0) s*(-1);
    xy=((x+y)*3.14159)/180;
    if ((2+s)==0) {
         printf("Ввели некорректные данные попробуйте снова");
         f=0;
         continue;
         }
    a=(1 + pow(sin(xy), 2))/(2+s)+z;
    printf("%f\n", a);
    }
return 0;
}

