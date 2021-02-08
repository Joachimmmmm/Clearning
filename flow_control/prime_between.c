#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){

  int x, y, z, i, v=0;

  printf("Give me 2 numbers: ");
  scanf("%d %d", &x, &y);

  for(z=x; z<y+1; z++){

    for(i=1; i < x; i++){
      if(z%i == 0) // prime checker - if v=1 - prime
        v+=1;
    }

    if(v <= 1)
      printf("%d is a prime number\n", z);
    else
      printf("%d is not a prime number\n", z);
    v=0;
  }
}
