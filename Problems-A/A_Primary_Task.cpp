/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Aug 13 2024 11:30:47 PM
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
    string s; cin >> s;
    if (s.size() > 2) {
        if (s[0] == '1' && s[1] == '0' && s[2] - '0' > 0) {
            if (s[2] - '0' == 1 && s.size() == 3) {
                cout << "NO\n";
            }
            else cout << "YES\n";
        }
        else cout << "NO\n";
    }
    else cout << "NO\n";
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
