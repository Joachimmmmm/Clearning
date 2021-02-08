#include <stdio.h>

int main(){
  int num=15,num1=6,div,rem;

  div=num/num1;
  rem=num%num1;
  if(rem>=1)
    printf("Here is %d divided by %d: %d r%d", num,num1,div,rem);
  else
    printf("Here is %d divided by %d: %d\n", num,num1,div);
}
