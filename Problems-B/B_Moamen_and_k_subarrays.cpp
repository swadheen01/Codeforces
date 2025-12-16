/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Oct 12 2024 11:39:33 PM
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
    ll n,k; cin>>n>>k;
    vector<ll>vec(n);
    for(ll i=0;i<n; i++){
        cin>>vec[i];
        //vec2[i] = vec[i];
    }
    //srt(vec2);
    //vector<vector<ll>>vec2;

    vector<pair<int, int>> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i].first;
			v[i].second = i;
		}
		sort(v.begin(), v.end());
		int ans = 1;
		for (int i = 1; i < n; i++)
			if (v[i - 1].second + 1 != v[i].second)
				ans++;
		cout << (ans <= k ? "YES" : "NO") << endl;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    unordered_map<ll, ll> mp;
    
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b.begin(), b.end());
    for (ll i = 0; i < n; ++i) {
        mp[b[i]] = i;
    }

    ll blk = 1;
    for (ll i = 1; i < n; ++i) {
        if (mp[a[i]] != mp[a[i - 1]] + 1) {
            blk++;
        }
    }

    if (blk <= k) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        //sir();
        solve();
    }
    return 0;
}
