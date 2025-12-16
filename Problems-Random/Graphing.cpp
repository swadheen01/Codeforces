/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Aug 03 2025 10:07:06 PM
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
    int n; cin >> n;
    vector<string> mat(n);
    for (int i = 0; i < n; ++i) {
        cin >> mat[i];
    }

    vector<pair<int, int>> in;
    for (int j = 0; j < n; ++j) {
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            if (mat[i][j] == '1') cnt++;
        }
        in.pb({-cnt, j + 1}); 
    }

    sort(in.begin(), in.end());

    for (auto& p:in) {
        cout << p.second << " ";
    }
    cout <<endl;
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
