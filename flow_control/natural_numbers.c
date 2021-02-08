#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int i, num, total=0;

  printf("Enter a number: ");
  scanf("%d", &num);

  for(i=0; i<num; i++){
    total+=i;
  }
  printf("The total for your number is: %d\n",total);
}
