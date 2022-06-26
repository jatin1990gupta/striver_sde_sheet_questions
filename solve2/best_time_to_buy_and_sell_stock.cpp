#include <bits/stdc++.h> 
int maximumProfit(vector<int> &arr){
    // Write your code here.
    int n = arr.size();
    int mxArr[n-1];
    
    int mx = 0;
    for(int i=n-1;i>=0;i--){
        mx = max(mx, arr[i]);
        mxArr[i-1] = mx;
    }
    
    int ans = 0;
    for(int i=0;i<n-1;i++){
        ans = max(ans, mxArr[i]-arr[i]);
    }
    return ans;
}