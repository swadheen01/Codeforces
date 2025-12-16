/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Dec 14 2024 8:38:18 PM
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
    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
        cout << "Case " << i << ":\n";

        stack<string> back, forw;
        string crnt = "http://www.lightoj.com/";

        string cmd;
        while (true) {
            cin >> cmd;

            if (cmd == "QUIT") {
                break;
            } else if (cmd == "VISIT") {
                string url;
                cin >> url;
                back.push(crnt);
                crnt = url;

                while (!forw.empty()) {
                    forw.pop();
                }

                cout << crnt << "\n";
            } else if (cmd == "BACK") {
                if (back.empty()) {
                    cout << "Ignored\n";
                } else {
                    forw.push(crnt);
                    crnt = back.top();
                    back.pop();
                    cout << crnt << "\n";
                }
            } else if (cmd == "FORWARD") {
                if (forw.empty()) {
                    cout << "Ignored\n";
                } else {
                    back.push(crnt);
                    crnt = forw.top();
                    forw.pop();
                    cout << crnt << "\n";
                }
            }
        }
    }
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

