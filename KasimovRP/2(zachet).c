#include <stdio.h>
    int check(int);
	int main()
	{
	 int n;
	  printf("Введите n ");
	 scanf("%d",&n);
	  printf("Количество целых чисел = %d",check(n));
		return 0;
	} 
	int check(int n)
	{
		int k;
		 for (int i=2;i<n;i++)
	 {
		 if((i%3!=0)&&(i%3!=0)&&(i%5==0))
		 k+=1;
	 }
	 return k;
	}
	
