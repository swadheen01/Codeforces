/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Dec 30 2024 7:58:50 PM
 */

#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void sir() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans=INT32_MAX;
    int ec=0;
    for(auto &e: arr){
        if(e%k==0) ans=0;
        else{
            ans=min(ans,k-(e%k));
        }
        if(e%2==0) ec++;
    }
  if(k==4){
    int value=2-min(2,ec);
    ans=min(ans,value);
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        sir();
    }
return 0;
}