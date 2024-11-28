#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(vector<int>& arr,int k){
    int window_sum=0;
    int maxSum=0;

    for(int x=0;x<k;x++){
        window_sum+=arr[x];
    }
    maxSum=window_sum;
    for(int i=k;i<arr.size();i++){
        window_sum+=arr[i]-arr[i-k];
        maxSum=max(maxSum,window_sum);
    }
    return maxSum;
}
int main(){
    vector<int> arr={1,4,2,10,23,3,1,0,20};
    int window_size;
    cout<<"Enter window size : ";
    cin>>window_size;
    if(window_size>arr.size())
    cout<<"invalid"<<endl;
    else{
    int result = maxSubarraySum(arr,window_size);
    cout<<"maximum sum of subarray of size "<<window_size<<" is "<<result;
    }
    return 0;
}