/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed May 07 2025 9:36:57 PM
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
    ll n,h; cin>>n>>h;
    vector<pair<ll,ll>>dmg;
    // for(auto &e:s) cin>>e;
    // for(auto &a:d) cin>>a;
    ll mx= 0, tm = -1;
    ll dps = 0;
    while(n--)
    {
        ll s,d; cin>>s>>d;
        
        ll chk = d/s;
        if(chk>dps)
        {
            dps = chk;
            mx = max(d, mx); tm = s;
        }
    }
    //cout<<mx<<endl;
    ll z = h/mx;
    ll rem = h-(z*mx);
    if(rem<=0)
    {
        cout<<z*tm<<endl;
        return;
    }
    ll res = z*tm;


}
void sir2()
{
    ll N, H;
    cin >> N >> H;
    ll b1 = 0, b2 = 0;
    for (ll i = 0; i < N; i++) {
        ll S, D;
        cin >> S >> D;
        if (S == 1) {
            b1 = max(b1, D);
        } else {
            b2 = max(b2, D);
        }
    }

    ll res = 0;
    if (b1 == 0) {
        res = 2 * (ll)ceil((double)H / b2);
    } else if (b2 == 0) {
        res = (ll)ceil((double)H / b1);
    } else {
        ll t1 = (ll)ceil((double)H / b1);
        ll k = H / b2;
        ll rem = H - k * b2;
        ll t2;
        if (rem > 0) {
            t2 = 2 * k + (ll)ceil((double)rem / b1);
        } else {
            t2 = 2 * k;
        }
        ll t3 = 2 * (k + 1);
        res = min(t1, min(t2, t3));
    }

    cout << res << endl;
}
void sir3()
{
    int n; cin >> n;
    vector<int>A(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
    }
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        A[i] -= x;
    }

    sort(A.begin() + 1, A.end());
    ll res = 0;
    for (int i = 1; i <= n; i++) {
        int id = upper_bound(A.begin() + i + 1, A.end(), 0 - A[i]) - A.begin();
        res += n + 1 - id;
    }

    cout << res << endl;
}
int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        sir3();
    }
    return 0;
}
