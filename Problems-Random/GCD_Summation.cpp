/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed May 07 2025 8:36:22 PM
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

int main() {
    ll T;
    cin >> T;
    while (T--) {
        ll N, K;
        cin >> N >> K;

        if (K == N - 1) {
            for (ll i = 1; i <= N; i++) {
                cout << i << " ";
            }
            cout << endl;
        } 
        else if (K < N - 1) {
            cout << -1 << endl;
        }else {
            ll d = K - (N - 2);
            vector<ll> ans;
            ans.pb(2 * d);
            ans.pb(3 * d);
            
            ll z = 3 * d + 1 + (N - 2);
            for (ll i = 3 * d + 1; i < z; i++) {
                ans.pb(i);
            }

            for (ll i = 0; i < N; i++) {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
