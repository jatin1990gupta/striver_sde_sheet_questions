#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    int idx=-1;
    for(int i=0;i<m;i++){
        if(mat[i][0]<=target) idx = i;
        if(mat[i][0]>target) break;
    }
    if(idx==-1) return false;
    
    for(int i=0;i<n;i++){
        if(mat[idx][i]==target) return true;
    }
    return false;
    
}