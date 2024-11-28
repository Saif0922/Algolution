#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>

using namespace std;

void subArray(const vector<int>&nums){
  unordered_map<int,pair<int,int>>subArrayMap;

  int current = 0;
  int max = INT_MIN;
  int start = 0,end = 0, tempStart = 0;

  for(int i=0;i<nums.size();i++){
    current+=nums[i];

    if(nums[i]>current){
      current=nums[i];
      tempStart=i;
    }

    if(current>max)
    {
      max=current;
      start=tempStart;
      end=i;
    }
  }
    subArrayMap[max]={start,end};
    cout<<"Maximum subarray sum : "<<max<<endl;
    cout<<"Subarray indices:Start = "<<subArrayMap[max].first<<", End = "<<subArrayMap[max].second<<endl;
    cout<<"Subarray Elements : ";
    for(int i=subArrayMap[max].first;i<=subArrayMap[max].second;i++){
      cout<<nums[i]<<" ";
    }
  }

int main(){
  vector<int> nums ={-2,1,-3,4,-1,2,1,-5,4};
  subArray(nums);
  return 0;
}