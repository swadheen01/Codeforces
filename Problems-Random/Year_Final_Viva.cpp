/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Aug 03 2025 10:12:27 PM
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
    ll n,m; cin>>n>>m; 

    set<string>st;
    while(m--){
        string s; cin>>s;
        st.insert(s);
    }
    for(ll i=0; i<(1<<n); i++)
    {
        string f = "";
        for(ll j = 0; j<n; j++)
        {
            if(i&(1<<j)) f.pb('1');
            else f.pb('0');
        }
        if(st.find(f)==st.end())
        {
            cout<<f<<endl;
            return;
        }
    }
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
