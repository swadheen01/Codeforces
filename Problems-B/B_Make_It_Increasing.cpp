/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Aug 27 2024 11:38:36 PM
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

ll sir()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;
    ll ct = 0;
    for (ll i = n - 2; i > -1; i--)
    {

        while (v[i] >= v[i + 1] && v[i] > 0)
        {

            v[i] /= 2;
            ct++;
        }
        if (v[i] == v[i + 1])
            return -1;
    }

    return ct;
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        cout<<sir()<<endl;
    }
    return 0;
}
