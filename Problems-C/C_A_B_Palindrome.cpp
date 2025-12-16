/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Feb 25 2025 12:41:19 AM
 */
#include<bits/stdc++.h>
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

void sir2()
{
    ll a,b; cin>>a>>b;
    string s; cin>>s;
    string ans = "";
    for(auto &c:s)
    {
        if(c=='0') a--;
        else if(c=='1') b--;
    }
    ll n = s.length();
    if(n==1){
        if(a>0 && b==0)
        {
            cout<<0<<endl;
            return;
        }
        else if(b>0 && a==0){
            cout<<1<<endl;
            return;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    for(ll i=0; i<(n+1)/2; i++)
    {
        if((s[i] != s[n-i-1] && s[i]!='?') && s[n-i-1] !='?')
        {
            cout<<-1<<endl;
            return;
        }
        if(s[i]=='?')
        {
            if(s[n-i-1]=='?' && (i!=(n-i-1)))
            {
                if(a<2 && b<2)
                {
                    cout<<-1<<endl;
                    return;
                }
                if(a>b) a-=2, ans+='0';
                else b-=2, ans+='1';
            }
            else if(s[n-i-1]=='0'){
                if(a>0) a--, ans+='0';
                else{
                    cout<<-1<<endl;
                    return;
                }
            }
            else{
                if(b>0) b--, ans+='1';
                else{
                    cout<<-1<<endl;
                    return;
                }
            }
        }
        else{
            if(s[i]=='0' && s[n-i-1]=='?') {
                if(a>0) a--, ans+= '0';
                else{
                    cout<<-1<<endl;return;
                }
            }
            else if(s[i]=='1' && s[n-i-1]=='?') 
            {
                if(b>0) b--, ans += '1';
                else{
                    cout<<-1<<endl;return;
                }
            }
            else if(s[i]==s[n-i-1]) ans += s[i];
            else{
                cout<<-1<<endl;
                return;
            }
        }

    }
    string ans2 = ans;
    reverse(ans2.begin(), ans2.end());
    cout<<ans;
    if(n%2){
        cout<<ans2.substr(1,((n+1)/2 -1));
    }
    else cout<<ans2<<endl;
}
void sir()
{
    ll a,b; cin>>a>>b;
    ll n = a+b;
    string s; cin>>s;
    for(ll i=0; i<n; i++) if(s[i]=='?') s[i]= s[n-i-1];
    for(auto &c:s){
        a -= (c=='0');
        b-=(c=='1');
    }
    for(ll i=0; i<=n/2; i++)
    {
        if(s[i]=='?' && i!=(n-i-1))
        {
            if(a>1){
                s[i] = '0', s[n-i-1] = '0';
                a-=2;
            }
            else if(b>1){
                s[i] = '1', s[n-i-1] = '1';
                b-=2;
            }
        }
        else if(s[i]=='?')
        {
            if(a){
                s[i] = '0';
                a--;
            }
            else if(b){
                s[i] = '1';
                b--;
            }
        }
    }
    string s2 = s;
    reverse(s2.begin(), s2.end());
    if((a==0 && b==0) && s == s2){
        cout<<s<<endl;
        return;
    }
    cout<<-1<<endl;
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
