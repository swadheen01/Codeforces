/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Jul 06 2025 8:37:54 PM
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
    // Bismillahir Rahmanir Rahim 

    ll n; cin>>n;
    vector<ll>v(n);
    for(auto &e:v) cin>>e;
    vector<ll>vv= v;
    srt(vv);
    bool ok = true;
    for(ll i=0; i<n; i++)
    {
        if(v[i]==vv[i]) ok = false;
    }
    if(ok)
    {
        yes;
        cout<<n<<endl;
        for(auto &e:v) cout<<e<<" ";cout<<endl;
        return;
    }
    ll mx = v[0];
    for(ll i=1;i<n; i++)
    {
        if(v[i]<mx)
        {
            yes;
            cout<<2<<endl;
            cout<<mx<<" "<<v[i]<<endl;
            return;
        }
        else{
            mx = max(mx, v[i]);
        }
    }
    no;
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
