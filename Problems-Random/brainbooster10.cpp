/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Jun 13 2025 10:00:26 PM
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

bool ok(const vector<ll>& a, const vector<ll>& b, ll n) {
    for (ll i=1;i<n-1;++i)
        if (!(a[i]>b[i-1]&&a[i]>b[i+1])&&!(b[i]>a[i-1]&&b[i]>a[i+1]))
            return false;
    return true;
}

void sir33() {
    ll n;
    cin >> n;
    vector<ll> a(n), b(n), x(n), y(n);
    for (ll i=0;i<n;++i) cin >> a[i];
    for (ll i=0;i<n;++i) cin >> b[i];
    srt(a); srt(b);

    for (ll i=0;i<n;++i) {
        if (i%2==0) x[i]=a[i], y[i]=b[n-1-i];
        else x[i]=a[n-1-i], y[i]=b[i];
    }

    if (ok(x,y,n)) {
        cout << "Yes" << endl;
        return;
    }

    for (ll i=0;i<n;++i) {
        if (i%2==0) x[i]=b[i], y[i]=a[n-1-i];
        else x[i]=b[n-1-i], y[i]=a[i];
    }

    cout << (ok(x,y,n) ? "Yes\n" : "No\n");
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t; cin >> t;
    while (t--) sir33();
}
