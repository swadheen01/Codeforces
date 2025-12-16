/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Oct 08 2024 8:50:02 PM
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

// string solve(ll r) {
//     if (r < 1200) return "newbie";
//     else if (r < 1400) return "pupil";
//     else if (r < 1600) return "specialist";
//     else if (r < 1900) return "expert";
//     else if (r < 2100) return "candidate master";
//     else if (r < 2400) return "master";
//     else return "grandmaster";
// }

// ll s2(ll r)
// {
//     if (r < 1200) return 1199;
//     else if (r < 1400) return 1399;
//     else if (r < 1600) return 1599;
//     else if (r < 1900) return 1899;
//     else if (r < 2100) return 2099;
//     else if (r < 2400) return 2399;
//     else return 1e18;
// }
// void sir()
// {
//     // ll y
//     string S;
//     ll C, M, D;
    
//     cin >> S >> C >> M >> D;
    
//     string now = solve(C+D);
//     string mx = solve(M);
//     ll maxx = s2(M);
    
//     if ((C+D) > maxx) {
//         cout << now << endl;
//     } else {
//         cout << "Think about it, you can do it!" << endl;
//     }
    
// }
void sir2() {
    int n, m;
    cin >> n >> m;

    int h = (n * (n - 1)) / 2;
    int v = (m * (m - 1)) / 2;

    int total = h * v;

    cout << total << endl;
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin >> t;
    while (t--) {
        sir2();
    }
    return 0;
}