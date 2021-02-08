#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int i, comp=0;
  char v, input, vowel[]="aeiouAEIOU";


  printf("Enter a letter: ");
  scanf("%c", &input);
  for(i=0; i<strlen(vowel); i++){
    v = vowel[i];
    if(input == v)
      comp=1;
    else
      continue  ;
  }

  if(!isalpha(input))
    printf("[!!] This is not a character!\n", input);
  else if(comp == 1)
    printf("'%c' is a vowel!\n", input);
  else
    printf("'%c' is a constant!\n", input);
}
