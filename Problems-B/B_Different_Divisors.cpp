/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Nov 27 2024 12:41:26 AM
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
vector<ll>primes;

void sir2()
{
    int x;
    cin >> x;
    vector<int> p;
    for (int i = x + 1; ; i++)
    {
        int t = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                t = 0;
                break;
            }
        }
        if (t)
        {
            p.push_back(i);
            break;
        }
    }
    for (int i = p.back() + x; ; i++)
    {
        int t = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                t = 0;
                break;
            }
        }
        if (t)
        {
            p.push_back(i);
            break;
        }
    }
    cout << min(1ll * p[0] * p[1], 1ll * p[0] * p[0] * p[0]) << "\n";
    
}

void seive(ll mx)
{
    vector<bool>pp(mx,1);
    pp[0] = 0, pp[1] = 0;
    for(ll i=2; i*i<=mx; i++)
    {
        if(pp[i])
        {
            for(ll j = i*i; j<=mx; j+=i)
            {
                pp[j] = 0;
            }
        }
    }
    for(ll i=2; i<mx; i++) if(pp[i]) primes.pb(i);
}
void sir()
{
    //for(auto e:primes) cout<<e<<" ";
    ll d; cin>>d;
    ll a,b,c;
    a = 1;
    auto it = lower_bound(primes.begin(), primes.end(), a+d);
    b = *it;
    auto it3 = lower_bound(primes.begin(), primes.end(), b+d);
    c = *it3;

    cout<<a*b*c<<endl;
}

int main() {
    ALLAHU_AKBAR

    seive(1000000);
    ll t = 1;
    cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
