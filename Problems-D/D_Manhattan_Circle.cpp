/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Jun 11 2024 11:37:14 PM
 */
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void sir()
{
    ll n,m; cin>>n>>m;
    char arr[n][m];
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    ll mxx = -1, minx=n, miny=m, mxy = -1;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            if(arr[i][j]=='#')
            {
                mxx = max(mxx,i);
                minx = min(minx,i);

                mxy = max(mxy, j);
                miny = min(miny, j);
            }
        }

    }
    cout<<(mxx+minx)/2 + 1 <<" "<<(mxy+miny)/2 + 1<<endl;
}

int main()
{
    ll t; cin>>t; while(t--) sir();
}