/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Jul 11 2024 12:42:28 AM
 */
#include<bits/stdc++.h>
using namespace std;

void sir()
{
    int n,k; cin>>n>>k;
    string s; cin>>s;
    map<char,int>cont;
    if(n==2 && k==1) cout<<1<<endl;
    else{
        int ans = 0;
        for(int i=0; i<n;)
        {
            char c=s[i];
            int count = 0;
            while(i<n && s[i]==c)
            {
                count++;
                i++;
            }
            cont[c] += count/k;
            ans = max(ans,cont[c]);
        }
        cout<<ans<<endl;
    }
}
int main()
{
    int t;
    t=1;
    while(t--)
    {
        sir();
    }
}