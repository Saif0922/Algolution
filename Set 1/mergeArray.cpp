#include<iostream>
using namespace std;

void mergingArray(int arr1[],int arr2[],int size1,int size2,int mergedArray[])
{
  int i=0,j=0,k=0;

  while(i<size1 && j<size2){
    if(arr1[i]<arr2[j])
    mergedArray[k++]=arr1[i++];
    else
    mergedArray[k++]=arr2[j++];
  }

 //now for remaining elements
  while(i<size1)
  {
    mergedArray[k++]=arr1[i++];
  } 

  while(j<size2)
  {
    mergedArray[k++]=arr2[j++];
  } 
}

void printArray(int merged[],int size){
  for(int i=0;i<size;i++){
    cout<<merged[i]<<" ";
  }
}

int main(){

  int arr1[5]={1,5,6,8,9};
  int arr2[5]={3,7,12,15,16};
  size_t size1=sizeof(arr1)/sizeof(arr1[0]);
  size_t size2=sizeof(arr2)/sizeof(arr2[0]);

  int mergedArray[size1+size2];

  mergingArray(arr1,arr2,size1,size2,mergedArray);

  printArray(mergedArray,size1+size2);

  return 0;
}