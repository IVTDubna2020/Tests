#include <stdio.h>
#define sizeFirst 3
#define sizeSecond 7

void summa(int[][sizeFirst], int);
void summa2(int[][sizeSecond], int);

int main()
{
	int A[sizeFirst][sizeFirst] = {{5, 3, 7}, {0, 0, 0}, {5, 7, 3}};
	int B[sizeSecond][sizeSecond], i, j;
	for (i = 0; i < sizeSecond; i++)
	{
		for (j = 0; j < sizeSecond; j++) 
		{
			printf("B[%d][%d] = ", i, j);
			scanf("%d", &B[i][j]);
		}
	}
	for (i = 0; i < sizeFirst; i++)
	{
		for (j = 0; j < sizeFirst; j++) printf("%[%d][%d]%d  ", i, j,  A[i][j]);
		printf("\n");
	}
	for (i = 0; i < sizeSecond; i++)
	{
		for (j = 0; j < sizeSecond; j++) printf("%[%d][%d]%d  ", i, j,  B[i][j]);
		printf("\n");
	}	
	summa(A, sizeFirst);
	summa2(B, sizeSecond); 
	for (i = 0; i < sizeFirst; i++)
	{
		for (j = 0; j < sizeFirst; j++) printf("%[%d][%d]%d  ", i, j,  A[i][j]);
		printf("\n");
	}
	for (i = 0; i < sizeSecond; i++)
	{
		for (j = 0; j < sizeSecond; j++) printf("%[%d][%d]%d  ", i, j,  B[i][j]);
		printf("\n");
	}
	return 0;
}

void summa(int arr[][sizeFirst], int a)
{
	for (int i = 0; i < a; i++) arr[i][0] = arr[0][i] + arr[a-1][i];
}

void summa2(int arr[][sizeSecond], int a)
{
	for (int i = 0; i < a; i++) arr[i][0] = arr[0][i] + arr[a-1][i];
}

