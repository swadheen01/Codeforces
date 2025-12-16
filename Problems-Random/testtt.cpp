/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Dec 03 2024 8:02:21 PM
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

    vector<int> v(n), v2(m);
    for (auto &e : v) cin >> e;
    for (auto &l : v2) cin >> l;

    sort(v.begin(), v.end());
    sort(v2.begin(), v2.end());

    int p = 0, q = 0, cnt = 0;

    while (p < n && q < m) {
        if (v[p] <= v2[q]) {
            cnt++;
            p++;
            q++;
        } else {
            q++;
        }
    }

    cout << cnt << endl;
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
