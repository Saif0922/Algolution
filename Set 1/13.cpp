#include<stdio.h>
#include<stdbool.h>

void diamond(int row){
  for(int i=1;i<=row;i++){
    for(int k=i;k<row;k++){
        printf(" ");
      }
    for(int j=1;j<=(2*i)-1;j++){
      printf("*");
    }
    printf("\n");
  }

  for(int i=row-1;i>=1;i--){
    for(int k=row;k>i;k--){
        printf(" ");
      }
    for(int j=0;j<2*i-1;j++){
      printf("*");
    }
    printf("\n");
  }
}

int main(){
  int row;

  printf("Enter even number of row to be added : ");
  scanf("%d",&row);
  if(row%2==0)
  {
    printf("Error");
  }
  else{
    printf("true\n");
    diamond(row);
  }
  return 0;
}