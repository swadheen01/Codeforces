/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Dec 12 2024 12:12:00 AM
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
const ll mx = 1e18;

vector<ll> seive(ll n) {
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;

    for (ll i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (ll j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    vector<ll> prime;
    for (ll i = 2; i <= n; ++i) {
        if (isPrime[i]) {
            prime.push_back(i);
        }
    }

    return prime;
}

void sir()
{
    
    ll n; cin>>n;
    vector<ll>list = seive(200000);
    //for(auto &s:list) cout<<s<<" ";
    ll lo=0, hi = list.size()-1, mid, ans;
    while(lo<=hi)
    {
        mid = lo+(hi-lo)/2;
        if(list[mid]<n){
            lo = mid+1;
        }
        else{
            ans = list[mid];
            hi = mid-1;
        }
    }
    cout<<ans<<endl;
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
