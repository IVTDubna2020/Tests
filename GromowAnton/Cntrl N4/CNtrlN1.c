#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 8

int main()
{
    int A[SIZE],B[SIZE/2];
    srand(time(NULL));
    for (int i=0; i<SIZE; i++)
    {
	  A[i]=rand()%10;
	  printf("%d ",A[i]);
    }
    printf("\n");
    for(int i=0,j=SIZE/2;i<SIZE/2;i++,j++)
    {
        B[i]=A[i];
        A[i]=A[j];
        A[j]=B[i];
    }
    for(int i=0;i<SIZE;i++)
    {
        printf("%d ",A[i]);
        
    }
    return 0;
}
