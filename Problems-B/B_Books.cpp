/*
 * Copyright (c) Swadheen Islam Robi (SIR01)
 * Created on Wed Nov 27 2024 11:16:38 PM
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
    int n, t;
    cin >> n >> t;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = 0, r = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        while (r < n && sum + arr[r] <= t) {
            sum += arr[r];
            r++;
        }
        ans = max(ans, r - i);
        sum -= arr[i];
    }
    cout << ans << endl;
}
void sir2()
{
    ll n,t; cin>>n>>t;
    vector<ll>v(n);
    for(auto &a:v) cin>>a;
    ll sum =0, j=0, c = 0;
    for(ll i=0; i<n; i++)
    {
        sum += v[i];
        if(sum<=t) c++;
        else{
            sum -= v[j];
            j++;
        }
    }
    cout<<c<<endl;
}

int main() {
    ALLAHU_AKBAR

    ll tt = 1;
    //cin >> t;
    while (tt--) {
        sir2();
    }
    return 0;
}