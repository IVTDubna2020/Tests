#include <stdio.h>
#include <math.h>

int main()
{
    int n, S=0, num=1; 
    printf ("Введите n: ");
    scanf("%d", &n);
    for (int i=1; i <= n; i++)
    {
        if ((num == 1) || (num == 2)) S+=i;
        else S-=i;
        num++;
        if (num == 5) num = 1;
    }
    printf ("Сумма равна: %d", S);
    return 0;
}
