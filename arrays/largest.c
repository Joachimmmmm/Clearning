#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compare(int n, int count);

// program to find largest number in array
int main(){
  int* ptr, avg, i, arr[6]= {20, 10, 21, 41, 61, 13};

  for(i=0; i<6; i++){
    ptr = &arr[i];
    compare(*ptr, i);
  }
}

void compare(int n, int count){
  static int largest=0;
  int* p;
  p = &largest;

  if(count!=5){
    if(n>=*p)
      *p=n;
  }
  else{
    if(n>=*p){
      *p=n;
      printf("The largest number in the array is %d", *p);
    }
    else
      printf("The largest number in the array is %d", *p);
  }
}
