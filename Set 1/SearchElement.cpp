#include<iostream>
using namespace std;

int searchElement(int arr[],int num,int size){
  
  int n=0;
  for(n=0;n<=size;n++){
    if(arr[n]==num)
    return n;
  }
}

int main(){
  int size;
  cout<<"Enter size of the array : ";
  cin>>size;

  int arr[size];
  
  cout<<"Enter elements in the array : ";
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  int num;
  cout<<"Enter Element you want to search in that array : ";
  cin>>num;
  if(searchElement(arr,num,size-1)<size)
  cout<<"Element found at index "<<searchElement(arr,num,size-1);
  else
  cout<<"-1";
  return 0;
}