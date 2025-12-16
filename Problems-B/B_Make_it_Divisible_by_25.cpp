/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Aug 26 2024 8:25:10 PM
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

void sir() {
    string s;
    cin >> s;
    int n = s.length();
    int ans = n;

    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '0' || s[i] == '5') {
            for (int j = i - 1; j >= 0; j--) {
                if ((s[i] == '0' && (s[j] == '0' || s[j] == '5')) ||
                    (s[i] == '5' && (s[j] == '2' || s[j] == '7'))) {
                    ans = min(ans, n - j - 2);
                    break;
                }
            }
        }
    }
    cout << ans << endl;
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
