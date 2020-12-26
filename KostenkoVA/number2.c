#include <stdio.h>
 
main() 
{
    int b=0; float a;
    printf("Number:");
    scanf("%f%d",&a,&b);
    while (a!=0) {
          b=b*10+a%10;
          a=a/10;
          }
    printf("Reversed number:%d\n",b);
    return 0;
}
