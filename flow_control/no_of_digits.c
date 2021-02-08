#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){

  int i;
  char ch[10];
  printf("Enter a number: ");
  scanf("%d", i);

  sprintf(ch, "%d", i);

  printf(ch);
}
