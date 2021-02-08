#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int num,num1;

  printf("Enter a number: ");
  scanf("%d %d", &num,&num1);

  printf("-=-=-=-=-=[ Multiplication table ]=-=-=-=-=-\n\n");
  printf("\t\t    %d\n",num);
  printf("\t\t    %d x\n",num1);
  printf("\t\t    ----\n");
  printf("\t\t    %d",num*num1);
}
