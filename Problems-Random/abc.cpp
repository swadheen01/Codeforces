/*
 *   Copyright (c) 2025 Emon Thakur
 *   All rights reserved.
 */
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
using minheap = priority_queue<long long, vector<long long>, greater<long long>>;
typedef tree<int, null_type, greater_equal<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key

#define ll long long
#define ld long double
#define MOD 1000000007
#define pie 2*(acos(0.0))
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pb push_back
#define endl '\n'
#define lcm(a,b) (a*b)/(__gcd<ll>(a,b))
#define logb(base,val) log2l(val) / log2l(base)
#define print(v) for(auto e:v) cout<<e<<" "; cout<<endl;
#define printp(v) for(auto e:v) cout<<e.first<<" "<<e.second<<endl;
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define life_is_a_race ios::sync_with_stdio(false); cin.tie(nullptr);
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

void pbdserase(pbds &t, int v)
{
    //normal erase function doesnt work in ordered multiset but this works
    int rank = t.order_of_key(v);
    auto it = t.find_by_order(rank);
    t.erase(it);
}
void solve(int tc)
{
    //cout<<"Case "<<tc<<": ";
    //check N <= 2 cases 
    ll n,q,x; cin >> n >> q;
    vector<ll> a(n+1),b(q+1);
    for(int i=1;i<=n;i++) cin >> a[i], a[i] += a[i-1];
    //for(int i=1;i<=q;i++) cin >> b[i];

    int ind = 1;
    ll extra = 0;
    for(int i=1;i<=q;i++)
    {
        cin >> x;
        int lo=ind, hi=n, mid, ans=ind-1;
        while(lo<=hi)
        {
            mid = (lo+hi)/2;
            ll sum = a[mid]-a[ind-1]-extra;
            if(sum <= x)
            {
                ans = mid;
                lo = mid+1;
            }else hi = mid-1;
        }
        
        extra = (x - (a[ans]-a[ind-1]-extra));
    
        ind = ans + 1;
        if(ind>n) ind = 1, extra = 0;
        cout<<n-ind+1<<endl;
    }
}       
int main()
{
    life_is_a_race
    int t=1; 
    //cin>>t;
    for(int i=1;i<=t;i++) solve(i);
}