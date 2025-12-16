/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Nov 30 2025 10:25:21 AM
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
    string a, b;
    cin >> a >> b;
    ll n1 = a.length();
    ll n2 = b.length();
    if (n1 > n2)
    {
        swap(a, b);
        swap(n1, n2);
    }
    // cout << n1 << " " << n2 << endl;
    vector<ll> div;
    for (ll i = 1; i <= sqrt(n1); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            div.pb(i);
            if ((n1 / i) != i && (n2 % (n1 / i) == 0))
                div.pb(n1 / i);
        }
    }
    srt(div);
    // print(div);
    map<char, ll> mp1, mp2;
    for (auto c : a)
        mp1[c]++;
    for (auto c : b)
        mp2[c]++;

    if (mp1.size() != mp2.size())
    {
        cout << 0 << endl;
        return;
    }
    if (mp1.size() == 1)
    {
        ll ans = 0;
        for (ll i = 0; i < div.size(); i++)
        {
            if (n2 % div[i] == 0)
                ans++;
        }
        cout << ans << endl;
        return;
    }
    ll ans = 0;
    ll num = -1;
    ll mn = mp1.size();

    for (ll i = 1; i < div.size(); i++)
    {
        ll size = div[i];

        if (n2 % size == 0)
        {
            bool f = true;
            ll ind = 0;
            string temp = a.substr(0, size);

            while (ind < n2)
            {
                ll l = ind % n1;
                // ll r = l+size;
                string one = a.substr(l, min(size, (n1 - l + 1)));
                string two = b.substr(l, min(size, (n2 - l + 1)));
                // cout << one << " " << two << endl;
                if (one != temp || two != temp)
                {
                    f = false;
                    break;
                }
                ind = ind + size;
            }
            if (f)
            {
                ans++;
                if (num == -1)
                    num = size;
                // break;
            }
        }

        // if (num != -1)
        //     break;
    }
    // cout << num << endl;
    //  ll ind = 1;
    //  ll i = 0;
    //  if (num == -1)
    //  {
    //      cout << 0 << endl;
    //      return;
    //  }
    //  ll d = num * ind;
    //  ll mx = div[div.size() - 1];

    // ans = 0;
    // while ((d <= mx && n2 % d == 0) && (n1 % d == 0))
    // {
    //     ans++;
    //     ind++;
    //     d = num * ind;
    // }

    cout << ans << endl;
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
