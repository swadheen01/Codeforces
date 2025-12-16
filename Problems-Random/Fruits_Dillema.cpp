/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Aug 05 2025 9:11:24 PM
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

ll cur = 0;
ll k, n;

struct Q {
    ll l, r, ind;
    bool operator<(const Q &oth) const {
        ll bsize = sqrt(n);
        if (l/bsize != oth.l / bsize) return l / bsize < oth.l / bsize;

        if((l/bsize & 1)) return r < oth.r;
        else  return r > oth.r;
    }
};

vector<ll> A, freq, ans;

void add(ll pos) {
    ll f = A[pos];
    freq[f]++;
    if (freq[f]%k==0) cur++;
}

void del(ll pos) {
    ll f = A[pos];
    if (freq[f]% k==0) cur--;
    freq[f]--;
}

void sir()
{
    cin >> n >> k;
    
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];

    vector<ll> cng = v;
    sort(cng.begin(), cng.end());
    cng.erase(unique(cng.begin(), cng.end()), cng.end());
    
    A.resize(n);
    freq.assign(cng.size(), 0); 
    
    for (ll i = 0; i < n; i++) 
        A[i] = lower_bound(cng.begin(), cng.end(), v[i]) - cng.begin();

    ll q; cin>>q;
    ans.resize(q);
    
    vector<Q> quer(q);
    for (ll i = 0; i < q; ++i) {
        cin >> quer[i].l >> quer[i].r;
        quer[i].l--, quer[i].r--; 
        quer[i].ind = i;
    }

    sort(quer.begin(), quer.end());

    fill(freq.begin(), freq.end(), 0);
    cur = 0;
    ll l = 0, r = -1;
    
    for (auto Q : quer) {
        while (r < Q.r) add(++r);
        while (r > Q.r) del(r--);
        while (l < Q.l) del(l++);
        while (l > Q.l) add(--l);
        ans[Q.ind] = cur;
    }

    for (ll i= 0; i<q; i++) {
        cout<<ans[i]<<endl;
    }
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