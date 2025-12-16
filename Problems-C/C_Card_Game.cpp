/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Apr 28 2025 9:34:11 PM
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
    ll n; cin>>n; string s; cin>>s;
    if(s[0]==s[n-1])
    {
        if(s[0]=='A'){
            cout<<"Alice"<<endl;
            return;
        }
    }
    vector<ll>a,b;
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='A') a.pb(i+1);
        else b.pb(i+1);
    }
    ll cnt = 0;
    bool al = false;
    for(ll i=0; i<a.size(); i++)
    {
        bool ok = true;
        for(ll j=0; j<b.size();j++)
        {
            if(b[j]==1 && a[i]==n)
            {
                ok = false; break;
            }
            else if(a[i]<b[j] && !(a[i]==1 && b[j]==n))
            {
                ok = false; break;
            }
            
        }
        if(ok)
        {
            al = true;
            break;
        }
    }
    if(al)
    {
        cout<<"Alice"<<endl;
        return;
    }
    cout<<"Bob"<<endl;
    
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
