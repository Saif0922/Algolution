#include<iostream>
#include<vector>
using namespace std;
int EquilibriumIndex(const vector<int>& arr)
{
    int arraySum=0;
    int left_sum=0;

    for(int i=0;i<arr.size();i++){
        arraySum+=arr[i];
    }
    for(int i=0; i<arr.size(); i++){
        arraySum-=arr[i];
        if(left_sum==arraySum)
        return i;

        left_sum+=arr[i];
    }
    return -1;
}
int main(){
   vector<int>arr={-7,1,5,2,-4,3,0}; //output: 4
   //vector<int>arr={1,2,3}; output: -1
    int index=EquilibriumIndex(arr);
    if(index != -1){
        cout<<"Equilibriuim index : "<<index+1<<endl;
    }
    else
    cout<<index;
    return 0;
}