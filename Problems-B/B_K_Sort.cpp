/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jul 08 2024 10:35:19 PM
 */
#include<bits/stdc++.h>
using namespace std;

void sir()
{
    int n; cin>>n; int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // int flag = 0;
    // for(int i=0; i<n-1; ++i)
    // {
    //     if(arr[i+1]<arr[i]){
    //         flag = 1;
    //         ans += (arr[i]-arr[i+1]);
    //         arr[i+1] += arr[i];
    //     }
    // }
    // if(flag==0) cout<<0<<endl;
    // else{
    //     cout<< ans+1 <<endl;
    // }
    long long ans = 0;
    int extra = 0;
    int boro = 0;
    for(int i=0;i<n; i++)
    {
        boro = max(boro,arr[i]);
        ans += boro-arr[i];
        extra = max(extra, boro-arr[i]);
        
    }
    cout<<ans+extra<<endl;
}

int main(){
    int t; cin>>t; while(t--){
        sir();
    }
    return 0;

}