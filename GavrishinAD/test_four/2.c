#include<stdio.h>
#include<stdlib.h>

void fill(int [][5]);
void show(int [][5]);
void change(int [][5], int[]);

int main()
{
    int A[5][5], B[] = {-1, -2 , -3, -4, -5};
    printf("Введите массив A:\n");
    fill(A);
    printf("\nИсходный массив A:\n");
    show(A);
    printf("\nКонечный массив A:\n");
    change(A, B);
    show(A);
    return 0;
}

void fill(int A[][5])
{
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
}

void show(int A[][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%-4d",A[i][j]);
        }
        printf("\n");
    }
}

void change(int A[][5], int B[])
{
    for (int i = 0; i < 5; i++)
    {
        A[i][i] = B[i];
    }
}
