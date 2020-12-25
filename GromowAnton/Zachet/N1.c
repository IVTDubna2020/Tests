#include <stdio.h>
#include <math.h>

int main()
{
    float x,y,z,a;
    printf("Enter the x,then y, then z\n");
    scanf("%f%f%f",&x,&y,&z);
    a=(1+y)*((x+(pow(y,2)/(pow(x,2)+4)))/(exp(2)+(1/(pow(x,2)+4))));
    printf("%f",a);
    
    return 0;
}