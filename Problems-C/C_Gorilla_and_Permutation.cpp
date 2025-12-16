/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Jul 11 2024 8:59:30 PM
 */
#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

void sir() {
    
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> perm(n);
    
    
    for (int i = 0; i < n - m; ++i) {
        perm[i] = n - i;
    }
    
    for (int i = n - m; i < n; ++i) {
        perm[i] = i - (n - m) + 1;
    }
    
    for (int i = 0; i < n; ++i) {
        cout << perm[i] << " ";
    }
    cout << "\n";
    
}

int main() {
    int t; cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
