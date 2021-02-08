#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  char ch;

  printf("Enter a character: ");
  scanf("%c", &ch);

  if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    printf("%c is in the Alphabet!", ch);
  else
    printf("%c is not in the Alphabet!", ch);

}
