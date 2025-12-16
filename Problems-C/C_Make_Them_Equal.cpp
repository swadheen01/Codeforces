/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Apr 08 2025 11:43:57 PM
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
#define co cout
void sir()
{
    // int y
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      cnt += (s[i] == c);
    }
    if (cnt == n) {
      cout << 0 << '\n';
      return;
    }
    
    for (int d = 1; d <= n; d++) {
      int cc = 0;
      for (int i = d; i <= n; i += d) {
        cc += (s[i - 1] != c);
      }
      if (cc == 0) {
        cout << 1 << '\n';
        cout << d << '\n';
        return;
        
      }
    }

    cout << 2 << '\n';
    cout << n - 1 << " " << n << '\n';
    
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
