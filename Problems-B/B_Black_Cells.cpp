
/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Oct 28 2024 9:20:15 PM
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
#define b bool

void sir2()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin>>a[i];

    if(n%2==0){
        ll ans = -1;
        for(ll i=0; i<n-1; i+=2) ans = max(ans, abs(a[i]-a[i+1]));
        cout<<ans<<endl;
        return;
    }
    ll mx = 0;
    ll ans = 1e18;

    for(ll i=0; i<n; i+=2)
    {
        ll val = mx;
        for(ll j=i+1; j<n; j+=2){
            if(j<n-1) val = max(val,a[j+1]-a[j]);
        }
        ans = min(ans,val);
        if(i<n-1) mx = max(mx,a[i+1]-a[i]);
    }
    cout<<max(1ll,ans)<<endl;
}
bool ok(int n, const vector<ll>& a, ll k) {
    vector<b> mp1(n+1, false), mp2(n+1, false);
    mp1[0] = true;
    mp2[0] = false;
    for(int i = 0; i<n; ++i) {
        vector<b> v1(n+1,false);
        vector<b> v2(n+1, false);
        if(mp1[i]==true) {
            if(i+1 < n && abs(a[i + 1] - a[i]) <= k) {
                v1[i+2] = true;
            }
            if(k >= 1) {
                v2[i+ 1] = true;
            }
        }
        if(mp2[i]) {
            if(i + 1 < n && abs(a[i + 1] - a[i]) <= k) {
                v2[i + 2] = true;
            }
        }
        int x=0;
        while(x<=n){
            if(v1[x]) mp1[x]=true;
            if(v2[x]) mp2[x]= true;
            x++;
        }
    }
    return (mp1[n] || mp2[n]);
}
void sir()
{
    // int y
    int n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin>>a[i];

    ll lo = 0, hi = 1e18;
    ll ans = hi;
    while(lo <= hi) {
        ll mid = lo+(hi-lo)/2;
        if(ok(n,a,mid)) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
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
        sir2();
        //sir();
    }
    return 0;
}
