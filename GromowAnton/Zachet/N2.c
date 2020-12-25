#include <stdio.h>
#include <math.h>

int main()
{
    float n,k=1,nk,sigm,sigm2;
    printf("enter n\n");
    scanf("%f",&n);
    for(nk=1;nk<=n;nk++)
    {
        sigm=pow(1,k)*(k*(k+4)*(k+8));
        sigm2=sigm+sigm2;
        k++;
    }
    
    printf("%f\n",sigm2);
    
    
    return 0;
}