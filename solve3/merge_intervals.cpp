#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &v)
{
    // Write your code here.
    int n = v.size();
    sort(v.begin(), v.end());
    vector<vector<int>> ans;
    for(int i=0;i<n;){
        int a = v[i][0];
        int b = v[i][1];
        int j = i+1;
        for(;j<n;j++){
            int c = v[j][0];
            int d = v[j][1];
            
            if(c<=b){
                if(d>b){
                    b = d;
                }
            } else{
                i=j;
                break;
            }
        }
        i = j;
        ans.push_back({a,b});
    }
    return ans;
}
