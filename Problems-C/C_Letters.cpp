/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Feb 07 2025 3:13:45 AM
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
    ll n, m;
    cin >> n >> m;

    vector<ll> a(n);
    vector<ll> b(m);

    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (ll i = 0; i < m; ++i) {
        cin >> b[i];
    }

    vector<ll> cumulative_rooms(n);
    cumulative_rooms[0] = a[0];
    for (ll i = 1; i < n; ++i) {
        cumulative_rooms[i] = cumulative_rooms[i - 1] + a[i];
    }

    ll current_dormitory = 0;
    for (ll i = 0; i < m; ++i) {
        while (b[i] > cumulative_rooms[current_dormitory]) {
            ++current_dormitory;
        }

        ll room_number = b[i] - (current_dormitory == 0 ? 0 : cumulative_rooms[current_dormitory - 1]);

        cout << current_dormitory + 1 << " " << room_number << endl;
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
