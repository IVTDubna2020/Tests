#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 40

void fill(char[], int);
void show(char[], int);
int sum(char[], int);

int main()
{
    char arr[SIZE];

    fill(arr, SIZE);
    show(arr, SIZE);
    printf("%d\n", sum(arr, SIZE));
    show(arr, SIZE);

    return 0;
}

void fill(char arr[], int size)
{
    srand(time(NULL));
    for(int i = 0; i < size; i++)
        arr[i] = random()%96 + 32;
}

void show(char arr[], int size)
{
    for(int i = 0; i < size; i++)
        printf("%c ", arr[i]);
    printf("\n");
}

int sum(char arr[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
        if(arr[i] == '#') arr[i] = 'A';
    }
    return sum;
}

