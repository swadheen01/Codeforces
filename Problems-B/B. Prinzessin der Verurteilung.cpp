/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Mar 09 2025 5:26:54 AM
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

string mex;
void makemex(ll num)
{
    if(num)
    {
        makemex((num-1)/26);
        mex += ('a' + (num-1)%26);
    }
}

void sir2()
{
    ll n; cin>>n;
    string s; cin>>s;
    ll i = 1;
    while(true)
    {
        mex = "";
        makemex(i);
        if(s.find(mex)==-1)
        {
            cout<<mex<<endl;
            return;
        }
        i++;
    }
}
void sir() {
    ll n;
    cin >> n;
    string s;
    cin >> s;

    unordered_set<string> substrings;

    for (int len = 1; len <= 3; len++) {
        for (int i = 0; i <= n - len; i++) {
            substrings.insert(s.substr(i, len));
        }
    }


    for (char c = 'a'; c <= 'z'; c++) {
        string t(1, c);
        if (!substrings.count(t)) {
            cout << t << "\n";
            return;
        }
    }
    for (char c1 = 'a'; c1 <= 'z'; c1++) {
        for (char c2 = 'a'; c2 <= 'z'; c2++) {
            string t = string(1, c1) + c2;
            if (!substrings.count(t)) {
                cout << t << "\n";
                return;
            }
        }
    }
    
    for (char c1 = 'a'; c1 <= 'z'; c1++) {
        for (char c2 = 'a'; c2 <= 'z'; c2++) {
            for (char c3 = 'a'; c3 <= 'z'; c3++) {
                string t = string(1, c1) + c2 + c3;
                if (!substrings.count(t)) {
                    cout << t << "\n";
                    return;
                }
            }
        }
    }
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
