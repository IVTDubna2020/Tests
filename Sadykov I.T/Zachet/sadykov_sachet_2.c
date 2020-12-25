#include <stdio.h>

int main()
{   int n,i,y=0,no=0;
    printf("Введите количество голосующих - ");
    scanf("%d", &n);
    for (int count=0; count<n; count++){
        printf("Проголосуйте да(1) или нет(0)\n");
        i=3;
        scanf("%d", &i);
        if (i==1) y++;
        else if (i==0) no++;         
    }
    if (y<no) printf("Большинство проголосовало за нет %d<%d\n", y, no);
    else if (y>no)printf("Большинство проголосовало за да %d>%d\n", y, no); 
    else printf("Не принято единого решения\n");
    return 0;
}
   
