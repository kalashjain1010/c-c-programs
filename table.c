#include<stdio.h>

int main(){
    int i;
    int u;
    printf("enter the no.");
    scanf("%d",&i);
  for ( u = 1; u < 11; u++)
  {
      printf("%d * %d=%d\n",i,u,i*u);
  }
  return 0;
}