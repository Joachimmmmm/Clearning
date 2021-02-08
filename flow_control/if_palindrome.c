#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){

  int i, c, t=0, t1=-1, num;
  char str[50], str1[50];

  printf("Please input some numbers: ");
  scanf("%d", &num);
  sprintf(str, "%d", num);

  c = strlen(str);

  for(i=c; i>=0; i--){

    if(str[i-1]==str[t])
      t1+=1;
    else
      continue;
    t++;
  }

  if(t1 == c)
    printf("%d is a Palindrome number!\n", num);
  else
    printf("%d is not a Palindrome number!\n", num);
}
