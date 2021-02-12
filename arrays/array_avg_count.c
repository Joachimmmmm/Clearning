#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int* ptr, avg, i, arr[6]= {20, 10, 21, 41, 11, 13};

  for(i=0; i<6; i++){
    ptr = &arr[i];
    avg += *ptr;
  }
  avg /= 6;
  printf("%d", avg);
}
