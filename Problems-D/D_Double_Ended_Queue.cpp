/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Dec 14 2024 8:38:18 PM
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

void sir() {
    ll t;
    cin >> t;
    for (ll c = 1; c <= t; ++c) {
        ll n, m;
        cin >> n >> m;
        deque<ll> dq;

        cout << "Case " << c << ":\n";
        for (ll i = 0; i < m; ++i) {
            string cmd;
            cin >> cmd;

            if (cmd == "pushLeft") {
                ll x;
                cin >> x;
                if (dq.size() < n) {
                    dq.push_front(x);
                    cout << "Pushed in left: " << x << "\n";
                } else {
                    cout << "The queue is full\n";
                }
            } else if (cmd == "pushRight") {
                ll x;
                cin >> x;
                if (dq.size() < n) {
                    dq.push_back(x);
                    cout << "Pushed in right: " << x << "\n";
                } else {
                    cout << "The queue is full\n";
                }
            }
            else if (cmd == "popLeft") {
                if (!dq.empty()) {
                    ll x = dq.front();
                    dq.pop_front();
                    cout << "Popped from left: " << x << "\n";
                } else {
                    cout << "The queue is empty\n";
                }
            } else if (cmd == "popRight") {
                if (!dq.empty()) {
                    ll x = dq.back();
                    dq.pop_back();
                    cout << "Popped from right: " << x << "\n";
                } else {
                    cout << "The queue is empty\n";
                }
            }
        }
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

