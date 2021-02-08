#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){

  int i, c, num;
  char str[50], str2[50];

  printf("Please input some numbers: ");
  scanf("%d", &num);
  sprintf(str, "%d", num);

  c = strlen(str);
  for(i=c; i>=0; i--){

    printf("%c", str[i]);
  }
}
