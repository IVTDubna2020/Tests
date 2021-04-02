#include <stdio.h>
#define N 4
#define M 2

int sum (int, int);

int main()
{
	int A[N][M] = {5,3,7,1,3,-5,4,7},B[N][M],C[N][M]={};
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			printf("%d \t", A[i][j]);
	printf("\n введите массив B \n");
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
		{
			scanf("%d",&B[i][j]);
		}
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
		{
			printf("%d \t", B[i][j]);
		}
	printf("\n тогда массив C равен\n");
	 for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
		{
			printf("%d\t",sum (A[i][j],B[i][j]));
		} 
	return 0;
}

int sum (int a, int b)
{
	return (a+b);
}
