#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<ll,ll>
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
    // Bismillahir Rahmanir Rahim 
    ll Q;
    cin >> Q;
    deque<pii> dq;

    while (Q--) {
        int tp;
        cin >> tp;

        if (tp == 1) {
            ll c, x;
            cin >> c >> x;
            dq.push_back({x, c});
        } else {
            ll k;
            cin >> k;
            ll sum = 0;

            while (k > 0) {
                auto [val, cnt] = dq.front();
                dq.pop_front();

                if (cnt <= k) {
                    sum += val * cnt;
                    k -= cnt;
                } else {
                    sum += val * k;
                    dq.push_front({val, cnt - k});
                    k = 0;
                }
            }

            cout << sum << '\n';
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
