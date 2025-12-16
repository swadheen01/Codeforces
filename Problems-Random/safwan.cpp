/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Nov 23 2024 1:31:37 PM
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
    ll n; cin >> n;
    string s = to_string(n);
    string ans = "";
    int got; 
    bool f = false;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] < s[i - 1]) {
            got = i - 1;
            f = true;
            break;
        }
    }

    if (f) {
        for (int i = got; i >= 0; i--) {
            if (s[i] != s[got]) {
                break;
            }
            else {
                got = i;
            }
        }
        for (int i = 0; i < got; i++) {
            ans += s[i];
        }
        int need = s[got] - '0';
        need--;
        char c = need + '0';
        ans += c;
        for (int i = got + 1; i < s.size(); i++) {
            ans += '9';
        }
        n = stoll(ans);
    }
    cout << n << endl;


    
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    int c = 0;
    while(t--)
    {   
        cout << "Case #" << ++c << ": ";
        sir();
    }
    return 0;
}
