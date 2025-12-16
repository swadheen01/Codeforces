/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Sep 05 2024 8:30:43 PM
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
    // ll n,d,a,b; cin>>n>>d>>a>>b;
    // ll ans;
    // if(n<=d) ans = n*a;
    // else ans = (d*a) + ((n-d)*b);

    // cout<<ans<<endl;
    string S;
    cin >> S;
    
    deque<char> dq(S.begin(), S.end());
    bool rev = false;

    int Q;
    cin >> Q;

    while (Q--) {
        int type;
        cin >> type;

        if (type == 1) {
            
            rev = !rev;
        } else if (type == 2) {
            int D;
            char C;
            cin >> D >> C;

            if ((D == 1 && !rev) || (D == 2 && rev)) {
                dq.push_front(C);
            } else {
                dq.push_back(C);
            }
        }
    }

    if (rev) {
        reverse(dq.begin(), dq.end());
    }

    for (char c : dq) {
        cout << c;
    }
    cout << endl;
    
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
