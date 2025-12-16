/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Dec 15 2024 8:43:06 PM
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
    ll m, a,b,c; cin>>m>>a>>b>>c;
    ll ans = 0;
    ll n = m;
    if(a<=m){
        ans+=a;
        m-=a;
    }
    else{
        ans+=m;
        m=0;
    }
    m+=n;
    if(b<=n)
    {
        ans+=b;
        m-=b;
    }
    else{
        ans+=n;
        m-=n;
    }
    ans+=min(c,m);
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
