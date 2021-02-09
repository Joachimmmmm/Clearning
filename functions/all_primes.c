#include <stdio.h>
#include <stdlib.h>

int prime(int a, int b);

int main(){

  int a, b, res;

  printf("Pick 2 numbers: ");
  scanf("%d %d", &a, &b);

  res = prime(a, b);
}

int prime(int a, int b){

  int i, j, val;
  for(i=a; i<b+1; i++){

    for(j=1; j < a; j++){
      if(i%j == 0)
        val+=1;
    }

    if(val <= 1)
      printf("%d is a prime number\n", i);
    else
      printf("%d is not a prime number\n", i);
    val=0;
  }
}
