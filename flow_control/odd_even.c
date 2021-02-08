#include <stdio.h>

int main(){
  int input;

  while(1){
    printf("Enter a number: ");
    scanf("%d", &input);

    if((input%2) == 1){
      printf("The number %d is odd.", input);
      break;
    }else if((input%2) == 0){
      printf("The number %d is even.", input);
      break;
    }else
      printf("[!!] Number can't be lower than 0.\n");
      continue;
  }
}
