#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mat(int a[2][3], int b[2][3]);


// program to find the sum of 2 matrices
int main(){
  int ma[2][3], ma1[2][3], i, j, k, l, c=0;

  printf("Please pick 12 numbers:\n\n");
  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      printf("Number%d: ", c);
      scanf("%d", &ma[i][j]);
      c++;
    }
  }
  for(int k=0; k<2; k++){
    for(int l=0; l<3; l++){
      printf("Number%d: ", c);
      scanf("%d", &ma1[k][l]);
      c++;
    }
  }
  mat(ma,ma1);
}

void mat(int a[2][3], int b[2][3]){
  int i, j, sum=0;
  printf("The sum of the 2 matrices is:\n\n");

  for(i=0; i<2; i++){
    for(j=0; j<3; j++){
      sum = a[i][j]+b[i][j];
      if(j==2)
        printf("[%d, %d] = %d\n", i+1, j+1, sum);
      else
        printf("[%d, %d] = %d ", i+1, j+1, sum);
    }
  }
}
