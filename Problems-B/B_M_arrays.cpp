/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Apr 30 2025 11:41:41 PM
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

void sir()
{
    // int y
    int n, m;
    cin >> n >> m;
    map<int, int> cnt;
    while (n--) {
        int x;
        cin >> x;
        cnt[x % m]++;
    }
    int ans = 0;
    for (auto &c : cnt) {
        if (c.first == 0) ans++;
        else if (2 * c.first == m) {
            ans++;
        } else if (2 * c.first < m || cnt.find(m - c.first) == cnt.end()) {
            int x = c.second, y = cnt[m - c.first];
            ans += 1 + max(0, abs(x - y) - 1);
        }
    }
    cout << ans << '\n';
    
}
void sir2()
{
    
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
