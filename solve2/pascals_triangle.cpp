#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    if(n==1) return {{1}};
    vector<vector<long long int>> vv(n);
    
    vv[0] = {1};
    vv[1] = {1,1};
    
    for(int i=2;i<n;i++){
        vector<long long int> v(i+1);
        v[0] = 1;
        for(int j=1;j<i;j++){
            v[j] = vv[i-1][j-1] + vv[i-1][j];
        }
        v[i] = 1;
        vv[i] = v;
    }
    
    return vv;
}
