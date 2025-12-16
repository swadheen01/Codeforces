/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Oct 20 2024 3:52:12 PM
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
const int MAX_SIZE = 2e5 + 5;
ll a[MAX_SIZE];
void sir()
{
    // int y
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n+1);
    for (ll i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    ll sum = 0, clk = 0;
    for (ll i = 1; i <= n; ++i) {
        // sum += a[i];
        // clk += a[i];
        ll d = sum + (n-i+1)*(a[i]-a[i-1]);
        if(d>=k) 
        {
            clk+= (k-sum);
            break;
        }
        clk += (n-i+1)*(a[i] - a[i-1])+1;
        sum += (n-i+1)* (a[i]-a[i-1]);
    }
    

    cout << clk << endl;
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
