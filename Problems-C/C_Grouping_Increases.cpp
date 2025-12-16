/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Aug 17 2025 10:51:13 PM
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
    ll n;cin>>n;
    vector<ll>v(n); for(auto &e:v) cin>>e;

    vector<ll>a, b; 
    ll x = 1e9, y = 1e9;
    ll ans = 0;

    for(ll i=0; i<n; i++)
    {
        ll ai = v[i];
        
        if(x>y)
        {
            swap(x, y);
        }

        if(ai<=x) x = ai;

        else if(ai>y){
            ans++;
            x = ai;
        }
        else y = ai;
    }
    
    cout<<ans<<endl;
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
