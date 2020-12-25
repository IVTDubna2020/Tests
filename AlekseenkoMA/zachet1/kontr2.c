#include <stdio.h>

int main()
    {
    int n, i, num=0;
    printf("Введите число: ");
    scanf("%d", &n);
    printf ("Подходящие числа: ");
    for (i=1; i<=n; i++)
        {
        if ((i % 37 == 0) && (i % 13 == 0))
            {
            printf ("%d \n", i);
            num++;
            }
        }
    printf("Кол-во чисел, соответствующих условию: %d\n", num);
    return 0;
    }

