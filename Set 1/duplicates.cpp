#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int countDuplicates(const vector<int>&arr){
  unordered_map<int,int> count;

  for(int num  : arr){
    count[num]++;
  }

  int duplicate = 0;

  for(const auto& pair:count){
    if(pair.second>1){
      duplicate++;
    }
  }
  return duplicate;
}

int main(){
  vector<int> arr={1,2,2,2,3,3,4,5,5,5,5,7};

  cout<<"total duplicate numbers are : "<<countDuplicates(arr);
  return 0;
}