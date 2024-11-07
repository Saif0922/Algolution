#include<iostream>
using namespace std;

void uniqueElements(int arr[],int size){
  bool found=false;
  cout<<"unique elements are: ";
  for(int i=0;i<size;i++){
      bool isUnique=true;
      for(int j=0;j<size;j++){
        if(i!=j && arr[i]==arr[j]){
        isUnique=false;
        break;
        }
      }
      if(isUnique){
      cout<<arr[i]<<" ";
      found=true;
      }
  }
  if(!found){
    cout<<"No unique elements are found";
  }
  cout<<endl;
}

int main(){
  int arr[]={2,4,4,4,5,6,6,6,7,9,9,9};
  int size=sizeof(arr)/sizeof(arr[0]);
  uniqueElements(arr,size);
  return 0;
}