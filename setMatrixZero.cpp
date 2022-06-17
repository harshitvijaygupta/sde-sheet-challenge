//Link - https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_3846774?topList=striver-sde-sheet-problems

#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
    // Write your code here.
    int row = matrix.size();
        int col = matrix[0].size();
        bool flag = true;
        for(int i=0;i<row;i++){
            if(matrix[i][0]==0) flag=false;
            for(int j=1;j<col;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>=1;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
            if(flag==false){
                matrix[i][0]=0;
            }
        }
}
