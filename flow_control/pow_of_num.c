#include <stdio.h>

int main(){
  int i, n, p, f;

  printf("Please put in any number: ");
  scanf("%d", &n);
  printf("To what power would you like to times?: ");
  scanf("%d", &p);

  for(i=0; i<p; i++){
    f+=n*n;
  }
  printf("%d to the power of %d is %d",n,p,f);
}
