/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Dec 08 2024 11:50:32 PM
 */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
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
typedef tree<ll, null_type, greater<ll>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void sir()
{
    ll n; cin>>n;
    vector<ll>v(n);
    for(auto &a:v) cin>>a;

    ordered_set s;
    vector<ll>ans;
    for(ll i=0; i<n; i++)
    {
        s.insert(v[i]);
        ans.pb(s.order_of_key(v[i]));
    }
    for(auto a:ans){
        cout<<a<<" ";
    }
    cout<<endl;

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
