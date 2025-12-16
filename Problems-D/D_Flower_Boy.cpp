/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Apr 24 2025 10:04:44 PM
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
    ll n,m; cin>>n>>m;
    vector<ll>v(n), b(m);
    for(auto &e:v) cin>>e;
    for(auto &e:b) cin>>e;

    // bool ok = true;
    // for(ll i=0;i<m; i++)
    // {
    //     if(b[i]>v[i]) {ok = false; break;}
    // }
    // if(ok)
    // {
    //     cout<<0<<endl;
    //     return;
    // }
    //rsrt(v);
    //vector<ll>npul;
    //ll ind=0;
    // for(ll i=0; i<n; i++)
    // {
    //     if(b[ind]<=v[i]) ind++;
    //     else{
    //         npul.pb(b[ind]);
    //         ind++;
    //     }
    // }
    // if(npul.size()>1)
    // {
    //     cout<<-1<<endl;
    //     return;
    // }
    //cout<<npul[0]<<endl;
    vector<ll> left(m + 1, n), rt(m + 1, -1);
    left[0] = -1; rt[m] = n;
    ll j = 0;
    for (ll i = 0; i < n && j < m; ++i) {
        if (v[i] >= b[j]) { 
            left[j + 1] = i;
            ++j;
        }
    }

    j = m - 1;
    for (ll i = n - 1; i >= 0 && j >= 0; --i) {
        if (v[i] >= b[j]) {
            rt[j] = i;
            --j;
        }
    }
    if (left[m] < n) {
        cout <<0<<endl;
        return;
    }


    ll ans = INT_MAX;
    
    for (ll i = 1; i <= m; ++i) {
        if (left[i - 1] < rt[i]) {
            ans = min(ans, b[i - 1]); 
        }
    }

    if(ans!=INT_MAX)cout<<ans<<endl; 
    else cout<<-1<<endl;
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
