#include <bits/stdc++.h>
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long ans = 0;
    long long sm = 0;
    
    for(int i=0;i<n;i++){
        if(sm+arr[i]>0){
            sm += arr[i];
            ans = max(ans, sm);
        } else {
            sm = 0;
        }
    }
    
    return ans;
    
}