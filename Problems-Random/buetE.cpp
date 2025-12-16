/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Oct 13 2024 3:32:38 PM
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
    ll N, rs, cs, rt, ct;
    cin >> N >> rs >> cs >> rt >> ct;

    ll d = abs(rs - rt) + abs(cs - ct);

    if (d > N) {
        cout << 0 << endl;
        return;
    }

    if (d==0) {
        cout << N/2 << endl;
        return;
    }

    ll ans =(N - d)/2 + 1;
    cout << ans << endl;
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
