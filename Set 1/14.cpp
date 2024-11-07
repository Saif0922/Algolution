#include<stdio.h>

void pattern(int row,int col){
  for(int i=0;i<row;i++){
    if(i%2!=0){
      for(int j=1;j<=col;j++){
        printf("%d",j);
      }
    }
    else
    {
      for(int j=col;j>0;j--){
        printf("%d",j);
      }
    }
    printf("\n");
  }
}

int main(){
  int row,col;
  printf("Enter number of rows to be added : ");
  scanf("%d",&row);
  printf("Enter number of columns to be added : ");
  scanf("%d",&col);

  pattern(row,col);

  return 0;
}