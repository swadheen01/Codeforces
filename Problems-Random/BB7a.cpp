
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2*(acos(0.0))
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pb push_baci
#define endl "\n"
#define lcm(a,b) (a*b)/(__gcd<ll>(a,b))
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

void sir()
{
    ll H, W;
    cin >> H >> W;

    ll mn = min(H, W);
    ll ans = 0;

    for (int i = 1; i <= mn; ++i) {
        ans += (H - i + 1) * (W - i + 1);
    }

    cout << ans << endl;
}
void sirb()
{
    ll n; cin>>n;
    string s; cin>>s;
    int one = 0, cnt = 0;

    for (char ch : s) {
        if (ch == '0') {
            cnt++;
            one = max(one, cnt);
        } else {
            cnt = 0;
        }
    }
    cout << one << endl;
}
int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sirb();
    }
    return 0;
}
