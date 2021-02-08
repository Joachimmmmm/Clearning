#include <stdio.h>

int main(){
  int num;
  float num1;

  printf("Enter an integer then a float: ");
  scanf("%d%f", &num, &num1);
  printf("You typed: %d and %f!\n", num, num1);
}
