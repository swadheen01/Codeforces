/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Oct 07 2024 8:09:41 PM
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
    // string s;
    // cin >> s;

    // set<int> st;
    // int n = s.size();
    
    // for (int i = 0; i < n; i++) {
    //     st.insert(stoi(s.substr(i, 1)));
    //     if (i + 1 < n) {
    //         st.insert(stoi(s.substr(i, 2)));
    //     }
    //     if (i + 2 < n) {
    //         st.insert(stoi(s.substr(i, 3)));
    //     }
    //     if (i + 3 < n) {
    //         st.insert(stoi(s.substr(i, 4)));
    //     }
    // }
    // ll num = 0;
    // for(auto e: st)
    // {
    //     if(e==num){
    //         num++;
    //         continue;
    //     }
    //     else{
    //         cout<<num<<endl;
    //         return;
    //     }
    // }
    //for(auto e:st) cout<<e<<" ";

    // for (int i = 0; ; i++) {
    //     string num = to_string(i);
    //     if (st.find(num) == st.end()) {
    //         cout << i << endl;;
    //         break;
    //     }
    // }
    // string S;
    // cin >> S;

    // for (int i = 0; ; i++) {
    //     string num = to_string(i);

    //     if (S.find(num) == -1) {
    //         cout << i << endl;
    //         break;
    //     }
    // }
    string s;
    cin >> s;

    bool ok = false;
    ll j = -1;
    ll ind = -1;
    for(ll i = 0; i < 100000; i++) {
        string a = to_string(i);
        int got = s.find(a);
        if (got != -1) {
            continue;
        }
        else{
            cout<<i;
            return;
        }
    }

    // if (ok == true) {
    //     cout << j << endl;
    // } else {
    //     sort(s.begin(), s.end(), greater<>());
    //     //ll ans = s[0]-48;
    //     cout << (s[0] - '0') + 1 << endl;
    // }

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
