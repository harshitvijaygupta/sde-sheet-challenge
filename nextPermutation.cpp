//Generate lexiographically next permutation of an array
// Link - https://www.codingninjas.com/codestudio/problems/next-permutaion_893046?topList=striver-sde-sheet-problems&leftPanelTab=0

//Code 1 - O(n)
#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    next_permutation(permutation.begin(),permutation.end());
    vector<int> ans=permutation;
    if(ans[n-2]>permutation[n-2]){
        return ans; 
    }else{
        prev_permutation(permutation.begin(),permutation.end());
        return ans;
    }
}

//Code 2 - Soon...
