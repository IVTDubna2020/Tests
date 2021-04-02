#include <stdio.h>
#define sizeFirst 3
#define sizeSecond 7

void summa(int a, int[][a]);
void show(int a, int[][a]);

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
	show(sizeFirst,A);
	show(sizeSecond,B);
	summa(sizeFirst,A);
	summa(sizeSecond,B); 
	show(sizeFirst,A);
	show(sizeSecond,B);
	return 0;
}

void summa(int a, int arr[][a])
{
	for (int i = 0; i < a; i++) arr[i][0] = arr[0][i] + arr[a-1][i];
}

void show(int a, int arr[][a])
{
	for (int i=0;i<a;i++)
	{
		for (int j=0;j<a;j++) printf("%d ", arr[i][j]);
		printf("\n");
	}
	printf("\n\n");
}