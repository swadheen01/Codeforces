/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Nov 29 2024 11:24:38 AM
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
    ll n; cin>>n;
    string s; cin>>s;
    //string s = to_string(n);
    string x = "9";
    string ans = "";
    if(s[0]=='9') {
        x = "1";
        n++;
        while(n--) ans+=x;
    }
    else {
        while(n--)
        {
            ans+=x;
        }
    }
    string res = "";
    int flag = 0;
    ll ind = s.length()-1;
    if(ans[0]=='1')
    {
        for(ll i=ans.length()-1; i>=1; i--)
        {
            ll a = ans[i] -'0'; ll b = s[ind--]-'0';
            if(flag) {b += 1; flag = 0;}
            
            if(a<b){
                a += 10; flag = 1;
            }
            res += (a-b)+'0';
        }
        reverse(res.begin(), res.end());
    }
    else{
        for(ll i=0; i<ans.length(); i++)
        {
            res += ((ans[i]-'0')-(s[i]-'0') + '0');
        }
    }
    
    cout<<res<<endl;
    
}
void sir2()
{
    ll n; cin>>n;
    vector<ll>v(n);
    map<int,int>mp;
    for(auto &a:v) 
    {
        cin>>a;
        mp[a]++;
    }

    

}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sir2();
    }
    return 0;
}
