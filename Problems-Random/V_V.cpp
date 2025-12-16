#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);

vector<ll> sieve(ll n) {
    vector<bool> isp(n + 1, true);
    isp[0] = isp[1] = false;

    for (ll i = 2; i * i <= n; ++i) {
        if (isp[i]) {
            for (ll j = i * i; j <= n; j += i) {
                isp[j] = false;
            }
        }
    }

    vector<ll> pr;
    for (ll i = 2; i <= n; ++i) {
        if (isp[i]) pr.push_back(i);
    }
    return pr;
}

vector<ll> pr = sieve(1000);

map<ll, ll> factorize(ll n) {
    map<ll, ll> f;
    for (ll p : pr) {
        if (p > n) break;
        ll cnt = 0, x = p;
        while (x <= n) {
            cnt += n / x;
            x *= p;
        }
        f[p] = cnt;
    }
    return f;
}

void sir() {
    ll t;
    cin >> t;
    for (ll c = 1; c <= t; ++c) {
        ll n;
        cin >> n;

        map<ll, ll> f = factorize(n);

        cout << "Case " << c << ": " << n << " = ";
        bool first = true;
        for (auto &par : f) {
            ll p = par.first;
            ll cnt = par.second;
            if (!first) cout << " * ";
            cout << p << " (" << cnt << ")";
            first = false;
        }
        cout << endl;
    }
}

int main() {
    FAST
    sir();
    return 0;
}