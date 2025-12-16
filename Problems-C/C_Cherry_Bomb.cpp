/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Apr 24 2025 9:08:08 PM
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
    ll n,x; cin>>n>>x;
    vector<ll>v(n), b(n);
    set<ll>main;
    for(auto &e:v) cin>>e, main.insert(e);
    for(auto &e:b) cin>>e;
    ll cnt = 0;
    for(auto &e:b) cnt +=(e==-1);

    ll lo = 0, hi = 1e18;
    if(cnt==n)
    {
        for (int i = 0; i < n; i++) {
            lo = max(lo, v[i]);
            hi = min(hi, v[i] + x);
        }
        cout << max(0LL, hi-lo + 1) << endl;
        return;
    }
    set<ll>st;
    ll sum;
    for(ll i=0;i<n; i++)
    {
        if(b[i]>=0)
        {
            ll chk = v[i] + b[i];
            sum = chk;
            st.insert(chk);
        }
    }
    if(st.size()>1)
    {
        cout<<0<<endl;
        return;
    }
    //cout<<"set"<<st.size()<<endl;
    for(ll i=0;i<n; i++)
    {
        if(b[i] == -1 && (sum < v[i] || sum > v[i] + x)) 
        {
                cout<<0<<endl;
                return;
        }
    }
    
    cout<<1<<endl;
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
