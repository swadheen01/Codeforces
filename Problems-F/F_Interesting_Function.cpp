/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jul 28 2025 11:13:39 PM
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
    ll l,r; cin>>l>>r;

    ll ans = 0;

    while(l>0 || r>0)
    {
        ans += (r-l);
        l/=10;
        r/=10;
    }
    cout<<ans<<endl;
}

void sir2()
{
    ll l,r; cin>>l>>r;
    string a = to_string(l);
    string b = to_string(r);

    if((a.length()==b.length() && a[0]==b[0])|| (a.length()==1 && b.length()==1))
    {
        cout<<r-l<<endl;
        return;
    }
    if(a[0]==b[0])
    {
        ll d = b.length()-a.length();
        ll ans = r-l+1;
        ll x = 10;
        d--;
        while(d--)
        {
            ans+=x;
            x*=10;
        }
        cout<<ans<<endl;
        return;
    }
    if(a[0]<b[0])
    {
        ll d = b.length()-a.length();
        ll ans = r-l+1;;
        ll x = 10;
        while(d--)
        {
            ans+=x;
            x*=10;
        }
        cout<<ans<<endl;
    }
    else
    {
        
        ll ans = r-l+1;
        // ll x = 10;
        // while(d--)
        // {
        //     ans+=x;
        //     x*=10;
        // }
        cout<<ans<<endl;
        return;
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
