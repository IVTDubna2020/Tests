#include <stdio.h>
#include <math.h>

int main() {
	float a,b,S;
	float c,sab,cab,ab, P,sac,cac,sbc,cbc,bc,ca;
	printf("Введите стороны треугольника a и b и его площадь S\n");
	scanf("%f%f%f",&a,&b,&S);
	printf("вы ввели: \n стороны a = %.2f, b = %.2f \n площадь %.2f\n",a,b,S);
	sab=(2*S)/(a*b);
	cab=sqrt(1-pow(sab,2));
	c=sqrt(pow(a,2)+pow(b,2)-2*cab);
		printf("третья сторона  c = %.2f\n",c);
	ab=asin(sab)*180/3.14;
		printf("a^b = %.2f, sin a^b = %.2f, cos a^b = %.2f\n",ab,sab,cab);
	sac=(2*S)/(a*c);
	cac=sqrt(1-pow(sac,2));
	ca=asin(sac)*180/3.14;
		printf("a^c = %.2f, sin a^c = %.2f, cos a^c = %.2f\n",ca,sac,cac);
	sbc=(2*S)/(a*c);
	cbc=sqrt(1-pow(sbc,2));
	bc=asin(sbc)*180/3.14;
		printf("a^c = %.2f, sin b^c = %.2f, cos b^c = %.2f\n",bc,sbc,cbc);
	return 0;
}