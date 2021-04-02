#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define SIZE 15

void show(float [], int);
void fill(float [], int);
float change(float [], int);

int main()
{
    float A[SIZE];
    printf("Исходный массив:\n");
    fill(A, SIZE);
    show(A, SIZE);
    printf("Сумма отрицательных членов равна:%.3f\n\n",change(A, SIZE));
    printf("Конечный массив:\n");
    show(A, SIZE);
    return 0;
}

void show(float A[], int S)
{
    for (int i = 0; i < S; i++)
    {
    printf("%-7.3f",A[i]);
    if ((i+1)%3==0) printf("\n");
    }
    printf("\n");
}

void fill(float A[], int S)
{
    float r = 0;
    srand(time(NULL));
    for (int i = 0; i < S; i++)
    {
    r = rand()%9000;
    A[i] = r/1000 + 1;
    if(rand()%2 == 1) A[i]*=-1;
    }
}

float change(float A[], int S)
{
    float sum = 0;
    for (int i = 0; i < S; i++)
    {
        if(A[i]<0)
        {
            sum+=A[i];
            A[i] = fabsf(A[i]);
        }
    }
    return sum;
}