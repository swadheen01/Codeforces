/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Apr 16 2025 8:44:49 PM
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

void sir2()
{
    ll n,k,d; cin>>n>>k>>d;
    vector<ll>v(n); for(auto &e:v) cin>>e;
    srt(v);
    ll ans = 0;
    ll cnt = 0;
    for(ll i=0; i<n; i++)
    {
        if(n-cnt>=k && d>0)
        {
            ll x = (d+(v[i]-1))/v[i];
            ans += x;
            d-=x;
        }
    }
    cout<<ans<<endl;
}
void sir()
{
    ll n,k,d; cin>>n>>k>>d;
    vector<ll>v(n); for(auto &e:v) cin>>e;
    //srt(v);
    ll ans = 0;
    ll cnt = 0;
    set<ll>st;
    ll x = 1;
    // while(x<=d)
    // {
    //     vector<ll>div;
    //     for(ll i=1; i<=sqrt(x)+1; i++) if(x%i==0) div.pb(i);
    //     for(auto &di:div){
    //         if(st.find(di) !=st.end()) {cnt--; break;}
    //     }
    //     srt(v);
    //     ll e = v[0];
    //     if(n-cnt>=k)
    //     {
    //         st.insert(e);
    //         v[0]*=2;
    //         ans++;
    //         cnt++;
    //     }
    //     x++;
    // }
    map<ll,ll>mp;
    for(auto &e:v) mp[e] = e;
    while(x<=d)
    {
        srt(v);
        if(st.find(x)!=st.end()) cnt--;
        cnt++;
        if(n-cnt>=k)
        {
            ans++;
            ll da = mp[v[0]];
            v[0] = v[0] + da;
            ll el = v[0];
            mp[el] = da;
            cout<<v[0]<<" ";
            st.insert(v[0]);
        }
        
        x++;
    }
    cout<<ans<<endl;
}
void try3()
{
    int n, k, d;
    cin >> n >> k >> d;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    multiset<pair<int, int>> b;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> r;
    for (int i = 0; i < n; ++i) b.insert({a[i], i});

    int res = 0;
    for (int day = 1; day <= d; ++day) {
        while (!r.empty() && r.top().first == day) {
            auto [_, i] = r.top(); r.pop();
            b.insert({a[i], i});
        }
        int c = b.size() - k;
        while (c-- > 0 && !b.empty()) {
            auto it = b.begin();
            r.push({day + it->first, it->second});
            b.erase(it);
            res++;
        }
    }
    cout << res << '\n';
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        try3();
    }
    return 0;
}
