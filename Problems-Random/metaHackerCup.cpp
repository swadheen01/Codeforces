/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Oct 05 2024 10:58:50 PM
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

void sir() {
    int n;
    cin >> n;  
    double mxlo = 0.0;
    double mnup = 1e18;
    for (int i = 1; i <= n; ++i) {
        int A, B;
        cin >> A >> B;
        
        double lo = double(i) / B;  // karon v >= i/B
        double up = double(i) / A;  // and v <= i/A
    
        mxlo = max(mxlo, lo);
        mnup = min(mnup, up);
    }
    //cout<<mxlo<<endl;
    //cout<<mnup<<endl;
    
    if (mxlo>mnup) {
        cout << "-1"<<endl;
    } else {
        cout << fixed << setprecision(6) << mxlo << endl;
    }
}

int main() {
    int t;cin>>t;
    for (int i = 1; i<= t; i++) {
        cout << "Case #" << i << ": ";
        sir();
    }
    
    return 0;
}
