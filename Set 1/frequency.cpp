#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void countFrequency(vector<int>&arr)
{
  sort(arr.begin(),arr.end());

  int size = arr.size();

  for(int i=0; i<size;){
    int count = 1;

    int current=arr[i];
    i++;

    while(i<size && arr[i]==current){
      count++;
      i++;
    }

    cout<<"Frequency of "<<current<<" is "<<count<<endl;
  }
}

int main(){
  vector<int> arr={1,2,2,2,3,3,4,5,5,5,5,7};
  countFrequency(arr);
  return 0;
}