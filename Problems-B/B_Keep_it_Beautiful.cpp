/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Dec 23 2024 11:12:48 PM
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
    
    

}

int main() {
    ALLAHU_AKBAR

    ll t;
    cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll>v;
        ll sz = 0;
        for(ll i=0; i<n; i++)
        {
            ll x; cin>>x;
            ll nw = sz + (!v.empty() && v.back()>x);
            if(nw==0 || (nw==1 && x<=v.front())){
                v.pb(x);
                sz = nw;
                cout<<'1';
            }
            else cout<<'0';
        }
        
        cout<<endl;
    }
    return 0;
}
