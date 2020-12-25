#include <stdio.h>

int main()
{
    int n, i, num=0;
    printf("Введите число: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++) if ((i % 5 != 0) && (i % 11 != 0)) num++;
    printf("Кол-во чисел, соответствующих условию: %d", num);
    return 0;
}

