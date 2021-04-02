#include <stdio.h>
#define sizeA 3
#define sizeB 5

void sum(int a, int[][a]);
void show(int a, int[][a]);;

int main()
{
	int A[sizeA][sizeA] = {{7, 4, 7}, {0, 0, 0}, {1, 7, 3}};
	int B[sizeB][sizeB], i, j;
	
	for (i = 0; i < sizeB; i++)
	{
		for (j = 0; j < sizeB; j++) 
		{
			printf("B[%d][%d] = ", i, j);
			scanf("%d", &B[i][j]);
		}
	}
	printf("\n\n");
	
	show(sizeA, A);
	show(sizeB, B);
	
	sum(sizeA, A);
	sum(sizeB, B); 

	show(sizeA, A);
	show(sizeB, B);

	return 0;
}

void sum(int a, int arr[][a])
{
	for (int i = 0; i < a; i++) arr[0][i] = arr[i][0] + arr[i][a-1];
}

void show(int a, int arr[][a])
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++) printf("%[%d][%d]%d  ", i, j,  arr[i][j]);
		printf("\n");
	}
	printf("\n\n");
}