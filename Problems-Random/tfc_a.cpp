/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Nov 29 2024 9:08:55 AM
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

// void sir()
// {
//     ll n, q; cin>>n>>q;
//     vector<ll>v(n);
//     for(auto &a:v) cin>>a;
//     while(q--)
//     {
//         ll a,b; cin>>a>>b;
//         ll  lo = 0, hi =  
        
//     }

// }
void sir1()
{
    ll n; cin>>n;
    string s; cin>>s;
    ll chk = stoi(s);
    string ans = "";
    ans+=s;
    reverse(s.begin(),s.end());
    ans += s;
    ll res= stoi(ans);
    //cout<<res<<endl;
    cout<<res-chk<<endl;

}
void sir()
{
    ll a,b; cin>>a>>b;
    cout<<a+b<<endl;
}

void sir2()
{
    ll n,x;
    cin>>n>>x;
    vector<pair<ll,ll>>v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i].first;
        v[i].second = i;
    }
    srt(v);
    for(ll i=0; i<n;i++)
    {
        ll need = x-v[i].first;
        ll lo = i+1, hi = n-1, mid;
        while(lo<=hi)
        {
            mid = (lo + hi)/2;
            if(v[mid].first==need)
            {
                cout<<v[i].second+1<<" "<<v[mid].second+1<<endl;
                return;
            }
            else if(v[mid].first<need)
            {
                lo = mid + 1;
            }
            else hi = mid - 1;

        }
        
    }
    cout<<"IMPOSSIBLE"<<endl;

}
void sirC()
{
    ll n; cin>>n;
    if(n-2>2)
    {
        cout<<"Alice"<<endl;
    }
    else cout<<"Bob"<<endl;
}
void sirA()
{
    ll n; cin>>n;
    vector<ll>v(n);
    for(auto &a:v) cin>>a;
    srt(v);
    ll pa = 0;
    vector<pair<ll,ll>>ans;
    for(ll i=0; i<n-1; i++){
        if(v[i]==v[i+1]){\
            pa++;
            ans.pb({v[i],v[i+1]});
            //ans.pb(v[i+1]);
            i++;
        }

    }
    
    if(pa<4) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        srt(ans);
        ll x = ans.size();
        cout<<ans[0].first<<" "<<ans[1].first<<" "<<ans[0].second<<" "<<ans[x-1].first<<" ";
        cout<<ans[x-2].first<<" "<<ans[1].second<<" "<<ans[x-2].second<<" "<<ans[x-1].second<<endl;    
        // for(ll i=0; i<4; i++)
        // {
        //     cout<<ans[i].second<<" ";
        // }
        // cout<<endl;

    }
}
int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sirA();
    }
    return 0;
}
