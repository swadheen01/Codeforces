#include <bits/stdc++.h>

using namespace std;

bool sir(const vector<long long>& a) {
    long long n = a.size();
    vector<long long> sorted_a = a;
    
    sort(sorted_a.begin(), sorted_a.end());
    
    int one = sorted_a[0];
    int two = -1;
    for (int i = 1; i < n; ++i) {
        if (sorted_a[i] != one && sorted_a[i]%one != 0) {
            two = sorted_a[i];
            break;
        }
    }

    
    if (two == -1) {
        return true;
    }

    // for (long long i = 0; i < n; ++i)
    // {
    //     cout<<sorted_a[i]<<" ";
    // }
    
    for (long long i = 0; i < n; ++i) {
        if (a[i] % one != 0 && a[i] % two != 0) {
            //cout<<a[i]<<endl;
            //cout<<one<<" "<<two<<endl;
            return false;
        }
    }
    return true;
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; ++i) {
            cin >> a[i];
        }
        if (sir(a)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
