//Link - https://www.codingninjas.com/codestudio/problems/maximum-subarray-sum_630526?topList=striver-sde-sheet-problems&leftPanelTab=1

#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long maxSum=0;
    long long curSum=0;
    for(int i=0;i<n;i++){
        curSum+=arr[i];
        maxSum=max(curSum,maxSum);
        if(curSum<0) curSum=0;
    }
    return maxSum;
}
