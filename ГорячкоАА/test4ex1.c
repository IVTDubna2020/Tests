#include <stdio.h>
#include <time.h>
#define S 20

int main()
{
    char a[S];
    srand(time(NULL));
    printf("зададим случайный массив: \n");
    for(int i = 0; i < S; i++)
    {
        a[i] = 32 + rand()%127;
        printf(" %c\t",a[i]);
    }
     printf("\n заменим каждую строчную латинскую букву \n ");
   
    printf("\n \n количество перемен: %d \n", change (a, S));
    
    return 0;
}

int change (char b[], int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if (b[i]>=97 && b[i]<=122)
        {
            b[i]=36;
            count ++;
        }
        printf (" %c \t ",b[i]);
    }
    return count;
}