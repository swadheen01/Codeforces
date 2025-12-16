#include <bits/stdc++.h> 
 
using namespace std; 
 
#define int long long 
 
const int INF = 1e9 + 7; 
 
void solve(){ 
    int N; 
    cin >> N; 
    string S, P; 
    cin >> S >> P; 
    vector<int> ordP(26); 
    for (int i = 0; i < 26; ++i) { 
        ordP[P[i] - 'a'] = i; 
    } 
    vector<char> f(26); 
    for (int i = 0; i < 26; ++i) { 
        f[i] = P[25 - ordP[i]]; 
    } 
 
    vector<vector<int>> dp(2, vector<int>(26, INF)); 
    vector<int> min_dp(26, INF); 
 
    for (int c = 0; c < 26; ++c) { 
        dp[0][c] = 0; 
    } 
 
    for (int i = 1; i <= N; ++i) { 
        int curr = i % 2; 
        int prev = 1 - curr; 
        fill(dp[curr].begin(), dp[curr].end(), INF); 
        char c1 = S[i - 1]; 
        char c2 = f[S[i - 1] - 'a']; 
        vector<int> min_dp_c_leq(26, INF); 
 
        min_dp_c_leq[0] = dp[prev][0]; 
        for (int idx = 1; idx < 26; ++idx) { 
            min_dp_c_leq[idx] = min(min_dp_c_leq[idx - 1], dp[prev][idx]); 
        } 
 
        for (char c : {c1, c2}) { 
            int cost = (c != c1) ? 1 : 0; 
            int idx_c = c - 'a'; 
            if (min_dp_c_leq[idx_c] + cost < dp[curr][idx_c]) { 
                dp[curr][idx_c] = min_dp_c_leq[idx_c] + cost; 
            } 
        } 
 
        min_dp[0] = dp[curr][0]; 
        for (int idx = 1; idx < 26; ++idx) { 
            min_dp[idx] = min(min_dp[idx - 1], dp[curr][idx]); 
        } 
    } 
    int min_cost = INF; 
    for (int c = 0; c < 26; ++c) { 
        min_cost = min(min_cost, dp[N % 2][c]); 
    } 
    if (min_cost >= INF / 2) { 
        cout << -1 << '\n'; 
    } else { 
        cout << min_cost << '\n'; 
    } 
} 
signed main(){ 
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0); 
    int t; 
    cin>>t; 
    while(t--){ 
        solve(); 
    } 
}