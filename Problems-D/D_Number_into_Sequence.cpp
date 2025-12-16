/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat May 24 2025 12:03:03 AM
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


vector<int> primes;

void sieve(ll lim) {
    vector<bool> is_prime(lim + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= lim; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (ll j = 1ll * i * i; j <= lim; j += i)
                is_prime[j] = false;
        }
    }
}

vector<pair<ll, ll>> doing_pf(ll n) {
    vector<pair<ll, ll>> pf;
    for (ll p : primes) {
        if ( p * p > n) break;
        if (n % p == 0) {
            ll cnt = 0;
            while (n % p == 0) {
                n /= p;
                cnt++;
            }
            pf.emplace_back(cnt,p);
        }
    }
    if (n > 1) {
        // n is prime
        pf.emplace_back(1, n);
    }
    return pf;
}

void sir()
{
    ll n; cin>>n;
    auto pf = doing_pf(n);
    rsrt(pf);
    ll cnt = pf[0].first;
    ll p = pf[0].second;
    ll baki = 1;
    for(ll i=1; i<pf.size(); i++)
    {
        baki *= (pow(pf[i].second, pf[i].first));
    }
    //cout<<baki<<endl;
    // if(baki%p !=0)
    // {
        
    // }
    cnt--; baki*=p;

    cout<<cnt+1<<endl;
    while(cnt--) cout<<p<<" ";
    cout<<baki<<endl;
}
int main() {
    ALLAHU_AKBAR

    sieve(100000); // primes up to sqrt(10^10)
    ll t; cin>>t;
    while(t--)
    {
        sir();

    }
    
    return 0;
}
