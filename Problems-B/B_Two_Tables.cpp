/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Apr 15 2025 7:25:43 PM
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
    ll w,h; cin>>w>>h;
    ll x,y,xx,yy; cin>>x>>y>>xx>>yy;
    ll a,b; cin>>a>>b;
    ll lgap = y, higap = h-yy;
    ll rgap = w-xx, lfgap = x;
    if(b<=lgap || b<=higap || a<=rgap || a<=lfgap)
    {
        ld ans = 0;
        cout<<fixed<<setprecision(9)<<ans<<endl;
        return;
    }
    ld ans = 1e9;
    bool got = false;
    if(b>lgap)
    {
        ld dif = b-lgap;
        
        if((yy+dif)<=h) {ans = min(ans,dif); got = true;}

    }
    if(b>higap)
    {
        ld dif = b-higap;
        
        if((y-dif)>=0) {ans = min(ans,dif); got = true;}
    }
    if(a>lfgap)
    {
        ld dif = a-lfgap;
        
        if((xx+dif)<=w)
        {
            {ans = min(ans,dif); got = true;}
        }
    }
    if(a>rgap)
    {
        ld dif = a-rgap;
        //cout<<x-dif<<" "<<w<<endl;
        if((x-dif)>=0)
        {
            {ans = min(ans,dif); got = true;}
        }
    }
    //cout<<lgap<<" "<<higap<<" "<<lfgap<<" "<<rgap<<endl;
    if(got) cout<<fixed<<setprecision(9)<<ans<<endl;
    else cout<<-1<<endl;
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
