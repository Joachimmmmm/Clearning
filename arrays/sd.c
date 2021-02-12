#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int mean(int nums[]);
int diff(int nums[], int mean);

// program to find SD of given numbers
int main(){
  int nums[5], m, vari, stand, i;

  printf("Enter 5 numbers:\n");

  for(i=0; i<5; i++){
    printf("Number%d: ", i);
    scanf("%d", &nums[i]);
  }
  m = mean(nums);
  printf("[mean] %d\n", m);

  vari = variance(nums, m);
  printf("[variance] %d\n", vari);

  stand = sqrt(vari);
  printf("%d is the SD.\n", stand);
}

int mean(int nums[]){
  int i, a=0;
  for(i=0; i<5; i++){
    a+=nums[i];
  }
  return a/5;
}

int variance(int nums[], int mean){
  int i, a=0;
  for(i=0; i<5; i++){
    int diff = nums[i] - mean;
    a+=pow(diff,2);
  }
  return a/5;
}
