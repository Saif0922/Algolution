#include<iostream>
#include<vector>
#include<map>


using namespace std;
void countInversion(const vector<int>&arr)
{
  map<int,pair<int,int>> myMap;
  int count=0;

  for(int i=0;i<arr.size();i++){
    for(int j=i+1;j<arr.size();j++){
      if(arr[i]>arr[j] && i<j){
        count++;
        myMap[count]={arr[i],arr[j]};
      }
    }
  }
  cout<<"Given array has "<<count<<" inversions: "<<endl;
  
  for(const auto& element: myMap){
    cout<<element.first<<".("<<element.second.first<<", "<<element.second.second<<")"<<endl;
  }
}
int main(){
  vector<int> arr={1,20,6,4,5};
  countInversion(arr);
  return 0;
}