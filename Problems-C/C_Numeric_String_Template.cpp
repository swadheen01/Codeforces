/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Nov 26 2024 11:40:43 PM
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
    vector<ll>a(n);
    for(auto &e:a) cin>>e;
    ll m; cin>>m;
    while(m--)
    {
        string s; cin>>s;
        if(s.length() != n)
        {
            cout<<"NO"<<endl;
            continue;
        }
        map<int,char>mp;
        map<char,int>rev;
        bool bad = false;
        for(ll i=0; i<n; i++)
        {
            if(mp.find(a[i]) != mp.end() && mp[a[i]]!= s[i] || (rev.find(s[i]) != rev.end() && rev[s[i]] != a[i]))
            {
                bad = true;
            }
            else{
                mp[a[i]] = s[i];
                rev[s[i]] = a[i];
            }
        }
        if(bad) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

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
