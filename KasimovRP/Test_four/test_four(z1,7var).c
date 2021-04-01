#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
void PosCount(double[],int);
void NegCount(double[],int);
void ZCount(double[],int);
void BAverCount(double[],int);
void Fill(double[],int);

int main()
{
	double A[SIZE];
	Fill(A,SIZE);
	printf("\n");
	PosCount(A,SIZE);
	NegCount(A,SIZE);
	ZCount(A,SIZE);
	BAverCount(A,SIZE);
	return 0;
}

void Fill(double Arr[],int N)
{
	srand(time(NULL));
	for(int i=0;i<N;i++)
	{
		Arr[i]=rand()%21-10;
		printf("%.3f ",Arr[i]);
	}
}
void PosCount(double Arr[],int N)
{
	int count=0;
	for(int i=0;i<N;i++)
	if(Arr[i]>0)
		count++;
	printf("Количество положительных = %d\n",count);
}
void NegCount(double Arr[],int N)
{
	int count=0;
	for(int i=0;i<N;i++)
	if(Arr[i]<0)
		count++;
	printf("Количество отрицательных = %d\n",count);
}
void ZCount(double Arr[],int N)
{
	int count=0;
	for(int i=0;i<N;i++)
	if(Arr[i]==0)
		count++;
	printf("Количество нулевых = %d\n",count);
}
void BAverCount(double Arr[],int N)
{
	int count=0;
	double avArr=0;
	for(int i=0;i<N;i++)
		avArr+=Arr[i];
	avArr/=N;
	for(int i=0;i<N;i++)
	if(Arr[i]<avArr)
		count++;
	printf("Среднее арифметическое = %.3f, количество меньших среднего арифметического = %d\n",avArr,count);
}

