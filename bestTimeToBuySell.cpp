// Best time to buy sell stock
// Link - https://www.codingninjas.com/codestudio/problems/stocks-are-profitable_893405?topList=striver-sde-sheet-problems&leftPanelTab=0

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int mini=0;
    int cur=INT_MAX;
    int i=0;
    while(i<prices.size()){
        if(prices[i]<cur){
            cur=prices[i];
        }
        mini=max(mini,prices[i]-cur);
        i++;
    }
    return mini;
}
