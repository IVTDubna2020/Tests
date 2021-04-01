#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void SumAndFillB(int[][3],int[]);
void FillA(int[][3]);

int main()
{
	int A[4][3],B[4];
	FillA(A);
	printf("\n");
	SumAndFillB(A,B);
	return 0;
}

void FillA(int Arr[][3])
{
	srand(time(NULL));
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			Arr[i][j]=rand()%101;
			printf("%d ",Arr[i][j]);
		}
		printf("\n");
	}
}
void SumAndFillB(int Arr[][3],int Brr[])
{
	int sum=0;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			sum+=Arr[i][j];
		}
		Brr[i]=sum;
		printf("%d\n",Brr[i]);
		sum=0;
	}
	
}


