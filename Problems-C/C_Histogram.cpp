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
    ll T;
    cin>>T;
    for (ll cs= 1; cs<=T; cs++) {
        ll N;
        cin >> N;
        vector<ll> vec(N);
        for (ll i = 0; i < N; ++i) {
            cin >> vec[i];
        }

        stack<ll> st;
        ll mx = 0;
        ll i = 0;

        while (i < N) {
            if (st.empty() || vec[st.top()] <= vec[i]) {
                st.push(i++);
            } else {
                ll top = st.top();
                st.pop();
                ll width = st.empty() ? i : i - st.top() - 1;
                mx = max(mx, vec[top] * width);
            }
        }

        while (!st.empty()) {
            ll top = st.top();
            st.pop();
            ll width = st.empty() ? i : i - st.top() - 1;
            mx = max(mx, vec[top] * width);
        }

        cout << "Case " << cs << ": " << mx << "\n";
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

