#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){

  int x, y, i, hcf;

  printf("give me 2 numbers: ");
  scanf("%d %d", &x,&y);

  for(i=1; i <= x && i <= y; i++){

    if(x%i==0 && y%i==0)
      hcf = i;

  }

  printf("The HCF of %d and %d is %d", x, y, hcf);
}
