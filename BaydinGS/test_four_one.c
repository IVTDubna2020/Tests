#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 13

int swap(int[], int);
int showArr(int[], int);

int main()
{
	int arr[SIZE], i;
	srand(time(NULL));
	for (i = 0; i < SIZE; i++) arr[i] = rand() % 20 + 1;
	showArr(arr, SIZE);
	swap(arr, SIZE);
	showArr(arr, SIZE);
	
	return 0;
}

int showArr(int a[], int b)
{
	for (int i = 0; i < b; i++) printf("%d ", a[i]);
	printf("\n");
}

int swap(int a[], int b)
{
	for (int i = 0; i < b / 2; i++)
	{
		a[i*2] += a[i*2+1];
		a[i*2+1] = a[i*2] - a[i*2+1];
		a[i*2] -= a[i*2+1];
	}
}

	
