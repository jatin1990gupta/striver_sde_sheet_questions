#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    int mss = -1;
    unordered_set<int> st;
    int sm = 0;
    for(int x: arr){
        if(st.find(x)!=st.end()){
            mss = x;
        }
        st.insert(x);
        sm += x;
    }
    
    int oSm = n*(n+1)/2;
    sm-=mss;
    return {oSm-sm, mss};
	
}
