#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2*(acos(0.0))
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pb push_back
#define lcm(a,b) (a*b)/(__gcd<ll>(a,b))
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

const int mx= 1e6 + 1000;
bool prime[mx];
ll prm[mx];
int ps = 0;
int main() {
    ALLAHU_AKBAR

    ll a,b, ans, tmp;
    for (ll i = 2; i < mx; i++) {
        if(prime[i]) continue;
        prm[ps++] = i;
        for(ll j=i+i; j<mx; j+=i)
        {
            prime[j] = 1;
        }
    }
    
    ll t;
    cin >> t;
    for (int x = 1; x <= t; x++) {
        cin >> a >> b;
        
        ll area= a;

        if(a/b <b){
            cout<<"Case"<<x<<": "<<0<<endl;
            continue;
        }
        ans = 1;
        for(ll i=0; i<ps && prm[i]<=a; i++)
        {
            tmp = 0;
            while(a%prm[i]==0)
            {
                a/=prm[i];
                tmp++;
            }
            ans *= tmp+1;
        }
        if(a!=1) ans *= 2;
        ans/=2;
        for(ll i=0; i<b; i++)
        {
            if(area%i==0) ans--;
        }
        cout << "Case " << x << ": " << ans << "\n";  // Changed endl to "\n"
    }
    
    return 0;
}
