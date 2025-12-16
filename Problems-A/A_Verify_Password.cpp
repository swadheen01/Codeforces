/*
 *   Copyright (c) 2024 
 *   All rights reserved.
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s; cin>>s;
        int flag = 1;
        for(int i=0; i<n-1;i++)
        {
            if((s[i]>='a' && s[i]<='z') && (s[i+1]>='0' && s[i+1]<='9'))  {flag = 0; break;}
            else if((s[i]>='a' && s[i]<='z') && s[i+1] >= s[i]) flag = 1;
            else if((s[i]>='0' && s[i]<='9') && (s[i+1] >= s[i])) flag = 1;
            else {flag = 0; break;}
        }
        if(flag == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}