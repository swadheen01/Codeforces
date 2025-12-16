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

int root;

struct Q
{
    ll ind, l, r;
};
Q q[1000005];

bool comp(Q q1, Q q2)
{
    if(q1.l/root == q2.l/root)
    {
        return q1.r>q2.r;
    }
    else return q1.l/root < q2.l/root;
}
void sir()
{
    // Bismillahir Rahmanir Rahim 

    //time == (n+q)*root(n)
    ll n;cin>>n;
    vector<ll>v(n); for(auto &e:v) cin>>e;
    root = sqrtl(n);
    ll quer; cin>>quer;

    
    for(ll i=0; i<quer; i++)
    {
        ll l,r; cin>>l>>r;
        q[i].l = l;
        q[i].r = r;
        q[i].ind = i;
    }

    sort(q, q+quer, comp);

    vector<ll>ans(quer);
    ll cl=0, cr=-1,l,r;
    ll cur = 0;
    
    for(ll i=0; i<quer; i++){
        l = q[i].l;
        r = q[i].r;
        l--, r--;
        while(cr<r)
        {
            cr++;
            cur += v[cr];
        }
        while(cl>l)
        {
            cl--;
            cur+= v[cl];
        }
        while(cl<l)
        {
            cur-= v[cl];
            cl++;
        }
        while(cr>r){
            cur-=v[cr];
            cr--;
        }
        ans[q[i].ind] = cur;
    }
    for(auto e:ans) cout<<e<<" ";cout<<endl;
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
