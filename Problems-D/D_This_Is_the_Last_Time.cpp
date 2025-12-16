/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Jul 17 2025 9:09:22 PM
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
#define mx LLONG_MAX
struct cs{
    ll l,r,real;
    ll ind;
    bool operator<(const cs &oth) const {
        if (l == oth.l) return ind<oth.ind;
        return l<oth.l;
    }
};

void sir() {
    ll n, k;
    cin >> n >> k;

    vector<cs> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].l >> v[i].r >> v[i].real;
        v[i].ind = i;
    }

    set<cs> st;
    for(auto &c:v) st.insert(c);

    // for(auto &e:st)
    // {
    //     cout<<e.l<<" "<<e.r<<" "<<e.real<<endl;
    // }

    queue<ll> q;
    q.push(k);
    ll ans = k;

    while (!q.empty()) 
    {
        ll cur = q.front();
        q.pop();
        auto it = st.upper_bound(cs{cur,mx,mx,mx});

        vector<cs> del;
        for(auto e = st.begin(); e != it;e++) {
            if(e->r >=cur) {
                if(e->real > ans) {
                    ans =e->real;
                    q.push(e->real);
                }
                del.pb(*e);
            }
        }
        for(auto &c:del) st.erase(c);   //del
    }

    cout<<ans<<endl;
}

int main() {
    ALLAHU_AKBAR
    ll t;
    cin >> t;
    while (t--) {
        sir();
    }
    return 0;
}
