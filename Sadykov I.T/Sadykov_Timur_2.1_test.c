#include <stdio.h>
#include <math.h>
int f=0;
float ax,bx,cx,ay,by,cy,ab,ac,cb,accb,baac,abbc,P,smp,S;
int main() {

printf("Программа вычисляющая углы, длины, периметр и площадь по координатам у треугольника\n");
while (f!=1){
   printf("Введите координаты для вычисления углов и сторон\n");

   printf("(Координаты первой вершины)x-"); scanf("%f",&ax); printf("y-"); scanf("%f",&ay);
   printf("(Координаты второй вершины)x-"); scanf("%f",&bx); printf("y-"); scanf("%f",&by);
   printf("(Координаты третьей вершины)x-"); scanf("%f",&cx); printf("y-"); scanf("%f",&cy);

   ab=sqrt((pow(bx-ax, 2))+(pow(by-ay, 2)));
   cb=sqrt((pow(cx-bx, 2))+(pow(cy-by, 2)));
   ac=sqrt((pow(cx-ax, 2))+(pow(cy-ay, 2)));
 
   if(ab+cb>ac && ab+ac>cb && cb+ac>ab) {

      printf("Стороны: ab=%f; cb=%f; ac=%f;\n",ab, cb, ac); 

      accb=acosf(((pow(ac, 2))+(pow(cb, 2))-(pow(ab, 2)))/(ac*cb*2));
      baac=acosf(((pow(ac, 2))+(pow(ab, 2))-(pow(cb, 2)))/(ac*ab*2));
      abbc=acosf(((pow(ab, 2))+(pow(cb, 2))-(pow(ac, 2)))/(ab*cb*2));

      accb*=57.3;
      baac*=57.3;
      abbc*=57.3;

      printf("Углы: acb=%f; bac=%f; abc=%f;\n",accb, baac, abbc); 

      P=ab+ac+cb;

      smp=P/2;
  
      S=sqrt(smp*(smp-ab)*(smp-ac)*(smp-cb));

      printf("P=%f; (полупериметр)smp=%f; S=%f;\n",P, smp, S); f=1;
  }
   else {
      printf("Такого треугольника не существует, попробуйте вести другие данные");
  }
 }
return 0;
}
