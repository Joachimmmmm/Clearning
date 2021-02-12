#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int* ptr, avg, i, arr[6]= {20, 10, 21, 41, 11, 13};
  ptr = &arr[0];
  
  printf("%d", *(ptr+1));
}
