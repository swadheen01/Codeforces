/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Apr 28 2025 9:18:18 PM
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
    vector<ll> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    vector<ll> pre(n),ans(n);
    pre[0] = a[0];
    for (int i = 1; i < n; ++i) {
        pre[i] = max(pre[i-1], a[i]);
    }
    //for(auto &e:pre) cout<<e<<" ";
    
    vector<ll> suf(n+1, 0);
    for (int i= n-1; i>= 0; i--) {
        suf[n-i] = suf[n-i- 1]+ a[i];
    }
    for (int k = 1; k <= n; ++k) {
        if (k == n) {
            ans[k-1] = suf[n];
        } else {
            ans[k-1] = max(suf[k], suf[k-1] + pre[n-k-1]);
        }
    }
    
    for(auto &e:ans) cout<<e<<" ";
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
