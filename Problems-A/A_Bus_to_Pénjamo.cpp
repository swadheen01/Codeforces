/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Oct 14 2024 1:40:39 AM
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
    ll n,r; cin>>n>>r;
    vector<ll>v(n);
    ll tot = 0;
    for(ll i=0; i<n; i++) {cin>>v[i]; tot+=v[i];}
    ll ans = 0;
    rsrt(v);
    for(ll i=0; i<n; i++)
    {
        if(v[i]>1){
            ans += (v[i]-(v[i]%2)); 
            r -= (v[i]/2);
            v[i]%=2;
            if(r<=0) break;
        }
    }
    ll rem = tot - ans;
    //cout<<rem<<" "<<r;
    if(rem<=r) ans += rem;
    else{
        while(rem>r)
        {
            rem-=2; r--;
        }
        ans += rem;
    }
    // for(ll i=0; i<n; i++)
    // {
    //     if(v[i]>0 && r>0){
    //         ans++;
    //         r--;
    //     }
    //     if(r<=0) break;
    // }
    // int sit = 2 * r;
    // int ans = 0;
    // int use = 0;
    
    // for (int i = 0; i < n && use < sit; ++i) {
    //     while (v[i] >= 2 && use + 2 <= sit) {
    //         ans += 2;
    //         v[i] -= 2;
    //         use += 2;
    //     }
    //     if (v[i] == 1 && use + 1 <= sit) {
    //         ans += 1;
    //         use += 1;
    //     }
    // }
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
