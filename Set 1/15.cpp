#include<stdio.h>

void binaryQuad(int row,int col){
    for(int j=0;j<row;j++){
      if(j==0 || j==(col-1)){
        for(int m=0;m<col;m++)
      {
      printf("1");
      }
      }
      else{
         printf("1");
          for(int k=1;k<(col-1);k++){
            printf("0");
          }
          printf("1");
      }
      printf("\n");
    }
  }

int main(){
  int row,col;

  printf("Enter number of rows to be added : ");
  scanf("%d",&row);
  printf("Enter number of column to be added : ");
  scanf("%d",&col);

  binaryQuad(row,col);

  return 0;
}