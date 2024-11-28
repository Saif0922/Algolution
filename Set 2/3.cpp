#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int heap(vector<int>&nums,int i){
  
  int largest=i;
  int left=2*i+1;
  int right=2*i+2;
  if(left<nums.size() && nums[left]<nums[largest])
  largest=left;
  if(right<nums.size() && nums[right]<nums[largest])
  largest=right;
  if(largest != i){
    swap(nums[i],nums[largest])
    heap(nums,largest);
  }
}
void MinHeap(vector<int>&nums){
  for(int i=nums.size()/2-1;i>=0;i--){
    heap(nums,i);
  }
}
int kthlargestEle(vector<int>&nums,int k)
{
  MinHeap(nums);

  for(int i=0;i<k-1;i++)
  {
    swap(nums[0],nums[])
  }
}
int main(){
  vector<int> nums[]={1,20,6,4,5};
 // int n=nums.size();
  int k;
  cout<<"Enter the position of the largest element you want to find: ";
  cin>>k;
  cout<<"The "<<k<<"th largest element is "<<kthLargestEle(nums,k)<<endl;
  return 0;
}