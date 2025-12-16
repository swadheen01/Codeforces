/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Jul 18 2024 1:56:22 AM
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
    
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
/**
 *  written by Binoy Barman .
**/

#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define all(v) v.begin(), v.end()
#define Too_Many_Jobs int tts, tc = 1; cin >> tts; hell: while(tts--)
#define Dark_Lord_Binoy ios_base::sync_with_stdio(false); cin.tie(NULL);

#ifdef LOCAL
#include "unravel.hpp"
#else
#define dbg(...) 42
#endif
#define ll long long
const int N = 2e5 + 5, inf = INT_MAX;

int32_t main() {
Dark_Lord_Binoy
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Too_Many_Jobs {
        int n, k;
        cin >> n >> k;
        string s, t;
        cin >> s >> t;
        int c1 = 0, c2 = 0, zo = 0, oz = 0, oo = 0, zz = 0;
        for (int i = 0; i < n; i++) {
            if(s[i] == '1') c1++;
            if(t[i] == '1') c2++;
            if(s[i] == '0' && t[i] == '1') zo++;
            else if(s[i] == '1' && t[i] == '0') oz++;
            else if(s[i] == '1' && t[i] == '1') oo++;
            else if(s[i] == '0' && t[i] == '0') zz++;
        }
        dbg(zo, oz, oo, zz);
        if(c1 != c2) {
            cout << "NO" << nl;
        }
        else {
            if(zo > k || zo != oz) {
                cout << "NO" << nl;
            }
            else if(zo == oz) {
                int baki = k - zo;
                oo += zo;
                zz += zo;
                cout << (baki % 2 == 0 || oo > 1 || zz > 1 ? "YES" : "NO") << nl;
            }
        }
    }

    return 0;
}