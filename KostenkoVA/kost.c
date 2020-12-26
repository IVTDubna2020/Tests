#include <stdio.h>
#include <math.h>
int fun (int x);
int main()
{
    int x;
    printf("Введите искомое число: ");
    scanf("%d", &x);
    printf ("%d", fun(x));
    return 0;
}

int fun (int x)
{
 int a, b=0, res, c;
 a = x;
 while (a > 0)
 {
     a /= 10;
     b++;
 }
 while (b > 0)
 {
     c = x / pow (10, b-1);
     res += x / pow (10, b-1);
     if (b > 1) res *=100;
     x = x - c * pow(10, b-1);
     b--;
 }
 return res;
}
