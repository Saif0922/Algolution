#include<bits/stdc++.h>
using namespace std;
int maximumProfit(vector<int>& prices)
{
     int minimumPrices = INT_MAX;
     int max_profit = 0;

     for(int x : prices){

      minimumPrices = min(minimumPrices, x);
       int profit = x - minimumPrices;
       max_profit = max(max_profit,profit);
     }
     return max_profit;
}
int main(){
    vector<int> prices = {7,1,5,3,6,4};
    cout<<"Maximum profit we got : "<<maximumProfit(prices)<<endl;
    return 0;
}