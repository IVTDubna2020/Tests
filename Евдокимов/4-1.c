#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define n 10

float Fun(int [],int,float);


int main()
{
    srand(time(NULL));
    int A[n],i;
    float d,x=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        x+=A[i];
    }
    x/=n ;
    d=Fun(A,n,x);
    for (i=0;i<n;i++)
    {
        printf("%d ",A[i]);
        
    }
    printf("\n%f",d);
    

    return 0;
}

float Fun(int A[],int r,float x)
{
    float d=0;
    for (int i=0;i<r;i++)
    {
        d+=fabs(A[i]-x)/r;
        if ((A[i]>=1) && (A[i]<=5))
        A[i]=0;
        
    }
    return d;
    
}

