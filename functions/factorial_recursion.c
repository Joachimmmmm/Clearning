#include <stdio.h>

int fact(int a);

int main(){
  int a, res;

  printf("Choose a number: ");
  scanf("%d", &a);

  res = fact(a);

  printf("The factorial of your number is %d\n", res);
}

int fact(int a){

  if(a>=1)
    return a*fact(a-1);
  else
    return 1;
}
