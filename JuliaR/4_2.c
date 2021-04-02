#include <stdio.h>
#define N 4
#define M 2

int p(int, int);

int main()
{
  int A[N][M] = {1,3,7,1,3,5,4,2},B[N][M],C[N][M]={};
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
      printf("%d ", A[i][j]);
  }
  printf("\n введите массив B \n");
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
      {
	scanf("%d",&B[i][j]);
      }
  }
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      printf("%d ", B[i][j]);
    }
  }
  printf("\n тогда массив C равен\n");
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
      {
	printf("%d ",p(A[i][j],B[i][j]));
      }
  }
  printf("\n");
  return 0;
}

int p(int a, int b)
{
return (a*b);
}
