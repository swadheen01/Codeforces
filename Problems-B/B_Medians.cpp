/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Nov 01 2024 9:21:30 PM
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
    ll n,k; cin>>n>>k;
    if(n==1){
        cout<<1<<endl;
        cout<<1<<endl; return;
    }
    if((n==k || k==1)) cout<<-1<<endl;
    else {
        cout<<3<<endl;
        if(!(k%2)) cout<<1<<" "<<k<<" "<<k+1<<endl;
        else cout<<1<<" "<<k-1<<" "<<k+2<<endl;
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
/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Nov 01 2024 10:03:22 PM
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        ll n, k;
        cin >> n >> k;
        
        ll mx_x = (k - 1 < n - k) ? (k - 1) : (n - k);
        bool found = false;
        vector<ll> pos;
        ll m = 0;

        for (ll x = 1; x <= mx_x; x++) {
            ll tmp = k - 1 - x;
            if (tmp < 0) continue;
            
            ll tv = (tmp % 2 == 0) ? 0 : 1;
            ll mn_p = (k - 1 - x < n - k - x) ? (k - 1 - x) : (n - k - x);
            if (tv > mn_p) continue;
            
            ll cm = 1 + 2 * x;
            ll l = k - tv - 1;
            ll r = n - k - tv;
            if (l < x || r < x) continue;
            
            vector<ll> pos_lst;
            ll p = 1;
            
            for (ll i = 1; i <= x - 1; i++) pos_lst.push_back(p++);
            
            if (x > 0) {
                pos_lst.push_back(p);
                p += (l - (x - 1));
            }
            
            pos_lst.push_back(p);
            p += (2 * tv + 1);
            
            for (ll i = 1; i <= x - 1; i++) pos_lst.push_back(p++);
            
            if (x > 0) {
                pos_lst.push_back(p);
                p += (r - (x - 1));
            }
            
            if (p - 1 == n) {
                m = cm;
                pos = pos_lst;
                found = true;
                break;
            }
        }
        
        if (found==1) {
            cout << m << endl;
            for (size_t i = 0; i < pos.size(); i++) {
                cout << pos[i] << (i < pos.size() - 1 ? " " : "\n");
            }
            continue;
        }
        
        ll t0 = (n - 1) / 2;
        if (t0 == k - 1) {
            cout << "1\n1\n";
            continue;
        }
        
        cout << "-1\n";
    }
    
    return 0;
}
