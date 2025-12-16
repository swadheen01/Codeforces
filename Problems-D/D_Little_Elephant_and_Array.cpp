/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Jul 06 2025 5:37:28 PM
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
ll root;
struct q
{
    ll l,r,ind;
};
q qr[100005];

bool comp(q q1, q q2)
{
    if(q1.l/root == q2.l/root) return q1.r>q2.r;
    else return q1.l/root<q2.l/root;
}
void sir()
{
    // Bismillahir Rahmanir Rahim 
    ll n,qq; cin>>n>>qq;
    vector<ll>v(n); for(auto &e:v) cin>>e;

    root = sqrtl(n);

    for(ll i=0; i<qq; i++)
    {
        ll l,r; cin>>l>>r;
        l--,r--;
        qr[i].l = l;
        qr[i].r = r;
        qr[i].ind = i;
    }
    sort(qr, qr+qq, comp);

    vector<ll>ans(qq);
    
    ll cl=0, cr=-1, l,r;
    ll cnt = 0;

    unordered_map<ll,ll>mp;
    for(ll i=0; i<qq; i++)
    {
        l = qr[i].l;
        r = qr[i].r;

        
        while(cr<r)
        {
            cr++;
            if(mp[v[cr]]==v[cr]) cnt--;
            mp[v[cr]]++;
            if(mp[v[cr]]==v[cr]) cnt++;
        }

        while(cl>l)
        {
            cl--;
            if(mp[v[cl]]==v[cl]) cnt--;
            mp[v[cl]]++;
            if(mp[v[cl]]==v[cl]) cnt++;
        }
        while(cl<l)
        {
            if(mp[v[cl]]==v[cl]) cnt--;
            mp[v[cl]]--;
            if(mp[v[cl]]==v[cl]) cnt++;
            cl++;

        }

        while(cr>r)
        {
            if(mp[v[cr]]==v[cr]) cnt--;
            mp[v[cr]]--;
            if(mp[v[cr]]==v[cr]) cnt++;
            cr--;
        }
        
        ans[qr[i].ind] = cnt;
    }

    for(auto &e:ans) cout<<e<<endl;
    
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
