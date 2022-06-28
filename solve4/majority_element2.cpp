#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n = arr.size();
    vector<int> ans;
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++){
        if(mp[arr[i]]==-1) continue;
        mp[arr[i]]++;
        if(mp[arr[i]]>n/3){ 
            ans.push_back(arr[i]);
            mp[arr[i]] = -1;
        }      
    }
    return ans;
}