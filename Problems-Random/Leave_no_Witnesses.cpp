#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& a, int n) {
    for(int x = 1; x <= n; x++) {
        set<int> s1, s2;
        for(int i = 1; i <= n; i++) {
            if(a[i-1] == 0) {
                s1.insert(x & i);
            } else {
                s2.insert(x | i);
            }
        }
        
        bool disjoint = true;
        for(int val : s1) {
            if(s2.count(val)) {
                disjoint = false;
                break;
            }
        }
        
        if(disjoint) return false;
    }
    return true;
}

int solve(vector<int>& a, int n, int pos, int changes) {
    if(pos == n) {
        return check(a, n) ? changes : INT_MAX;
    }
    
    int res = solve(a, n, pos + 1, changes);
    
    a[pos] = 1 - a[pos];
    res = min(res, solve(a, n, pos + 1, changes + 1));
    a[pos] = 1 - a[pos];
    
    return res;
}

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            a[i] = s[i] - '0';
        }
        
        if(n > 15) {
            cout << -1 << "\n";
            continue;
        }
        
        int ans = solve(a, n, 0, 0);
        if(ans == INT_MAX) {
            cout << -1 << "\n";
        } else {
            cout << ans << "\n";
        }
    }
    return 0;
}