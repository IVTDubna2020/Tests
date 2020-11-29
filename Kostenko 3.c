#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double a, x, p, s;
    printf("Input x(|x|<1): ");
    scanf("%lf", &x);
    n = 0;
    s = 0;
    p = 1;
    do
    {
        a = (n+1)/(pow(n, 3)+n+1) * p;
        s = s + a;
        p = p * x;
        n = n + 1;
    } while (abs(a)>=0.01);
    printf("P = %.2f\n", s);
    printf("N = %d\n", n);
    return 0;
}
