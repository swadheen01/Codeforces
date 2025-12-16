/*
 *Copyr (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Oct 08 2024 10:03:45 PM
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
    string s;
    cin >> s;
    map<char, char> sp = {
        {'0', '0'}, {'1', '1'}, {'2','2'},{'3','E'},
        {'5','5'},{'6','9'},{'8', '8'},{'9','6'}, {'E','3'},
    };

    int cnt = 0;
    int n = s.length();
    
    for (int i = 0; i < n / 2; ++i) {
        char l = s[i];
        char r = s[n - 1 - i];
        if (!sp.count(l) && !sp.count(r)) {
            cnt+=2;
        }
        else if (sp.count(l) && sp.count(r) && sp[l]==s[n-i-1]) {
            cnt += 0;
        } else if(sp.count(l) || sp.count(r)) {
            cnt++;
        }
    }
    if(n%2==1 && sp[s[n/2]] != s[n/2]) cnt++;

    cout << cnt << endl;
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
