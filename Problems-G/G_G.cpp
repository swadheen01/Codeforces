/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Jan 21 2025 3:38:13 PM
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
#define co cout
#define ren return 0
const ll x = 1e7+10;
// vector<bool> isp(x + 1, true);

// void sieve(ll x) {
    
//     isp[0] = isp[1] = false;
//     for (ll i = 2; i * i <= x; ++i) {
//         if (isp[i]) {
//             for (ll j = i * i; j <= x; j += i) {
//                 isp[j] = false;
//             }
//         }
//     }

//}
bool isp(ll n)
{
    if(n<=1) return 0;
    if(n<=3) return 1;
    if(n%2==0) return 0;
    
    for(ll i=3; i*i<=n; i+=2){
        if(n%i==0) return 0;
    }
    return 1;
}

int main() {
    ALLAHU_AKBAR
    //sieve(x);
    ll n; cin>>n;

    if(isp(n)){
        co<<1<<" "<<n<<endl;
        ren;
    }
    else if(n%2==0)
    {
        if(isp(n/2)){
            co<<2<<endl;
            co<<n/2<<" "<<n/2<<endl;
            ren;

        }
        else{
            co<<3<<endl;
            n-=2;
            co<<2<<" ";
            for(ll i=3; i<=n-2; i+=2)
            {
                if(isp(i)&& isp(n-i)){
                    co<<i<<" "<<n-i<<endl;
                    ren;
                }
            }
        }
    }
    else{
        co<<3<<endl;
        co<<3<<" ";
        n-=3;
        for(ll i=3; i<=n-2; i+=2)
        {
            if(isp(i)&& isp(n-i)){
                    co<<i<<" "<<n-i<<endl;
                    ren;
                }
        }
    }
    return 0;
}
