#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5
#define SIZ2 4

int main()
{
    int A[SIZE][SIZE]={5,3,7,-1,-3,-5,4,7,9},B[SIZ2][SIZ2],C=0;
	/*массив A*/
    
    for (int i=0; i<SIZE; i++)
    {
	  for (int j=0;j<SIZE;j++)
	  {
	      printf("%d ",A[i][j]);
	  }
	  printf("\n");
    }
    printf("\n");
    
    
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
        C=A[i][SIZE-1];
        A[i][SIZE-1]=A[0][j];
        A[0][j]=C;
        }
    }
    
    C=0;
    
     for (int i=0; i<SIZE; i++)
    {
	  for (int j=0;j<SIZE;j++)
	  {
	      printf("%d ",A[i][j]);
	  }
	  printf("\n");
    }
    printf("\n");
     
     
     /**************************************/
	 
	 /*Массив B*/
    
    for(int i = 0; i < SIZ2; i++)
        for(int j = 0; j < SIZ2; j++)
            scanf("%d", &B[i][j]);
        
    printf("\n");
    
   
    for (int i=0; i<SIZ2; i++)
    {
	  for (int j=0;j<SIZ2;j++)
	  {
	      printf("%d ",B[i][j]);
	  }
	  printf("\n");
    }
    printf("\n");
    
    for(int i=0;i<SIZ2;i++)
    {
        for(int j=0;j<SIZ2;j++)
        {
        C=B[i][SIZ2-1];
        B[i][SIZ2-1]=B[0][j];
        B[0][j]=C;
        }
    }
    
     for (int i=0; i<SIZ2; i++)
    {
	  for (int j=0;j<SIZ2;j++)
	  {
	      printf("%d ",B[i][j]);
	  }
	  printf("\n");
    }
    printf("\n");
    
    
  
    
    
    

    return 0;
}
