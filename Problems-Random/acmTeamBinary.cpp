
/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Oct 08 2024 10:01:45 PM
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

bool can(int M, const vector<int>& a, int K) {
    int need = 0;
    for (int al : a) {
        need += al / M; 
        if (need >= K) return true;
    }
    return false; 
}
void sir()
{
    // int y
    int N, K;
    cin >> N >> K;
    vector<int> a(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }
    int lo = 1, hi = *max_element(a.begin(), a.end());
    int ans = 0;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (can(mid, a, K)) {
            ans = mid; 
            lo = mid + 1; 
        } else {
            hi = mid - 1;
        }
    }

    cout << ans << endl;
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
