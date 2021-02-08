#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int i, num, calc=1, temp=1;

  printf("Enter a number: ");
  scanf("%d", &num);

  for(i=0; i<num; i++){
    calc*=temp;
    temp++;
  }
  printf("The factorial of %d is %d",num,calc);
}
