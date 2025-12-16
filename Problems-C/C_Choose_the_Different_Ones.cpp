/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Dec 28 2024 8:52:37 PM
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
    ll n, m, k; cin >> n >> m >> k;
    vector<ll>a(n), b(m);
    map<ll,ll>mp1,mp2;
    for(auto& x : a) {
      cin >> x;
      if(x <= k) mp1[x]++;
    }
    for(auto& x : b) {
      cin >> x;
      if(x <= k) mp2[x]++;
    }
    bool f = false;
    f |= ((mp1.size() < k / 2) || (mp2.size() < k / 2));
    for (ll i=1; i <= k && !f; i++)
      f |= (mp1[i] + mp2[i] == 0);
      
    cout << (f ? "NO" : "YES") << '\n';
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
