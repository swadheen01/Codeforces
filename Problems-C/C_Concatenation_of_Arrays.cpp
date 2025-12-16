/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Oct 20 2024 4:02:06 PM
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

bool comp(const vector<ll>& a, const vector<ll>& b) {
    return a[0] < b[0];
}

void sir() {
    ll n;
    cin >> n;
    vector<vector<ll>> pair(n, vector<ll>(2));

    vector<ll> val(2 * n);

    for (int i = 0; i < n; i++) {
        ll a1, a2;
        cin >> a1 >> a2;
        pair[i][0] = a1;
        pair[i][1] = a2;
        val[2 * i] = a1;
        val[2 * i + 1] = a2;
    }

    sort(val.begin(), val.end());
    map<ll, ll> mp;
    ll ind = 1;
    for (ll i = 0; i < n * 2; i++) {
        if (mp.find(val[i]) == mp.end()) {
            mp[val[i]] = ind++;
        }
    }

    vector<vector<ll>> com(n, vector<ll>(2));
    for (ll i = 0; i < n; i++) {
        com[i][0] = mp[pair[i][0]];
        com[i][1] = mp[pair[i][1]];
    }

    vector<vector<ll>> ans(n, vector<ll>(3));
    for (ll i = 0; i < n; i++) {
        ll sum = com[i][0] + com[i][1];
        ans[i] = {sum, pair[i][0], pair[i][1]};
    }

    sort(ans.begin(), ans.end(), comp);
    for (ll i = 0; i < n; i++) {
        cout << ans[i][1] << " " << ans[i][2] << " ";
    }
    cout << "\n";
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin >> t;
    while (t--) {
        sir();
    }
    return 0;
}
