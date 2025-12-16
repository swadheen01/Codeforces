/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Oct 19 2024 11:22:43 PM
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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    int mx = a[0];
    int mn = a[n-1];
    int ans = (n-1)*(mx-mn);
    cout<<ans<<endl;
    
}
void sir2()
{
    ll n;
    cin >> n;
    for (ll i = 0; i < n - 1; ++i) {
        cout << '0';
    }
    cout << '1' << endl;
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