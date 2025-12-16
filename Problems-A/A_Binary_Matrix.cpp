/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Mar 15 2025 8:41:49 PM
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
    ll n,m; cin>>n>>m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < m; j++) {
            a[i][j] = row[j] - '0';
        }
    }
    ll ans = 0;
    for(ll i=0; i<n;i++)
    {
        ll cnt = count(a[i].begin(), a[i].end(), 1);
        if(cnt%2) ans++;
        //cout<<cnt<<" ";
    }
    ll ans2 = 0;
    for(ll i=0; i<m; i++)
    {
        ll cnt2 = 0;
        for(ll j=0; j<n; j++) if(a[j][i]) cnt2++;
        if(cnt2%2) ans2++;
    }
    cout<<max(ans, ans2)<<endl;
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
