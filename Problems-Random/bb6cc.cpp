/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Oct 04 2024 12:31:41 AM
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
    ll n; cin >> n;
    map<ll, ll> mp;
    for (ll i = 1; i <= n; ++i) {
        ll a; cin >> a;
        mp[a] = i;
    }

    ll q; cin >> q;
    while (q--) {
        ll x; cin >> x;
        auto it = mp.begin();
        ll min_a = it->first;
        ll min_pos = it->second;
        cout << min_pos << endl;
        mp.erase(it);
        mp[x] = min_pos;
    }

}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
