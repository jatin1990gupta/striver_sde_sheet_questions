#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    unordered_set<int> iSet, jSet;
    
    int n = matrix.size();
    if(n==0) return;
    int m = matrix[0].size();
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                iSet.insert(i);
                jSet.insert(j);
            }
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(iSet.find(i)!=iSet.end() || jSet.find(j)!=jSet.end()){
                matrix[i][j] = 0;
            }
        }
    }
}