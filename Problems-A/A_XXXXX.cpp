/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon May 05 2025 11:45:10 PM
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
    ll n,x; cin>>n>>x;
    vector<ll>v(n);
    ll sum = 0;
    ll l = -1, h;
    for(ll i=0;i<n; i++)
    {
        cin>>v[i];
        sum += v[i];
        if(v[i]%x)
        {
            if(l==-1) l= i;
            h = i;
        }
    }
    ll cnt = n;
    if(sum%x)
    {
        cout<<n<<endl;
        return;
    }
    if(l==-1)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<n-min(l+1, n-h)<<endl;
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
