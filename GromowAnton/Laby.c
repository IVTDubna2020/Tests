#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#define n 12

int plan[n][n]={
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,0,0,0,1,0,0,0,0,0,0,1},
  {0,0,1,0,1,0,1,1,1,1,0,1},
  {1,1,1,0,1,0,0,0,0,1,0,1},
  {1,0,0,0,0,1,1,1,0,1,0,0},
  {1,1,1,1,0,1,0,1,0,1,0,1},
  {1,0,0,1,0,1,0,1,0,1,0,1},
  {1,1,0,1,0,1,0,1,0,1,0,1},
  {1,0,0,0,0,0,0,0,0,1,0,1},
  {1,1,1,1,1,1,0,1,1,1,0,1},
  {1,0,0,0,0,0,0,1,0,0,0,1},
  {1,1,1,1,1,1,1,1,1,1,1,1}
};

  void show(int [][n]);
void init(int *,int *,int [][n]);

main()
{
  int x,y;
  show(plan);
  init(&x,&y,plan);



  return 0;
}


  void show(int plan2[n][n])
  {
    system("sleep 0.1x");
    system("clear");
    for(int i=0;i<n;i++)
      {
	for(int j=0;j<n;j++)
	  {
	    if (plan2[i][j]==1)printf("  =");
	    else printf("   ");
	    
	  }
        printf("\n");
      }
    
  }


void init(int *x,int *y,int plan2[n][n])
{
  srand (time(NULL));
  *x=rand()%12;
  *y=rand()%12;
  while(plan2[*x][*y])
    {
      *x=rand()%12;
      *y=rand()%12;
    }

  
}
