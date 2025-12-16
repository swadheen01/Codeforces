/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Mar 16 2025 5:49:41 AM
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

vector<string>po;
void calculate()
{
    for(ll i=0; i<=32; i++)
    {
        po.pb(to_string(1ll<<i));
    }
}
// ll LCS(string &s1, string &s2, ll i, ll j) {
//     if (i == 0 || j == 0) return 0;
//     if (s1[i - 1] == s2[j - 1]) return 1 + LCS(s1, s2, i - 1, j - 1);
//     return max(LCS(s1, s2, i - 1, j), LCS(s1, s2, i, j - 1));
// }

ll lcs(string p, string ss) {
    ll k = 0;
    ll common = 0;
    for(ll j=0; j<ss.length(); j++)
    {
        if((k<p.length() && p[k]==ss[j] ))
        {
            common++;
            k++;
        }
    }
    return common;
    
}

void sir()
{
    string s; cin>>s;

    ll ans = LLONG_MAX;
    for(ll i=0; i<=32; i++)
    {
        
        string pp = po[i];

        ll cnt = lcs(pp,s);
        //cout<<pp<<" ";
        //cout<<cnt<<endl;
        ll step = pp.length()+s.length()-(2*cnt);
        ans = min(ans,step);
    }
    cout<<ans<<endl;
    
}

int main() {
    ALLAHU_AKBAR

    calculate();
    ll t = 1;
    cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
