/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Oct 10 2025 4:02:38 PM
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
#define ALLAHU_AKBAR             \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void sir()
{
    string s;
    cin >> s;

    int h = stoi(s.substr(0, 2));
    int m = stoi(s.substr(3, 2));

    while (true)
    {

        char d = s[0];
        if (s[1] == d && s[3] == d && s[4] == d)
        {
            cout << s << endl;
            return;
        }

        m++;
        if (m == 60)
        {
            m = 0;
            h++;
            if (h == 24)
                h = 0;
        }

        string hs, ms;
        if (h < 10)
            hs = "0" + to_string(h);
        else
            hs = to_string(h);
        if (m < 10)
            ms = "0" + to_string(m);
        else
            ms = to_string(m);
        s = hs + ":" + ms;
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
