/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jun 03 2024 8:02:02 PM
 */
#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {

        int counts[7]= {0};
        ll n,m; cin>>n>>m;
        string s; cin>>s;
        for (char c : s) {
            counts[c - 'A']++;
        }
        int c = 0;
        for (int i = 0; i < 7; i++) {
            if (counts[i] < m) {
                c += (m - counts[i]);
            }
        }
        cout<<c<<endl;
    
    }
    return 0;
}