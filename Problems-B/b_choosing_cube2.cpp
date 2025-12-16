#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int fav = a[f - 1];
        sort(a.rbegin(), a.rend());
        
        int fc = count(a.begin(), a.end(), fav);
        int rem_c = count(a.begin(), a.begin() + k, fav);
        
        if (rem_c == fc) {
            cout << "YES" << endl;
        } else if (rem_c == 0) {
            cout << "NO" << endl;
        } else {
            cout << "MAYBE" << endl;
        }
    }
    
    return 0;
}
