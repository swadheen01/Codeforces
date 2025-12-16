/*
 *   Copyright (c) 2024 Swadheen Islam Robi
 *   All rights reserved.
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int ans = 0;

        ans += (max(a,b)>c && min(a,b)<c);
        ans += (max(a,b)>d && min(a,b)<d);

        if(ans == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}