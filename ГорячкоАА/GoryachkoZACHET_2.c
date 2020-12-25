#include <stdio.h>
#include <math.h>

int main()
{
    int n,k;
    float b,sum=0;
    printf("введите n \n");
    scanf("%d",&n);
    printf("вы ввели: n = %d\n",n);
    for(k=1; k<=n; k++)
    {
        b = pow(-1,k)/(k*(k+1)*(3*k+1)*(3*k+2));
        sum+=b;
    }
    printf("значение выражения с точностью до 5 знака после запятой: %.5f",sum);
    

    return 0;
}
