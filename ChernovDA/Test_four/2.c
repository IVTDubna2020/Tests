#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define WIDTH 4
#define HEIGHT 2

void fill(int[][WIDTH], int, int);
void show2(int[][WIDTH], int, int);
void sum(int[][WIDTH], int, int, int[]);
void show(int[], int);

int main()
{
    int arr[HEIGHT][WIDTH];
    int newArr[WIDTH];

    fill(arr, HEIGHT, WIDTH);
    show2(arr, HEIGHT, WIDTH);
    sum(arr, HEIGHT, WIDTH, newArr);
    show(newArr, WIDTH);

    return 0;
}

void fill(int arr[][WIDTH], int height, int width)
{
    for(int i = 0; i < height; i++)
        for(int j = 0; j < width; j++)
            scanf("%d", &arr[i][j]);
}

void show2(int arr[][WIDTH], int height, int width)
{
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
            printf("%-5d ", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}

void sum(int arr[][WIDTH], int height, int width, int newArr[])
{
    int sum;
    for(int j = 0; j < width; j++)
    {
        sum = 0;
        for(int i = 0; i < height; i++)
            sum += arr[i][j];
        newArr[j] = sum;
    }
}

void show(int arr[], int size)
{   
    for(int i = 0; i < size; i++)
        printf("%-5d ", arr[i]);
    printf("\n");
}

