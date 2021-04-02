#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define SIZE1 3
#define SIZE2 4

void hat(int a, int A[][a]);
void shoe(int a, int A[][a]);


int main()
{
    srand(time(NULL));
    int A[SIZE1][SIZE1]={{5,3,7},{-1,-3,-5},{4,7,3}};
    int B[SIZE2][SIZE2],i,j;
    for(i=0;i<SIZE2;i++)
    {
        for(j=0;j<SIZE2;j++)
        {
            scanf("%d",&B[i][j]);
        }
        
    }
    printf("\n");
    shoe(SIZE2,B);
    shoe(SIZE1,A);
    hat(SIZE1,A);
    hat(SIZE2,B);
    shoe(SIZE1,A);
    shoe(SIZE2,B);
    return 0;
}
void shoe(int a,int A[][a])
{
     for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
   }
   printf("\n");
}
void hat(int b, int B[][b])
{
    int c;
    for(int i=0;i<b;i++)
    {
        c = B[i][0+i];
        B[i][0+i] = B[i][b-1-i];
        B[i][b-1-i] = c;
    }
}



