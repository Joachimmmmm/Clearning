#include <stdio.h>
#include <stdlib.h>

int main(){
  float a, b, sum;
  char inp;

  while(1){
    printf("What would you like to do?[ + | - | * | / | q ]: ");
    scanf("%c", &inp);

    switch(inp){

      case '+':
        printf("What 2 numbers would you like to add?: ");
        scanf("%f %f", &a, &b);
        sum = a+b;
        printf("%.1f + %.1f = %.1f\n", a, b, sum);
        break;

      case '-':
        printf("What 2 numbers would you like to subtract?: ");
        scanf("%f %f", &a, &b);
        sum = a-b;
        printf("%.1f + %.1f = %.1f\n", a, b, sum);
        break;

      case '*':
        printf("What 2 numbers would you like to multiply?: ");
        scanf("%f %f", &a, &b);
        sum = a*b;
        printf("%.1f + %.1f = %.1f\n", a, b, sum);
        break;

      case '/':
        printf("What 2 numbers would you like to divide?: ");
        scanf("%f %f", &a, &b);
        sum = a/b;
        printf("%.1f + %.1f = %.1f\n", a, b, sum);
        break;

      case 'q':
        exit(0);

      default:
        printf("Please enter an actual option.\n");
    }
  }
}
