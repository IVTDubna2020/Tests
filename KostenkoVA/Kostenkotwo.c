#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#define A 4
#define B 5

double absmax(int [][B], int, int);
void fill(int [][B], int, int);
void show(int [][B], int, int);

int main()
{
	srand(time(NULL));
	int arr[A][B], max;
	fill(arr, A, B);
	show(arr, A, B);
	max = absmax(arr, A, B);
	printf("Максимальный (по модулю) элемент массива: %d", max);
	return 0;
}

void fill(int arr[][B], int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			arr[i][j] = rand() % 200 - 100;
		}
	}
}

void show(int arr[][B], int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
}

double absmax(int arr[][B], int a, int b)
{
	double max = 0;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (fabs(arr[i][j]) > fabs(max)) max = arr[i][j];
		}
	}
	return max;
}