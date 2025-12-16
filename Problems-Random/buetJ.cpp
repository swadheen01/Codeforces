/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Oct 13 2024 3:02:03 PM
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
    unordered_map<char,pair<int,int>>sub;
    
    int t;
    unordered_set<char>sol; 
    string s;
    while(cin>>t && t !=-1)
    {
        char p; cin>>p>>s;
        if(s=="right")
        {
            if(sol.find(p)==sol.end())
            {
                sub[p].first = t;
                sol.insert(p);
            }
        }
        else{
            if(sol.find(p)==sol.end())
            {
                sub[p].second++; //wrongsub cnt
            }
        }
    }
    int ans = 0, cnt=0;
    for(auto &e : sub)
    {
        char p = e.first;
        int time = e.second.first;

        int w = e.second.second;
        if(sol.find(p) != sol.end()){
            cnt++;
            ans += (time+ (20*w));
        }
    }
    cout<<cnt<<" "<<ans<<endl;
}

int main() {
    ALLAHU_AKBAR

    ll tt = 1;
    //cin>>t;
    while(tt--)
    {
        sir();
    }
    return 0;
}
