/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun May 18 2025 11:55:16 PM
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

ll const N = 300000;
vector<ll>v(N);

inline ll ds(ll n)
{
    ll s = 0;
    for (; n; n /= 10) s += n % 10;
    return s;
}

void count()
{
    ll sum = 0;
    for(ll i=1; i<=N; i++)
    {
        if(i<10)
        {
            sum += i;
            v[i] = sum;
        }
        else{
            sum += (ds(i));
            v[i] = sum;
            
        }
    }
}

// void sir()
// {
//     // int y
    
// }

int main() {
    ALLAHU_AKBAR

    count();
    ll t = 1;
    cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        cout<<v[n]<<endl;
    }
    return 0;
}
