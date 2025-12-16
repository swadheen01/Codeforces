/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Apr 28 2025 10:16:29 PM
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

vector<int> p;

void sieve(int lim) {
    vector<bool> is_prime(lim + 1, true);
    is_prime[0] = is_prime[1] = false;
    
    for (int i = 2; i * i <= lim; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= lim; j += i) {
                is_prime[j] = false;
            }
        }
    }
    p.pb(1);
    for (int i = 2; i <= lim; i++) {
        if (is_prime[i]) {
            p.push_back(i);
        }
    }
}

void sir()
{
    ll n; cin>>n;
    vector<ll>v(n);
    for(auto &e:v) cin>>e;
    sort(v.rbegin(), v.rend()); //for(auto &e:v) cout<<e<<" "; cout<<endl;
    
    ll coin = 0;
    
    for(ll i=0; i<n; i++)
    {
        if(p[i+1]<v[i])
        {
            //cout<<p[i]<<" ";
            coin += (v[i]-p[i+1]);
        }
        else{
            ll d = (p[i+1]-v[i]);

            if(d>coin)
            {
                cout<<n-i<<endl;
                return;
            }
            else coin -= d;
        }
    }
    cout<<0<<endl;
    return;

}

int main() {
    ALLAHU_AKBAR

    int lim = 10000000;
    sieve(lim);

    // for (int i = 1; i < 26 && i < p.size(); i++) {
    //     cout << p[i] << " ";
    // }
    // cout << endl;
    ll t = 1;
    cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
