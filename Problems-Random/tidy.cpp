/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Nov 23 2024 11:58:42 AM
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

bool ok(string &s)
{
    ll x = s.length();
    for(ll i=0; i<x-1; i++)
    {
        if(s[i]>s[i+1]) return false;
    }
    return true;
}
void sir()
{
    ll n; cin>>n;
    string s;
    s = to_string(n);
    ll l = s.length();
    if(l>1 && s[0]=='1' && s[1]=='0'){
        for(ll i=0; i<l-1; i++){
            cout<<'9';
        }
        cout<<endl; return;
    }
    if(n<10){
        cout<<n<<endl; return;
    }
    string ans="";
    for(ll i=0; i<l-1; i++)
    {
        if(s[i]>s[i+1] && s[i+1]=='0'){
            ll x = s[i]-'0';
            x--;
            ans+= (x + '0');
            for(ll j =i+1;j<l; j++)
            {
                ans += '9';
            }
            if(is_sorted(ans.begin(), ans.end())){
            cout<<ans<<endl; return;
            }
            for(ll ind = i; ind>=1; ind--)
            {
                if(ans[ind]<ans[ind-1]){
                    ans[ind]='9';

                    ll x = ans[ind-1] - '0';
                    x--;
                    if(ind==1){
                        cout<<ans<<endl; return;
                    }
                    ans[ind-1] = (x+'0');
                    
                }
                else {
                    cout<<ans<<endl; return;
                }
            }
        }

        else if(s[i]>s[i+1]){
        ll x = s[i]-'0';
        x--;
        ans += x + '0';
        for(ll j=i+1; j<l; j++){
            ans+='9';
        }
        if(is_sorted(ans.begin(), ans.end())){
            cout<<ans<<endl; return;
        }
        for(ll ind = i; ind>=1; ind--)
        {
            if(ans[ind]<ans[ind-1]){
                ans[ind]='9';

                ll x = ans[ind-1] - '0';
                x--;
                if(ind==1){
                    cout<<ans<<endl; return;
                }
                ans[ind-1] = (x+'0');
                
            }
            else {
                cout<<ans<<endl; return;
            }
        }
        }
        else {
            ans += s[i];
        }

    }
    ans += s[l-1];
    cout<<ans<<endl; return;    
    }
    

int main() {
    ALLAHU_AKBAR

    ll t;
    cin>>t;
   for(ll i=1; i<=t; i++){
        cout<<"Case #"<<i<<": ";
        sir();
    }
    return 0;
}
