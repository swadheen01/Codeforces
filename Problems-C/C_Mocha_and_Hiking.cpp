/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Feb 06 2025 11:33:56 PM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2*(acos(0.0))
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pb push_back
#define endl "\n"
#define lcm(a,b) (a*b)/(__gcd<ll>(a,b))
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

void sir()
{
    // int y
    ll n; cin>>n;
    vector<ll>a(n);
    ll c = 0;
    for(auto &e:a)
    {
        cin>>e;
        if(e==0) c++;
    }
    if(c==n)
    {
        for(ll i=1; i<=n+1; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    if(a[0]==1)
    {
        cout<<n+1<<" ";
        for(ll i=1; i<=n; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    ll ind = -1;
    for(ll i=0;i<n-1; i++)
    {
        if(a[i]==0 && a[i+1]==1)
        {
            ind = i+2;
            break;
        }
    }
    if(ind==-1)
    {
        cout<<-1<<endl;
        return;
    }
    for(ll i=1; i<=n; i++)
    {
        if(i==ind) 
        {
            cout<<n+1<<" ";
        }
        cout<<i<<" ";
    }
    cout<<endl;
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
