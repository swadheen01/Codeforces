/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Oct 23 2024 11:08:19 PM
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
    string x;
    cin >> x;

    for (int i = 0; i < x.size(); ++i) {
        int dig = x[i] - '0';  
    
        int inv = 9 - dig;
        
        if (inv < dig && !(i == 0 && inv == 0)) {
            x[i] = '0' + inv; 
        }
    }
    cout << x << endl; 
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
