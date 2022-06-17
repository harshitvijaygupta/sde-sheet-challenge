//Link - https://www.codingninjas.com/codestudio/problems/pascal-s-triangle_1089580?topList=striver-sde-sheet-problems&leftPanelTab=1

#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> ans(n);
    for(int i=0;i<n;i++){
        //resize vector after each row
        ans[i].resize(i+1);
        //both edges will be 1
        ans[i][0]=1;
        ans[i][i]=1;
        for(int j=1;j<i;j++){
            ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
        }
    }
    return ans;
}
