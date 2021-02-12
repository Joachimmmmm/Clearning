#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rev();

int main(){

  printf("Please type something: ");
  rev();
  return 0;
}

void rev(){
  char str;
  scanf("%c", &str);

  if(str != '\n')
    rev();
    printf("%c", str);
  }
