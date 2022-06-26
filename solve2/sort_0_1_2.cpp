#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int a = 0, b = n-1;
    int i=0;
    while(i<=b){
        if(arr[i]==0){
            swap(arr[i], arr[a]);
            i++;
            a++;
        } else if(arr[i]==1){
            i++;
        } else {
            swap(arr[i], arr[b]);
            b--;
        }
    }
}