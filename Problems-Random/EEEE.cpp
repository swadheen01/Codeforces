/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Nov 30 2025 12:06:25 PM
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

    ll a_ = a.size();
    ll b_ = b.size();
    if (a_ > b_)
    {
        swap(a, b);
        swap(a_, b_);
    }
    vector<ll> cmn;
    cmn.push_back(0);
    for (ll i = 1; i <= a_; i++)
    {
        if ((a_ % i == 0) && (b_ % i == 0))
        {
            cmn.push_back(i);
        }
    }

    string temp = "";
    ll j = 0;
    for (ll i = 1; i < cmn.size(); i++)
    {

        while (j < cmn[i])
        {
            temp.push_back(a[j]);
            j++;
        }

        bool can = false;
        ll ln = cmn[i];
        for (ll k = 0; k < a_; k++)
        {
            if (a[k] != temp[k % ln])
            {
                can = true;
                break;
            }
        }

        if (can)
            cmn[i] = -1;
    }

    ll cnt = 0;

    temp = "";
    j = 0;
    for (ll i = 1; i < cmn.size(); i++)
    {

        while (j < cmn[i])
        {
            temp.push_back(a[j]);
            j++;
        }

        bool can = true;
        ll ln = cmn[i];
        for (ll k = 0; k < b_; k++)
        {
            if (b[k] != temp[k % ln])
            {
                can = false;
                break;
            }
        }

        if (can)
        {
            // cout << temp << endl;
            cnt++;
        }
    }

    cout << cnt << endl;
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
