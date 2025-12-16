/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Nov 01 2025 6:06:26 PM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2 * (acos(0.0))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define endl "\n"
#define lcm(a, b) (a * b) / (__gcd<ll>(a, b))
#define mod 1000000007
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define print(vec)        \
    for (auto e : vec)    \
        cout << e << " "; \
    cout << endl
#define ALLAHU_AKBAR             \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void sir()
{
    ll n, m;
    cin >> n >> m;
    char v[n][n];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
            cin >> v[i][j];
    }
    set<string> st;
    for (ll i = 0; i <= n - m; i++)
    {
        for (ll j = 0; j <= n - m; j++)
        {
            string tem = "";
            for (ll a = i; a < i + m; a++)
            {
                for (ll b = j; b < j + m; b++)
                {
                    tem += v[a][b];
                }
            }

            st.insert(tem);
        }
    }
    cout << st.size() << endl;
}

int main()
{
    ALLAHU_AKBAR

    ll t = 1;
    // cin>>t;
    while (t--)
    {
        sir();
    }
    return 0;
}
