#include <stdio.h>
#include <math.h>

int main(){
  int x,y,z;
  double b;
  scanf("%d %d %d",&x,&y,&z);
  b = x*x*x*(atan(z)*atan(z)*atan(z)+y);
  printf("%f\n",b);

  return 0;
}
