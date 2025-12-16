/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Nov 14 2024 7:34:41 PM
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

void stackway()
{
    string s;
    getline(cin, s);
    int n = s.length();
    stack<pair<int,char>>up;
    stack<pair<int,char>>sm;

    for(int i=0; i<n; i++)
    {
        if(s[i]>='A'&& s[i]<='Z'){
            if(s[i]=='B'){
                if(!up.empty()) up.pop();
                else continue;
            }
            else up.push({i,s[i]});
        }
        else{
            if(s[i]=='b'){
                if(!sm.empty()) sm.pop();
                else continue;
            }
            else sm.push({i,s[i]});
        }
    }
    vector<pair<int,char>>v;
    while(!up.empty())
    {
        v.pb({up.top().first,up.top().second});
        up.pop();
    }
    while(!sm.empty())
    {
        v.pb({sm.top().first,sm.top().second});
        sm.pop();
    }
    srt(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].second;
    }cout<<endl;
    
}
void normalway()
{
    string s;
    getline(cin,s);

    int n = s.length();
    int b = 0, B = 0;
    string ans;
    for(int i=n-1; i>=0; i--)
    {
        if(s[i]=='B') B++;
        else if(s[i]=='b') b++;
        else if(s[i]>='A'&& s[i]<='Z'){
            if(B==0) ans.pb(s[i]);
            else B--;
        }
        else {
            if(b==0) ans.pb(s[i]);
            else b--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;
}
int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    cin.ignore(); 
    while(t--)
    {
        //stackway();
        normalway();
    }
    return 0;
}
