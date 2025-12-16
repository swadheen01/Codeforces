/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Jun 22 2025 10:37:17 PM
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
    ll n,k;cin>>n>>k;
    vector<ll>pos,neg;
    for(ll i=0; i<n; i++)
    {
        ll e; cin>>e;
        if(e>=0) pos.pb(e);
        else neg.pb(abs(e));
    }
    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end());

    ll total = 0;
    for (ll i = pos.size() - 1; i >= 0; i -= k) {
        //cout<<pos[i]<<" ";
        total += 2 * pos[i];
    }
    for (ll i = neg.size() - 1; i >= 0; i -= k) {
        total += 2 * neg[i];
        //cout<<neg[i]<<" ";
    }

    ll mx = 0;
    if (!pos.empty()) mx = max(mx, pos.back());
    if (!neg.empty()) mx = max(mx, neg.back());

    total -= mx;
    cout<<total<<endl;
    //debug
    // for(auto e:pos) cout<<e<<" "; cout<<endl;
    // for(auto e:neg) cout<<e<<" ";cout<<endl;

    // ll mx=-1;
    // // ll mn = 1e18;
    // if(pos.size()>0) mx = max(mx,pos[0]);
    // if(neg.size()>0) mx = max(mx, neg[0]);

    // //cout<<mx<<endl;

    // ll ans = 0;
    // ll ind = 1;
    
    // if(pos.size()>0)
    // {
    //     ll x = 0;
    //     if(neg.size()>0 && pos[0]>=neg[0] && pos.size()>=k) x = 2;
    //     for(ll i=x; i<pos.size(); i++)
    //     {
    //         if(ind ==1)
    //         {
    //             ans += pos[i];
    //             //cout<<ans<<endl;
    //         }
    //         else{
    //             //cout<<pos[i]<<" Hi"<<endl;
    //             ans += abs(pos[i]-pos[i-1]);
    //             //cout<<ans<<endl;
    //         }
    //         if(ind==k || i==pos.size()-1)
    //         {
    //             ans += pos[i];
    //             //cout<<ans<<endl;
    //         }
    //         if(ind==k) ind = 1;
    //         else ind++;
            
    //     }
    // }
    // //cout<<ans<<endl;
    
    // ind = 1;
    // if(neg.size()>0)
    // {
    //     ll x = 0;
    //     if(pos.size()>0 && neg[0]>pos[0] && neg.size()>=k) x = 2;
    //     for(ll i=x; i<neg.size(); i++)
    //     {
    //         if(ind ==1)
    //         {
    //             ans += neg[i];
    //             //cout<<ans<<endl;
    //         }
    //         else{
    //             //cout<<neg[i]<<" Hi"<<endl;
    //             ans += abs(neg[i]-neg[i-1]);
    //             //cout<<ans<<endl;
    //         }
    //         if(ind==k|| i==neg.size()-1)
    //         {
    //             ans += neg[i];
    //             //cout<<ans<<endl;
    //         }
    //         if(ind==k) ind = 1;
    //         else ind++;
            
    //     }

    // }
    
    // ans -= mx;

    // cout<<ans<<endl;


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
