/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jul 14 2025 8:45:49 PM
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

ll mx(map<char,ll>&mp)
{
    ll m = 0; ll x;
    for(auto &[a,b]:mp)
    {
        if(b>m) m = b;
    }
    return m;
}

void sir()
{
    // Bismillahir Rahmanir Rahim 

    string s; cin>>s;
    ll n = s.length();

    map<char,ll>mp;

    for(auto &c:s)mp[c]++;
    
    ll hi = mx(mp);
    ll rem = n-hi;
    if(hi-rem>1)
    {
        cout<<-1<<endl;
        return;
    }
    ll use = n;
    string ans = "";

    for(ll i=1; i<=n; i++)
    {
        ll c_mx = mx(mp);
        ll baki = use - c_mx;
        if(c_mx>baki)
        {
            for(char c = 'a'; c<='z'; c++)
            {
                if(mp[c]==c_mx) 
                {
                    ans += c;
                    mp[c]--;
                    break;
                }
            }
        }
        else{
            for(char c='a'; c<='z'; c++)
            {
                if(mp[c] && ans[ans.length()-1] !=c)
                {
                    ans += c;
                    mp[c]--;
                    break;
                }
            }
        }
        use--;
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
