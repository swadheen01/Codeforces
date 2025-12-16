/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat May 31 2025
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
#define mod 998244353
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

vector<ll> pp(100001);

void po() {
    pp[0] = 1;
    for(ll i = 1; i < 100001; i++) {
        pp[i] = (pp[i-1]*2)%mod;
    }
}

void sir()
{
    ll n;
    cin >> n;
    vector<ll> p(n), q(n), r(n);

    for(ll i = 0; i < n; i++) cin >> p[i];
    for(ll i = 0; i < n; i++) cin >> q[i];
    vector<ll>pm(n), qm(n);
    pm[0] = 0, qm[0] = 0;
    for(ll i=1; i<n; i++)
    {
        if(p[i]>p[pm[i-1]])
        {
            pm[i] = i;
            
        }
        else pm[i] = pm[i-1];
    }
    for(ll i=1; i<n; i++)
    {
        if(q[i]>q[qm[i-1]])
        {
            qm[i] = i;
            
        }
        else qm[i] = qm[i-1];
    }
    // for(auto &e:pm) cout<<e<<" "; cout<<endl;
    // for(auto &e:qm) cout<<e<<" ";
    ll pmx = 0, qmx = 0, j = 0, k = 0;
    for(ll i = 0; i < n; i++) {
        pmx = max(pmx, p[i]);
        qmx = max(qmx, q[i]);
        if(pmx == p[i]) j = i;
        if(qmx == q[i]) k = i;

        ll jj = i-j, kk = i-k;  // j er pair and k er pair

        if(p[j]>q[k])
        {
            r[i] = (pp[p[j]] + pp[q[jj]])%mod;
        }
        else if(p[j]<q[k])
        {
            r[i] = (pp[q[k]] + pp[p[kk]])%mod;
        }
        else{
            if(p[kk]>q[jj]) r[i] = (pp[p[kk]] + pp[q[k]])%mod;
            else r[i] = (pp[q[jj]] + pp[p[j]])%mod;
        }
        
    }

    for(ll i = 0; i < n; i++) {
        cout << r[i]<<" ";
    }
    cout << endl;
}

int main() {
    ALLAHU_AKBAR
    po();
    ll t;
    cin >> t;
    while(t--) {
        sir();
    }
    return 0;
}