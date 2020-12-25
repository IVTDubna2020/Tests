#include <stdio.h>

int main(){
  int password = 29328, pass, count=0;
  printf("Введите пароль:\n");
  scanf("%d",&pass);
  while (count<4){
    if (pass == password){
	printf("Вошли\n");
	break;
    }
    else {
      printf("Неверный пароль\n");
      scanf("%d",&pass);
      count+=1;
    }
  }
  if (count == 4)
    printf("Неудача\n");
  return 0;
}

    
