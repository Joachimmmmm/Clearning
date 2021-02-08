#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
  double i,fib,num=1.61803398875,num1=0.61803398875;

  printf("Pick any number: ");
  scanf("%lf", &i);

  fib = ((pow(num, i) - (pow(num1, i))) / sqrt(5));
  printf("The fibonacci of %.0lf is %.0lf",i,round(fib));
}
