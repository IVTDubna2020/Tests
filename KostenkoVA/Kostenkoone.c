#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 10

void show(double[], int);
void fillb(double[], double[], int);

int main()
{
	srand(time(NULL));
	int i, m, cons;
	double A[SIZE], B[SIZE];
	for (i = 0; i < SIZE; i++) A[i] = 1.0 * (rand() % 300)/(1 + rand() % 100);
	show(A, SIZE);
	do {
		fillb(A, B, SIZE);
		show(B, SIZE);
		printf("\nЖелаете попробовать с другими числами? 0 нет, 1 да: ");
		scanf("%d", &cons);
	} while (cons == 1);
	return 0;
}

void show(double arr[], int a)
{
	for (int i = 0; i < a; i++) 
	{
		printf("%.3f ", arr[i]);
	}
	printf("\n");
}

void fillb(double source[], double arr[], int a)
{
	int m;
	printf("\nВведите параметр: ");
	scanf("%d", &m);
	for (int k = 0; k < a; k++)
	{
		for (int i = 1; i < m; i++)
		{
			arr[k] += source[i+k-1];
		}
		arr[k] /= m;
	}
}



	

