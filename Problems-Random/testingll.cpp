// codeforces c code for u least plag solutions too having u can dm me for it
// https://t.me/coderhelpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;

        vector<long long> a(n);
        for (auto &x : a)
            cin >> x;

        vector<long long> b(m), c(m);
        for (auto &x : b)
            cin >> x;
        for (auto &x : c)
            cin >> x;

        // Split monsters into c > 0 and c == 0
        vector<pair<long long, long long>> upgradable, normal;
        for (int i = 0; i < m; ++i)
        {
            if (c[i] > 0)
                upgradable.push_back({b[i], c[i]});
            else
                normal.push_back({b[i], c[i]});
        }

        // Sort swords
        multiset<long long> swords(a.begin(), a.end());

        // Process upgradable monsters (Hint 1)
        sort(upgradable.begin(), upgradable.end());
        int kills = 0;
        for (auto [life, newSword] : upgradable)
        {
            auto it = swords.lower_bound(life);
            if (it != swords.end())
            {
                long long usedSword = *it;
                swords.erase(it);
                swords.insert(max(usedSword, newSword));
                kills++;
            } // oa help here //https://t.me/coderhelpp
        }

        // Process normal monsters (Hint 2)
        vector<long long> remainingSwords(swords.begin(), swords.end());
        sort(remainingSwords.begin(), remainingSwords.end());
        sort(normal.begin(), normal.end());

        int i = 0, j = 0;
        while (i < (int)remainingSwords.size() && j < (int)normal.size())
        {
            if (remainingSwords[i] >= normal[j].first)
            {
                kills++;
                i++;
                j++;
            }
            else
            {
                i++;
            }
        } // oa help here //https://t.me/coderhelpp

        cout << kills << "\n";
    }
}