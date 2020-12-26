#include <stdio.h>
 
main() 
{
    unsigned int a,b=0;
    printf("Number:");
    scanf("%d%f",&a,&b);
    while (a!=0) {
          b=b*10+a%10;
          a=a/10;
          }
    printf("Reversed number:%d\n",b);
    return 0;
}
