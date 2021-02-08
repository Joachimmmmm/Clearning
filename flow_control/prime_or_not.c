#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){

  int x, i, y=0;

  printf("Give me a number: ");
  scanf("%d", &x);

  for(i=1; i < x; i++){

    if(x%i == 0)
      y+=1;
  }

  if(y <= 1)
    printf("%d is a prime number", x);
  else
    printf("%d is not a prime number", x);
}
