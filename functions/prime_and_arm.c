#include <stdio.h>
#include <stdlib.h>

void prime(int a);
void arm(int num);
int choose;


int main(){
  int a;
  char inp;

  printf("Would you like to find a Prime or Arm number?[p/r]: ");
  scanf("%c", &inp);

  if(inp == 'p'){
    printf("Pick a number: ");
    scanf("%d", &a);

    prime(a);
  }else{
    printf("Enter an integer: ");
    scanf("%d", &a);

    arm(a);
  }

}

void prime(int a){

  int i, y=0;

  for(i=1; i < a; i++){

    if(a%i == 0)
      y+=1;
  }

  if(y <= 1)
    printf("%d is a prime number", a);
  else
    printf("%d is not a prime number", a);
}

void arm(int num){

  int originalNum, remainder, result = 0;
  originalNum = num;

  while (originalNum != 0) {
     // remainder contains the last digit
      remainder = originalNum % 10;

     result += remainder * remainder * remainder;

     // removing last digit from the orignal number
     originalNum /= 10;
  }

  if (result == num)
      printf("%d is an Armstrong number.", num);
  else
      printf("%d is not an Armstrong number.", num);
}
