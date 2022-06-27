#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    vector<int> vp(m+n);
    
    int i=0,j=0;
    int idx=0;
    while(i<m && j<n){
        if(arr1[i]>arr2[j]){
            vp[idx++] = arr2[j++];
        } else {
            vp[idx++] = arr1[i++];
        }
    }
    while(i<m){
        vp[idx++] = arr1[i++];
    }
    while(j<n){
        vp[idx++] = arr2[j++];
    }
    return vp;
}