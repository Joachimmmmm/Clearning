#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rev();

int main(){

  printf("Please type something: ");
  rev();
}

void rev(){
  char c;
  scanf("%c", &c);

  if(c != '\n'){
    rev();
    printf("%c", c);
  }
}
