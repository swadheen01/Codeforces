/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Oct 08 2024 10:12:52 PM
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
    string s;
    int n;
    cin >> s >> n;

    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    unordered_map<char, int> brok;
    for (int i = 0; i < n; ++i) {
        char c;
        int x;
        cin >> c >> x;
        brok[c] = x;
    }

    ll ans = 0;

    for (auto& pr : freq) {
        char c = pr.first;
        int cnt = pr.second;

        if (brok.find(c) != brok.end()) {
            int x = brok[c];

            int clk = cnt / (x - 1);
            //baki brok
            int rem = cnt % (x - 1);

            ans += clk * x;
            ans += rem;
            if (rem > 0) ans++;
        } else {
            ans += cnt; //good k
        }
    }

    cout << ans << endl;
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
