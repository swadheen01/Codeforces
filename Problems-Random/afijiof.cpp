/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Oct 04 2024 8:57:59 PM
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
    int N, M;
    cin >> N >> M;
    
    int tot;
    if (M == 1) {
        tot = N * N;
    } else {
        double bot = 2 * (3.0 / 4.0) * (N * N);
        double mid = (M - 2) * (1.0 / 2.0) * (N * N);
        tot = bot + mid;
    }
    
    cout << tot << '\n';
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
