#include <bits/stdc++.h> 
void rev(vector<int> &arr, int i, int j){
    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
vector<int> nextPermutation(vector<int> &arr, int n)
{
    //  Write your code here.
    int idx = -1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            idx = i;
            break;
        }
    }
    if(idx!=-1){
        int rIdx = -1;
        for(int i = n-1;i>=0;i--){
            if(arr[i]>arr[idx]){
                rIdx = i;
                break;
            }
        }
        swap(arr[rIdx], arr[idx]);
        rev(arr, idx+1, n-1);
        return arr;
    }
    
    sort(arr.begin(), arr.end());
    
    return arr;
}