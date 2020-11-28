#include<stdio.h>
#include<math.h>

int main(){
  int x1,x2,y1,y2,m,n;
  printf("Введите значения x1,y1,x2,y2\n");
  scanf("%d %d\n",&x1,&y1);
  scanf("%d %d\n",&x2,&y2);
  m = sqrt(x1^2+y1^2);
  n = sqrt(x2^2+y2^2);
  if (m<n)
    printf("Точка M(%d;%d) ближе\n", x1,y1);
  else if (m>n)
    printf("Точка N(%d;%d) ближе\n", x2,y2);
  else
    printf("Одинаково");

  return 0;
}
