/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Oct 27 2024 3:33:34 AM
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
    int N;
    cin >> N;
    int mw = 0, mh = 0;
 
    for (int i = 0; i < N; i++) {
        int w, h;
        cin >> w >> h;
        mw = max(mw, w);
        mh = max(mh, h);
    }
 
    cout << 2 * (mw + mh) << '\n';
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
