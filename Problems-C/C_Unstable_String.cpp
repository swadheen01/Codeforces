/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed May 28 2025 2:40:16 AM
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
const pair<int, int> P[] = {{0, 0}, {3, 1}, {6, 2}, {1, 3}, {4, 4}, {7, 5}, {2, 6}, {5, 7}, {8, 8}};
void sir11()
{
    // int y
    string s; cin>>s;
    ll n = s.size();
    ll w = 0;
    for(ll i=0; i<n; i++)
    {
        w += (s[i]=='?');
    }
    if(w==n)
    {
        cout<<n*(n+1)/2<<endl;
        return;
    }

    vector<ll>a(n+1);
    for(ll i=0; i<n; i++){
        ll z = 0;
        if(s[i]=='?')
        {
            while(i<n && s[i]=='?')
            {
                i++; z++;

            }
            a[i] = z;
        }
    }
   
    ll ans = 0;
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='?') ans++;
        else break;
    }
    ans = ans*(ans+1)/2;
    
    for(ll i=0;i<n; i++)
    {
        if(s[i]=='0'||s[i]=='1')
        {
            ll y = a[i];
            ll x = a[i] + 1;
            char c = s[i];
            i++;
            while(i<n){
                if(s[i]=='?')
                {
                    x++;
                    if(c=='0') c = '1';
                    else c = '0';
                }
                else 
                {
                    if(s[i]!=c)
                    {
                        x++;
                        c = s[i];
                    }
                    else break;
                }
                i++;
                
            }
            ans += (x*(x+1))/2 - (y*(y+1))/2;
            i--;
        }
        
    }
    cout<<ans<<endl;
}

void sir()
{
    vector<std::string> s(9);
    for (int i = 0; i < 9; ++i)
        cin >> s[i];
    for (auto [x, y] : P) {
        if (s[x][y] == '9') {
            s[x][y] = '1';
        } else {
            ++s[x][y];
        }
    }
    for (auto v : s) cout << v << "\n";

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
