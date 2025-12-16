/*
 *Copyhi (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Oct 04 2024 9:51:06 PM
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

void sir()
{
    // int y
    ll n, x; cin>>n>>x;
    ll lo = 1, hi = n, mid;
    ll c = 0;
    while (lo < hi) {
        c++;
        mid = lo + (hi - lo) / 2;
        if (x > mid) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }

    cout << c << endl;
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
