/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Aug 25 2024 9:22:12 PM
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
    ll n;
    string s;
    cin >> n >> s;
    vector<ll> a(26);
    vector<pair<int, char>> p;
    for (int i = 0; i < n; i++){
      a[s[i] - 97]++;
    }
    for (int i = 0; i < 26; i++){
      if (a[i]){
        p.push_back({a[i], char(97 + i)});
      }
    }
    sort(p.rbegin(), p.rend());

    while (!p.empty())
    {
      for (int i = 0; i < p.size(); i++)
      {
        cout << p[i].second;
        p[i].first--;
      }
      while (!p.empty() && p.back().first == 0) 
      p.pop_back();
    }
    cout << endl;
    
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
