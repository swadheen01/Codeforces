/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Sep 23 2024 3:39:09 AM
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

void sir2()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1);

    for (ll i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    ll cnt = 0;

    for (ll i = 1; i <= n; ++i) {
        for (ll j = a[i] - (i % a[i]); j <= n; j += a[i]) {
            if (j > i && a[i] * a[j] == i + j) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}

void sir()
{
    ll n;cin>>n; 
    vector<pair<ll,ll>>v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i].first;
        v[i].second=i+1;
    }
    srt(v);
    int cnt=0;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(v[i].first*v[j].first>2*n) break;
            if(v[i].first*v[j].first==v[i].second+v[j].second) cnt++;
        }
    }
    cout<<cnt<<endl;
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        //sir();
        sir2();
    }
    return 0;
}
