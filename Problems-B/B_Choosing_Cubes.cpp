#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n, f, k;
        cin >> n >> f >> k;
        ll arr[n];
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        ll fn = arr[f - 1];
        ll fc = 0;

        sort(arr, arr + n, greater<int>());  
        vector<int> p;
        for (ll i = 0; i < n; i++) {
            if (arr[i] == fn) {
                fc++;
                p.push_back(i);
            }
        }

        
        sort(p.begin(), p.end());

        size_t x = p.size();
        if (fc > 1 && k <= p[x - 1]) {
            cout << "MAYBE" << endl;
        } else if (fc == 1 && k > p[0]) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
