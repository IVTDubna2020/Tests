#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    const double Pi=3.1415;
    double a, b, R, r, c, Ar, A, Br, B, C, Cr, Hb;
    printf("Input a: ");
    scanf("%lf", &a);
    printf("Input b: ");
    scanf("%lf", &b);
    printf("Input r: ");
    scanf("%lf", &R);
    printf("a = %lf, %lf, %lf\n", a, b, R);
    Ar=asin(a/(2*R));
    A=Ar*180/Pi;
    Br=asin(b/(2*R));
    B=Br*180/Pi;
    C=180-A-B;
    c=sqrt(pow(a,2)+pow(b,2)-2*a*b*cos(C));
    Cr=asin(c/(2*R));
    Hb=a*sin(Cr);
    printf("A = %.2lf\n", A);
    printf("B = %.2lf\n", B);
    printf("C = %.2lf\n", C);
    printf("c = %.2lf\n", c);
    printf("Hb = %.2lf\n", Hb);
    return 0;
}
