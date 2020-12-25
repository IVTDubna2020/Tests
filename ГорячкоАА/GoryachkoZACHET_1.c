#include <stdio.h>
#include <math.h>

int main()
{
    float b,x,y,z;
    printf("Данная программа выводит значение выражения\nb = 1+|z-x|+(y-x)^2/2+(x-y)^2/3\nс точностью до 4 знавков после запятой\n");
    printf("введите x, y и z\n");
    scanf("%f%f%f",&x,&y,&z);
    printf("вы ввели: x = %.2f, y = %.2f, z = %.2f\n",x,y,z);
    b = 1 + fabs(z-x) + (pow(y-x,2)/2) + (pow(x-y,2)/3);
    printf("значение выражения: %.4f",b);
    

    return 0;
}
