#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while(T--){
        ll n, m; 
        cin >> n >> m;

        ll minSum = n;
        ll maxSum = n * (n + 1) / 2;
        if(m < minSum || m > maxSum){
            cout << "-1\n";
            continue;
        }

        ll current = minSum;
        vector<int> parent(n + 1, 1);
        parent[1] = 0;

        for(ll x = n; x >= 2 && current < m; --x){
            ll need = m - current;
            ll maxRaise = x - 1;
            ll use = min(maxRaise, need);
            ll newParent = x - use;
            if(newParent >= 1){
                parent[x] = newParent;
                current += use;
            }
        }

        if(current != m){
            cout << "-1\n";
            continue;
        }

        cout << 1 << "\n";
        for(int v = 2; v <= n; v++){
            cout << parent[v] << " " << v << "\n";
        }
    }
    return 0;
}
