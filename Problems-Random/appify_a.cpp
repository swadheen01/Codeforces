/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Sep 20 2024 3:11:44 PM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2*(acos(0.0))
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pb push_back
#define endl "\n"
#define lcm(a,b) (a*b)/(__gcd<ll>(a,b))
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> hi(N + 1);
    for (int i = 1; i <= N; ++i) {
        cin >> hi[i];
    }
    
    vector<vector<int>> adj(N + 1);
    for (int i = 0; i < M; ++i) {
        int A, B;
        cin >> A >> B;
        adj[A].push_back(B);
        adj[B].push_back(A);
    }
    
    int cnt = 0;
    
    for (int i = 1; i <= N; ++i) {
        bool ok = true;
        for (int neibr : adj[i]) {
            if (hi[i] <= hi[neibr]) {
                ok = false;
                break;
            }
        }
        if (ok) cnt++;
    }
    
    cout << cnt << endl;
    
    return 0;
}
