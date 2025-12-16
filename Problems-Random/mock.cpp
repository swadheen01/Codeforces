/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Nov 08 2024 4:01:14 PM
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

bool ok(int a, int b, int c) {
    vector<vector<int>>vec={
        {0,3,6}, {0, 4, 4},
        {1, 3, 4}, {1, 2, 4},
        {3, 3, 3}, {2,2,2},
        {1,1,6}
        
    };
    for (auto& v : vec) {
        if (a == v[0] && b == v[1] && c == v[2]) return true;
    }
    return false;
}
void sir()
{
    // int y
    
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    for(ll i=1; i<=t; i++)
    {
        int a, b, c;
        vector<int>v(3);
        for(int i=0; i<3; i++) cin>>v[i];
        // cin >> a >> b >> c;
        srt(v);
        a = v[0], b = v[1], c = v[2];

        if (ok(a, b, c)) {
            cout << "Case " << i << ": perfectus" << endl;
        } else {
            cout << "Case " << i << ": invalidum" << endl;
            }
        
    }
    return 0;
}
