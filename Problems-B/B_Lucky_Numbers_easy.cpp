/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Feb 09 2025 12:56:20 AM
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

void bitt()
{
    ll n;
    cin >> n;
    ll res = LLONG_MAX;

    for (int len = 2; len <= 10; len += 2) {
        int half = len / 2; 

        for (int m = 0; m < (1 << len); m++) {
            if (__builtin_popcount(m) != half) continue;

            string num = "";
            for (int i = 0; i < len; i++) {
                if (m & (1 << i))
                    num += '7';
                else
                    num += '4';
            }

            ll number = stoll(num);
            if (number >= n)
                res = min(res, number);
        }
    }

    cout << res << endl;
}
void sirAC()
{
    vector<ll>v;
    for(ll i=2; i<=10; i+=2)
    {
        string s = "";
        for(ll j=1; j<=(i/2); j++) s+='4';
        for(ll j=1; j<=(i/2); j++) s+='7';
        
        do
        {
            v.pb(stoll(s));
        } while (next_permutation(s.begin(), s.end()));
        
    }
    srt(v);
    ll n; cin>>n;
    cout<<*lower_bound(v.begin(), v.end(), n)<<endl;
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        bitt();
    }
    return 0;
}
