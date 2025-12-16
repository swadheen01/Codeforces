/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Dec 08 2024 8:39:03 PM
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
    ll n,k; cin>>n>>k;
    vector<ll>v(n);
    for(auto &a:v) cin>>a;
    //srt(v);
    ll c = 1;
    ll ans;
    for(ll i=0; i<n;i++)
    {
        for(ll j = 0; j<n; j++)
        {
            if(i==j) continue;
            else if(abs(v[i]-v[j])%k!=0){
                c++;
            }
        }
        if(c==n){
            cout<<"YES\n";
            cout<<i+1<<endl;
            return;
        }
        else c = 1;
    }
    cout<<"NO\n";
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
