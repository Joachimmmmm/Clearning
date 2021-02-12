#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(int* arr_ptr);

int main(){
  int* ptr, avg, i, arr[6]= {20, 10, 21, 41, 11, 13};

  ptr = &arr[0];

  printf("[Before swap]:\n");
  for(i=0; i<6; i++){
    printf("[%d]\t", *(ptr+i));
  }

  swap(&arr[0]);

  printf("\n\n[After swap]:\n");
  for(i=0; i<6; i++){
    printf("[%d]\t", *(ptr+i));
  }
}

void swap(int* arr_ptr){
  int* t_ptr, temp[6], i, c=0;
  t_ptr = &temp[0];

  for(i=5; i>=0; i--){

    *(t_ptr+c) = *(arr_ptr+i);
    c++;
  }
  for(i=0; i<6; i++){
    *(arr_ptr+i) = *(t_ptr+i);
  }
}
