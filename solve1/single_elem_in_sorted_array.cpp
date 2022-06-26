int uniqueElement(vector<int> arr, int n)
{
	// Write your code here
    if(n==1) return arr[0];
    for(int i=0;i<n;i++){
        if(i==0) {
            if(arr[i]!=arr[i+1]) return arr[0];
        } else if(i==n-1){
            if(arr[i]!=arr[i-1]) return arr[n-1];
        } else {
            if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1]) return arr[i];
        }
    }
    return 0;
}
