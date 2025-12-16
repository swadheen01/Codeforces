/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Dec 15 2024 9:36:20 PM
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

bool isPower(int x, int y)
{
    float res1 = log(y) / log(x);
    return res1==floor(res1);
}
// int main()
// {
//     cout << isPower(2, 128) << endl;
//     return 0;
// }

void sir()
{
    ll k,l,r,l2,r2; cin>>k>>l>>r>>l2>>r2;
    // vector<ll>k_p;
    // ll x = 1;
    // while(x<=max(r2,r))
    // {
    //     k_p.pb(x);
    //     x = x*k;
    // }
    // ll c = 0;
    // //for(auto &s:k_p) cout<<s<<" ";
    // x = 0;
    // //cout<<l<<" "<<r<<" "<<l2<<" "<<r2<< endl;
    // // cout<<k_p[]<<endl;

    ll powr = 1, ans = 0, xl, xr;
    while(powr<=r2)
    {
        xl = max(l, (l2+powr-1)/powr);
        xr = min(r, r2/powr);
        if(xl<=xr) ans += (xr-xl+1);
        powr*=k;
    }
    
    
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
