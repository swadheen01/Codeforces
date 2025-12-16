/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Sep 20 2024 3:11:44 PM
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
    string s,t; cin>>s>>t;
    set<pair<char,char>>st;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] != t[i]){
            char l = min(s[i], t[i]);
            char h = max(s[i], t[i]);
            st.insert({l,h});
        }
    }
    map<char,set<char>>mp;
    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]].insert(t[i]);
        if(mp[s[i]].size()>1)
        {
            cout<<-1<<endl;return;
        }
    }
    map<char,set<char>>mp2;
    for(int i=0; i<s.size(); i++)
    {
        mp[t[i]].insert(s[i]);
        if(mp[t[i]].size()>1)
        {
            cout<<-1<<endl;return;
        }
    }
    if(st.size()==0) {cout<<0<<endl;return;}
    vector<char>v1,v2;
    for(auto pair: st)
    {
        v1.push_back(pair.first);
        v2.push_back(pair.second);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for(int i=0; i<v1.size()-1; i++)
    {
        if(v1[i]==v1[i+1])
        {
            cout<<-1<<endl;
            return;
        }
    }
    for(int i=0; i<v2.size()-1; i++)
    {
        if(v2[i]==v2[i+1])
        {
            cout<<-1<<endl;
            return;
        }
    }
    set<char>big;
    for(int i=0; i<v1.size(); i++)
    {
        big.insert(v1[i]);
        big.insert(v2[i]);
    }
    if(big.size() != (v1.size()+v2.size()))
    {
        cout<<-1<<endl;
        return;
    }
    cout<<st.size()<<endl;
    // for(int i=0; i<v1.size(); i++)
    // {
    //     cout<<v1[i]<<" "<<v2[i]<<endl;
    // }
    for(auto pair: st)
    {
        cout<<(pair.first)<<" "<<(pair.second)<<endl;
    }

}

int main() {
    ALLAHU_AKBAR

    ll ttt = 1;
    ///cin>>t;
    while(ttt--)
    {
        sir();
    }
    return 0;
}
