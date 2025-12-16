#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll cgcd(vector<ll>& diff) 
{
    ll ans = diff[0];
    for (size_t i = 1; i < diff.size(); ++i) {
        ans = __gcd(ans, diff[i]);
        if (ans == 1) {
            break;
        }
    }
    return ans;
}

int main() {

    int m, n;
    cin >> m >> n;
    vector<ll> vec(m);
    vector<ll> vec2(n);

    for (int i = 0; i < m; i++) {
        cin >> vec[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> vec2[i];
    }

    if (m == 1) {
        cout << "YES" << endl;
        cout << vec[0] << " " << 1 << endl;
        return 0;
    }
    vector<ll> diff(m - 1);
    for (int i = 1; i < m; i++) {
        diff[i - 1] = vec[i] - vec[i - 1];
    }
    ll og = cgcd(diff);

    for (int i = 0; i < n; i++) {
        if (og % vec2[i] == 0) {
            cout << "YES" << endl;
            cout << vec[0] << " " << i + 1 << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}
