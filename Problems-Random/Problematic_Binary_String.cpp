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
#define ALLAHU_AKBAR             \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void sir()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string t = "";
    for (int i = 0; i < n; i++)
    {
        t += (i % 2 == 0) ? '0' : '1';
    }

    if (s == t)
    {
        cout << 0 << endl;
        return;
    }

    int ans = 0;

    for (int i = 0; i < n - 2; i++)
    {
        if (s[i] != t[i])
        {
            ans++;

            s[i] = (s[i] == '0') ? '1' : '0';
            s[i + 1] = (s[i + 1] == '0') ? '1' : '0';
            s[i + 2] = (s[i + 2] == '0') ? '1' : '0';
        }
    }

    if (s == t)
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    ALLAHU_AKBAR

    ll t = 1;
    cin >> t;
    while (t--)
    {
        sir();
    }
    return 0;
}