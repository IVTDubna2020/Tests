#include <stdio.h>
#include <math.h>
int main()
{
    int N;
    float S=0,k;
    printf("Введите N\n");
    scanf("%d",&N);
    for(k=0;k<=N;k++) S+=pow(-1,k)*((k*k-k+1)/(pow(k,4)+k+10));
    printf("%f",S);
}