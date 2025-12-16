/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Jul 30 2025 3:38:34 AM
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
    string s;
    cin >> s;
    
    int v = 0, cn = 0, nn = 0, gg = 0, yy = 0;
    
    for (char c : s) {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            v++;
        } else if (c == 'Y') {
            yy++;
        } else if (c == 'N') {
            nn++;
        } else if (c == 'G') {
            gg++;
        } else {
            cn++;
        }
    }
    
    int ans = 0;
    
    for (int ng = 0; ng <= min(nn, gg); ng++) {
        int baki_n = nn - ng;
        int baki_g = gg - ng;
        int cn1 = cn + baki_n + baki_g + ng;
        
        for (int yv = 0; yv <= yy; yv++) {
            int ycn = yy - yv;
            int tot_v = v + yv;
            int tot_cn = cn1 + ycn;
            
            if (tot_v == 0) continue;
            
            int syl = min(tot_v, tot_cn/2);
            int word = 3*syl + min(2*syl, ng);
            ans = max(ans, word);
        }
    }
    
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
