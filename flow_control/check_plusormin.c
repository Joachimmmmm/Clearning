#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int num;

  printf("Please enter a number: ");
  scanf("%d", &num);

  if(num > 0)
    printf("%d is a positive number.", num);
  else
    printf("%d is a negative number.", num);

}
