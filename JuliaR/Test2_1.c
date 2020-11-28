#include <stdio.h>
#include <math.h>

int main()
{
  int v,a,b,c,P,h,A,C;
    float S;
    
    printf("Элементы какого треугольника Вы хотите найти? Выберете цифру\n");
    printf("1.Равнобедренный\n");
    printf("2.Равносторонний\n");
    printf("3.Прямоугольный\n");
    scanf("%d",&v);
    printf("Введите значения угла, прилегающей стороны и высоты:\n");
    scanf("%d %d %d",&a, &c, &h);
    if (c<h)
      printf("Такого треугольника не существует\n");
    else {
      b=sqrt(c*c-h*h);
      S=b*h/2;
      A=90-a;
    
      if (v==3){
	P=b+c+h;
	C=90;
	printf("Стороны теугольника: a=%d b=%d c=%d\n",b,h,c);
	printf("Площадь треугольника: S=%1.1f\n",S);
	printf("Периметр: P=%d\n",P);
	printf("Углы: A=%d B=%d C=%d\n",A,a,C);
      }
      else {
	P=2*a+2*c;
	printf("Стороны теугольника: a=%d b=%d c=%d\n",b*2,c,c);
	printf("Площадь треугольника: S=%1.1f\n",S*2);
	printf("Периметр: P=%d\n",P);
	printf("Углы: A=%d B=%d C=%d\n",A*2,a,a);      
      }
    }
      
    return 0;
}
