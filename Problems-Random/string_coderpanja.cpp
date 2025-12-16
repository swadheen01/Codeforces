/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Aug 22 2025 05:15:01 AM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ALLAHU_AKBAR             \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void sir()
{
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> enemy(26, vector<bool>(26, false));
    for (int i = 0; i < m; i++)
    {
        char a, b;
        cin >> a >> b;
        enemy[a - 'a'][b - 'a'] = true;
        enemy[b - 'a'][a - 'a'] = true;
    }

    string s = "";
    for (int i = 0; i < n; i++)
        s.push_back('a' + i);

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {

        set<char> seen;
        bool ok = true;
        for (int j = i; j < n; j++)
        {
            char c = s[j];

            for (char d : seen)
            {
                if (enemy[c - 'a'][d - 'a'])
                {
                    ok = false;
                    break;
                }
            }
            if (!ok)
                break;
            seen.insert(c);
            ans++;
        }
    }

    cout << ans << "\n";
}

int main()
{
    ALLAHU_AKBAR
    int t;
    cin >> t;
    while (t--)
    {
        sir();
    }
    return 0;
}
