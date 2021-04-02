#include <stdio.h>
#include <time.h>
#define SIZE 10

int main ()
{
	char X[SIZE];
	srand(time(NULL));
	for(int i=0; i<SIZE; i++)
	{
     X[i] = 0 + rand() % 250;
      printf("%c\t",X);
    }
	return 0;
} 

