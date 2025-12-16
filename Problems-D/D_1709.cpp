/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Jul 22 2025 3:43:03 AM
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
    ll n; cin>>n;
    vector<ll>a(n), b(n);
    for(auto &e:a) cin>>e;
    for(auto &e:b) cin>>e;
    vector<ll>one, two, three;
    for(ll i=0; i<n; i++)
    {
        for(ll j=1; j<n; j++)
        {
            if(a[j]<a[j-1])
            {
                swap(a[j-1], a[j]);
                one.pb(j-1+1);
            }
        }
    }
    for(ll i=0; i<n; i++)
    {
        for(ll j=1; j<n; j++)
        {
            if(b[j]<b[j-1])
            {
                swap(b[j-1], b[j]);
                two.pb(j-1+1);
            }
        }
    }
    for(ll i=0; i<n; i++)
    {
        if(b[i]<a[i])
        {
            swap(a[i], b[i]);
            three.pb(i+1);
        }
    }
    cout<<(one.size()+two.size()+three.size())<<endl;
    for(auto &e:one) cout<<1<<" "<<e<<endl;
    for(auto &e:two) cout<<2<<" "<<e<<endl;
    for(auto &e:three) cout<<3<<" "<<e<<endl;
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
