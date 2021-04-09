#include <stdio.h>
#define S1 5
#define S2 3

void show(int a, int[][a]);
void change(int a, int[][a]);

int main()
{
  int A[S1][S1], i, j, B[S2][S2]= {{5, 3, 7}, {-1, -3, -5}, {4, 7, 9}};
  for (i = 0; i < S1; i++)
  {
    for (j = 0; j < S1; j++)
    {
      printf("A[%d][%d] = ", i, j);
      scanf("%d", &A[i][j]);
    }
    printf("\n");
  }
  show(S1,A); change(S1,A); show(S1,A);
  show(S2,B); change(S2,B); show(S2,B);
  return 0;
}

void show(int a, int Massiv[][a])
{
  for (int i=0;i<a;i++)
  {
    for (int j=0;j<a;j++)
    printf("%d ", Massiv[i][j]);
    printf("\n");
  }
  printf("\n\n");
}

void change(int a, int Massiv[][a])
{
  int temp, temp1;
  temp1 = Massiv[0][a-1];
  for (int i = 0; i < a; i++)
  {
    temp=Massiv[0][i];
    Massiv[0][i]=Massiv[i][a-1];
    if (i < a - 1) 
    Massiv[i][a-1] = temp;
    else Massiv[i][a-1] = temp1;
  }
}
