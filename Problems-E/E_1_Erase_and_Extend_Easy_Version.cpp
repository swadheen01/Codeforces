/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Aug 07 2025 9:59:11 PM
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

string make(string s,ll k)
{
    while(s.size()<k) s+=s;
    while(s.size()>k) s.pop_back();
    return s;
}

void sir()
{
    ll n,k; cin>>n>>k;

    string s; cin>>s;

    string tem ="";
    tem.pb(s[0]);

    string ans = make(tem,k);

    char f = s[0];
    for(ll i=1; i<n; i++)
    {
        if(s[i]>s[0]) break;
        tem.pb(s[i]);
        ans = min(ans, make(tem,k));
    }
    cout<<ans<<endl;
    

}

void sirWrong4()
{
    ll n,k; cin>>n>>k;
    string s; cin>>s;

    string ans = "";
    char f = s[0];

    ans.pb(s[0]);
    for(ll i=1; i<n; i++)
    {
        if(s[i]<f) ans.pb(s[i]);
        else if(s[i]==f)
        {
            
            string tem = "";
            tem += s[i];
            ll stop = i;
            ll ind = 1;
            

            if(s[i+1]<s[0])
            {
                while(i<n)
                {
                    ans.pb(s[i]);
                    i++;
                }
            }

            else break;
        }
        else break;
    }
    ll ans_len = ans.length();
    if(ans_len>k)
    {
        cout<<ans.substr(0,k)<<endl;
        return;
    }
    while(ans_len<k)
    {
        ans += ans;
        ans_len *=2;
    }
    if(ans_len>k)
    {
        cout<<ans.substr(0,k)<<endl;
        return;
    }
    cout<<ans<<endl;
    return;
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
