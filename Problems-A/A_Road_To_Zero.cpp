/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Aug 29 2024 11:52:57 PM
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
    ll x,y,a,b; cin>>x>>y;
    cin>>a>>b;
    
    if(x==0 && y==0) cout<<0<<endl;
    
    else{
        ll ans=0;
        ll ans2 = (x+y) * a;
        //cout<<ans2<<endl;
        // if(x<y)
        // {
        //     ans += max(x,(y-x))* min(a,b);
        //     ans += min(x,(y-x)) * max(a,b);
        //     cout<<ans<<endl;
        //     cout<<min(ans2,ans)<<endl;
        // }
        // else{
        //     ans += max(y,(x-y))*min(a,b);
        //     ans += min(y,(x-y)) * max(a,b);
        //     cout<<ans<<endl;
        //     cout<<min(ans2,ans)<<endl;
        // }
        ans += min(x,y)*b;
        ans += (max(x,y) - min(x,y))*a;
        cout<<min(ans,ans2)<<endl;
        
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
