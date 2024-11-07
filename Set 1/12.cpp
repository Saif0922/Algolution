#include<stdio.h>
#include<stdlib.h>

int main(){
  int col;

  printf("Enter number of column to be added : ");
  scanf("%d",&col);

for(int i=0;i<col;i++){
  for(int j=0;j<=i;j++){
    printf("*");
  }
        printf("\n");

}
  for(int i=col;i>0;i--)
  {
    for(int j=i-1;j>0;j--)
    {
      printf("*");
    }
          printf("\n");

}
  return 0;
}