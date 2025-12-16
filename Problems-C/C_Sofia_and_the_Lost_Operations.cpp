/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jun 03 2024 8:02:02 PM
 */
#include<bits/stdc++.h>
using namespace std;
using ll = long long ;


void sir() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> b(n);
    set<int> barr;

    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        barr.insert(b[i]);
    }
    map<int, int> req;

    for (int i = 0; i < n; ++i) {
        if (a[i] != b[i]) {
            req[b[i]]++;
        }
    }

    int m;
    cin >> m;
    bool done = false;
    for (int i = 0; i < m; ++i) {
    int x;
    cin >> x;
    if (req.find(x) != req.end()) {
        req[x]--;
        if (req[x] == 0) 
        {
            req.erase(x);
        }
        if (i == m - 1) {
            done = true;
            //if (req[x] == 0) {
            //req.erase(x);
        //}
        }
    } else if (barr.count(x)>=1) {
        if (i == m - 1) {
            done = true;
        }
    }
}


    if (done && req.empty()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        sir();
    }
    return 0;
}
