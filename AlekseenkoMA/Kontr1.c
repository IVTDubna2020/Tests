#include <stdio.h>
#define S1 5
#define S2 3

void show(int a, int[][a]);
void change(int a, int[][a]);

int main()
{
	int A[S1][S1], i, j, B[S2][S2]= {{5, 3, 7}, {-1, -3, -5}, {4, 7, 9}};
	for (i = 0; i < S1; i++)
	{
		for (j = 0; j < S1; j++) 
		{
			printf("A[%d][%d] = ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	show(S1,A);	 change(S1,A); 	show(S1,A);
    show(S2,B);  change(S2,B);	show(S2,B);
	return 0;
}

void show(int a, int Massiv[][a])
{
	for (int i=0;i<a;i++)
	{
		for (int j=0;j<a;j++) 
        printf("%d ", Massiv[i][j]);
		printf("\n");
	}
	printf("\n\n");
}

void change(int a, int Massiv[][a])
{   
        for (int j = 0,i = 0; j < a,i < a; j++,i++)
        {                   
            Massiv[0][j]=Massiv[a][i]; 
            Massiv[a][i]=Massiv[0][j];       
        }   
}
