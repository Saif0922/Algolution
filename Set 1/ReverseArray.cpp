#include<iostream>
using namespace std;
void ReverseArray(int arr[],int size)
{
  int left=0,right=size-1;
  while(left<right){
    swap(arr[left],arr[right]);
    left++;
    right--;
  }
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[7];
  cout<<"Enter the elements : "; 

  for(int i=0; i<7; i++)
  {
    cin>>arr[i];
  }
  size_t size=sizeof(arr)/sizeof(arr[0]);
  ReverseArray(arr,size);

  return 0;
}