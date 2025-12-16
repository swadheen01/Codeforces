/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat May 17 2025 9:17:19 PM
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
ll cnt(ll x) {
    ll c = 0;
    while (x > 1) {
        x = (x + 1) / 2;
        c++;
    }
    return c;
}
void sir()
{
    // int y
    ll n,m, a, b; cin>>n>>m>>a>>b;
    ll ans = 1;
    // ll d1, d2; d1= max(a-1,n-a); d2= max(b-1, m-b);
    ll hi = min(a, n-a+1);
    ll lo = min(b,m-b+1);
    // ll p1 = d1/a, p2 = d2/b;
    // if(p1>p2) n-=d2; else m-=d1;
    //cout<<n<<" "<<m;cout<<endl;
    // while(m>1 || n>1)
    // {
    //     ans++;
    //     //if((m-n)==1 || (n-m)==1) m=(m+1)/2,n=(n+1)/2;
    //     if(n>m) 
    //     {
    //         if(a-1 >n-a)
    //     }
    //     else m=(m+1)/2;
    //     cout<<n<<" "<<m<<endl;
    // }
    
    // while(m>1) 
    // {
    //     m=m/2; ans++;
    // }
    // while(n>1)
    // {
    //     n=n/2; ans++;
    // }
    ll ans2 = ans + cnt(hi) + cnt(m);
    ll ans3 = ans + cnt(lo) + cnt(n);
    
    cout<<min(ans2,ans3)<<endl;
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
