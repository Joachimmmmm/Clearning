#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int num1, num2, num3, largest=0;

  printf("Please enter 3 numbers: ");
  scanf("%d %d %d", &num1,&num2,&num3);

  if(num1 > num2)
    if(num1 > num3)
      largest = num1;
    else
      largest = num3;
  else
    if(num2 > num3)
      largest = num2;
    else
      largest = num3;

  printf("The largest of %d, %d, %d is %d\n",num1,num2,num3,largest);
}
