/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Jun 28 2024 9:44:52 PM
 */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if(n%2==0) cout<<n/2<<endl;
        else cout<<(n+1)/2<<endl;
    }
    return 0;
}