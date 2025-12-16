/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Apr 15 2025 2:24:16 AM
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

void sirr()
{
    ll n; cin>>n;
    vector<ll>v(n);
    
    for(auto &e:v) 
    {
        cin>>e;
        //mx = max(mx,e);
    }
    //cout<<0<<" ";
    //ll mx = v[0];
    ll ek = 0;
    for(ll i=0; i<__bit_width(v[0]); i++)
    {
        if(!(v[0]&(1<<i))) ek += (1<<i);
    }
    cout<<ek<<" ";
    for(ll i=1; i<n; i++)
    {
        ll num = 0;
        for(ll j=0; j<__bit_width(v[i-1]); j++)
        {
            if(!(v[i]&(1<<j)))
            {
                num += (1<<j);
            }
        }
        cout<<num<<" ";
    }cout<<endl;
}
void sir(){
    int n;
        cin >> n;
        vector<int> x(n), y(n, 0), a(n);
        for (int i = 0; i < n; ++i) cin >> x[i];

        a[0] = x[0]; // y[0] = 0, so a[0] = x[0] ^ 0
        for (int i = 1; i < n; ++i) {
            // We want: a[i] = x[i] ^ y[i]
            // and a[i-1] & a[i] == a[i-1]
            // So: set bits in y[i] such that x[i] ^ y[i] has all bits of a[i-1]
            int need = a[i-1] & (~x[i]); // bits needed to match a[i-1] that x[i] doesn't have
            y[i] = need;
            a[i] = x[i] ^ y[i];
        }

        for (int i = 0; i < n; ++i)
            cout << y[i] << " ";
        cout << "\n";
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
