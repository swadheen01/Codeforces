/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue May 20 2025 2:25:13 AM
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
    string s; cin>>s;
    ll n = s.length();
    set<char>st;
    for(auto &c:s) st.insert(c);
    if(st.size()==n || n==1)
    {
        cout<<0<<endl;
        return;
    }
    ll ans =0;
    vector<bool>mark(n,false);
    for(ll i=1; i<n; i++)
    {
        bool ok = false;
        if(s[i]==s[i-1] && (!mark[i-1]))
        {
            ok = true;
        }
        if(i>1 && s[i]==s[i-2] && !mark[i-2])
        {
            ok = true;
        }
        mark[i] = ok; ans += ok;
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
