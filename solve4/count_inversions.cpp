#include <bits/stdc++.h> 

void merge(long long arr[], int i, int md, int j, long long &ans){
    int a = i;
    int b = md+1;
    
    long long temp[j-i+1];
    int idx=0;
    
    while(a<=md && b<=j){
        if(arr[a]>arr[b]){
            temp[idx++] = arr[b++];
            ans += (md-a+1);
        } else {
            temp[idx++] = arr[a++];
        }
    }
    while(a<=md) {
        temp[idx++] = arr[a++];
    }
    while(b<=j) {
        temp[idx++] = arr[b++];
    }
    
    for(int x=0,z=i;z<=j;){
        arr[z++] = temp[x++];
    }
}

void mergeSort(long long arr[], int i, int j, long long &ans){
    if(i<j){
        int md = (i+j)/2;
        
        mergeSort(arr, i, md, ans);
        mergeSort(arr, md+1, j, ans);
        
        merge(arr, i, md, j, ans);
    }
}

long long getInversions(long long *arr, int n){
    // Write your code here.
    long long ans = 0;
    
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i] = arr[i];
    }
    
    mergeSort(arr, 0, n-1, ans);
    return ans;
}