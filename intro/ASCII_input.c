#include <stdio.h>

int main(){
  char input;

  printf("Enter a letter: ");
  scanf("%c", &input);
  printf("Here is %c in ASCII: %d", input, input);
}
