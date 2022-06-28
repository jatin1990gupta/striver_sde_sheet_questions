#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++){
        int x = arr[i];
        mp[x]++;
        if(mp[x]>n/2) return x;
    }
    return -1;
}