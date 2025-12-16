/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Oct 07 2024 9:49:34 PM
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
    int n;cin>>n;
    vector<int>v(n);
    int tot = n;

    map<int,int>mp;

    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    string ans;

    while(mp[3] > 0) {
        
        if(mp[1] <= 0 || mp[3] <= 0 || mp[6] <= 0) {
            cout << -1;
            return;
        }
        mp[1] --; mp[3] --;
        mp[6] --;
        
        ans += "1 3 6\n";
        
        tot -= 3;
    }
    
    while(tot > 0) {
        
        if(mp[4]<mp[6]) {
            
            // 1 2 6
            if(mp[1] <= 0 || mp[2] <= 0 || mp[6] <= 0) {
                cout << -1;
                return;
            }
            mp[1]--; mp[2]--; mp[6]--;
            
            ans += "1 2 6\n";
            
        } else {
            // 1 2 4
            if(mp[1]--<= 0 || mp[2]--<= 0 || mp[4]--<= 0) {
                cout << -1;
                return;
            } 
            ans += "1 2 4\n";
        }
        tot -= 3;
    }
    
    cout << ans;
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
