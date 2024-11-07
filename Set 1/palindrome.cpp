#include<iostream>
using namespace std;

bool isPalindrome(int arr[],int size){
  
  for(int i=0;i<size;i++){
    if(arr[i]!=arr[size-i]){
      return false;
    }
  }
    
}

int main(){
  int arr[5];
  int size=sizeof(arr)/sizeof(arr[0]);
  cout<<"Enter 5 inputs : ";
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  if(isPalindrome(arr,size-1)!=false){
    cout<<"The array is a palindrome";
  }
  else
  cout<<"The array is not palindrome";

  return 0;
}