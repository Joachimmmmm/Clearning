#include <stdio.h>
#include <math.h>

int power(int a);

int main(){

  int a, ans;
  printf("Enter a number: ");
  scanf("%d", &a);
  ans = power(a);

  printf("Second tetration of %d is %d", ans, a);
}

int power(int a){
  static int t=0;
  if(a!=(pow(t, t))){
    t++;
    return power(a);
  }else
    return t;
}
