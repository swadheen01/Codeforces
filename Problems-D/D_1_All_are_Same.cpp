/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Mar 11 2025 12:22:47 AM
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
    ll n;cin>>n;
    vector<ll>a(n);
    for(auto &e:a) cin>>e;
    sort(a.begin(), a.end());

    for(ll x=2e6+1; x>=1; x--)
    {
        bool ok = true;
        bool enter = false;
        for(ll i=1; i<n; i++)
        {
            if(a[i]-a[i-1]!=0)
            {
                ll chk = a[i]-a[i-1];
                enter = true;
    
                if(chk%x !=0) 
                {
                    ok = false;
                    
                    break;
                }
            }
        }
        if(ok && enter)
        {
            cout<<x<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    return;
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
