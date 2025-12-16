/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Nov 25 2024 11:41:42 PM
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

int solve(int n, int k) {
    int od = (n + 1) / 2;
    int ev = n / 2;

    if (k <= od) {
        return 2 * k - 1;
    } else {
        return 2 * (k - od);
    }
}

void sirK()
{
    int n, k;
    cin >> n >> k;

    cout << solve(n, k) << endl;
}
void sir()
{
    ll n; cin>>n;
    vector<ll>v(n);
    for(auto &a:v) cin>>a;
    ll sum = n*(n+1)/2;
    for(ll i=0; i<n; i++) sum-=v[i];    //time O(n);
    cout<<sum<<endl;
}
void sirD()
{
    ll n; cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
    }
    else cout<<(-1)*((n+1)/2)<<endl;
}
void sirE()
{
    ll k,s; cin>>k>>s;
    ll c=0; //time O(n^2)
    for(ll i=0; i<=k; i++)
    {
        for(ll j=0; j<=k; j++)
        {
            ll x = s-(i+j);
            if(x>=0 && x<=k) c++;
        }
    }
    cout<<c<<endl;
}
void sirF()
{
    string s;cin>>s;
    ll c = 0, ans = 0;
    ll n = s.length();
    char now;
    for(ll i=0; i<n; i++){
        if(s[i] != now){
            now = s[i];
            c = 0;  //time O(n);
        }
        if(s[i]==now) c++;
        ans = max(ans,c);
    }
    cout<<ans<<endl;
}
int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        sirK();
    }
    return 0;
}
