#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define SIZE 5

int f(double [], int);

int main()
{
  double A[SIZE];

  srand(time(NULL));
  for(int i = 0; i < SIZE; i++)
  {
    A[i] = rand()%10;
    printf("%f ", A[i]);
  }
   printf("\n%d\n",f(A, SIZE));

   return 0;
}

int f(double A[], int n)
{
  int count;

  for(int i = 0; i < n; i++)
  {
    printf("%f ", cos(A[i]));
    if (cos(A[i])<0)
      count++;
  }

  return count;
}


