/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat May 17 2025 6:56:45 PM
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
    ll h,w,n; cin>>h>>w>>n;
    ll z = n;
    map<ll,ll>row, col;
    set<pair<ll,ll>>st;
    while(z--)
    {
        ll r,c; cin>>r>>c;
        row[r]++;
        col[c]++;
        st.insert({r,c});
    }
    ll q; cin>>q;
    //for(auto [a,b]:row) cout<<a<<" "<<b;cout<<endl;
    while(q--)
    {
        ll tp, rc; cin>>tp>>rc;
        if(tp==1)
        {
            cout<<max(0ll,row[rc])<<endl;
            row[rc] = 0;
            for(ll i=1; i<=w; i++)
            {
                if(st.find({rc,i})!=st.end()) col[i]--;
            }
            
        }
        else
        {
            cout<<max(0ll,col[rc])<<endl;
            col[rc] = 0;
            for(ll i=1; i<=h; i++)
            {
                if(st.find({i,rc})!=st.end()) row[i]--;
            }
        }
    }
}
void sir()
{
    ll h, w, n;
    cin >> h >> w >> n;

    map<ll, ll> row, col;
    map<ll, set<ll>> rmp, cmp;

    for (ll i = 0; i < n; i++) {
        ll r, c;
        cin >> r >> c;
        row[r]++;
        col[c]++; 
        rmp[r].insert(c);
        cmp[c].insert(r);
    }

    ll q;
    cin >> q;
    while (q--) {
        ll tp, rc;
        cin >> tp >> rc;
        if (tp == 1) {
            cout << row[rc] << "\n";
            for (ll y : rmp[rc]) {
                cmp[y].erase(rc);
                col[y]--;
            }
            rmp[rc].clear();
            row[rc] = 0;
        } else {
            cout << col[rc] << "\n";
            for (ll x : cmp[rc]) {
                rmp[x].erase(rc);
                row[x]--;
            }
            cmp[rc].clear();
            col[rc] = 0;
        }
    }
}
int main() {
    ALLAHU_AKBAR
    ll t = 1;
    while (t--) sir();
    return 0;
}
