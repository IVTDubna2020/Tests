#include<stdio.h>
#include<math.h>
int main()
{
  int N;
  float S=0;
  printf("Введите значение N: ");
  scanf("%d",&N);
  for(int k=0;k<=N;k++)
  {
    S+=(pow(-2,k))/(k*k+1);
  }
  printf("Полученное значение S=%f",S);
  return 0;
}
