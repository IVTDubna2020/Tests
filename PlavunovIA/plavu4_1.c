#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 10

int fun(float [], int);
void show(float [], int);

int main()
{
	srand(time(NULL));
	float A[SIZE];
	int i, count;
	for(i = 0; i < SIZE; i++) A[i] = 1.0 * (-100 + rand() % 200) / (1 + rand() % 100);
	show(A, SIZE);
	count = fun(A, SIZE);
	printf("Кол-во чисел от 0 до 1: %d\n", count);
	show(A, SIZE);
	
	return 0;
}

void show(float arr[], int a)
{
	for (int i = 0; i < a; i++) printf("%.2f ", arr[i]);
	printf("\n\n");
}

int fun(float arr[], int a)
{
	int count = 0;
	for (int i = 0; i < a; i++)
	{
		if ((fabs(arr[i]) >= 0) && (fabs(arr[i]) <= 1))
		{
			arr[i] = i;
			count++;
		}
	}
	return count;
}
