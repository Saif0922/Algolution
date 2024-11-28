#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool ElementsPair(vector<int>& arr,int x){
    sort(arr.begin(),arr.end());
    for(int v : arr){
        for(int i : arr){
            if((arr[v]+arr[i])==x)
            return true;
        }
    }
    return false;
}
int main(){
    vector<int> arr = {4,5,7,8,3,6,1};
    int x;
    cout<<"Enter number: ";
    cin>>x;
    if(ElementsPair(arr,x))
    cout<<"Yes there exist a pair whose sum is equal to "<<x<<endl;
    else
    cout<<"There is no pair whose sum is equal to "<<x<<endl;
    return 0;
}