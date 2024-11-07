#include<stdio.h>
#include<stdlib.h>

int main(){
  int col,row;
  printf("enter number of columns to be added : ");
  scanf("%d",&col);
  printf("Enter number of rows to be added : ");
  scanf("%d",&row);

  for(int i = 0; i < row; i++)
  {
    for(int k = row; k>i;k--){
      printf(" ");
    }
  for(int j = 0; j < col; j++){
    printf("*");
  }
  printf("\n");
  }
  return 0;
}