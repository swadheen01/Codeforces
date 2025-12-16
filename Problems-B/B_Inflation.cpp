/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri May 02 2025 6:15:24 PM
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
    ld n,k; cin>>n>>k;
    vector<ld>v(n); for(auto &e:v) cin>>e;
    ll ans = 1e18;
    

    ll lo = 0, hi = 1e18, mid;
    while(lo<=hi)
    {
        mid = lo + (hi-lo)/2;

        ld sum = v[0]+mid;
        ll ok = 1;
        for(ll i=1; i<n; i++)
        {
            ld chk = v[i]/sum;
            if(chk<=(k/100))
            {
                sum += v[i];
                ok++;
            }
        }
        if(ok == n)
        {
            ans = min(ans, mid);
            hi = mid -1;
        }
        else lo = mid +1;
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
