/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Sep 10 2024 11:34:18 PM
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

void sir2()
{
    int n,m; cin>>n>>m;
    vector<pair<string,string>>vp(m);
    for(int i=0; i<m; i++)
    {
        string s,ss; cin>>s>>ss;
        vp[i] = make_pair(s,ss);
    }
    vector<string>v(n);
    for(int i=0; i<n; i++)
    {
        string s; cin>>s;
        v[i] = s;
        
    }
    vector<string>ans(n);
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            if(vp[j].first == v[i] || vp[j].second == v[i])
            {
                int s1 = (vp[j].first).size();
                int s2 = (vp[j].second).size();

                if(s1<=s2) ans.pb(vp[j].first);
                else ans.pb(vp[j].second);
                break;
            }
        }
    }
    for(int i=n-1; i>=0; i--)
    {
        cout<<ans[i]<<" ";
    }cout<<endl;
}

void sir()
{
    int n, m;
    cin >> n >> m;
    
    unordered_map<string, string> word_map;

    for (int i = 0; i < m; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        if (s1.size() <= s2.size()) {
            word_map[s1] = s1;
            word_map[s2] = s1;
        } else {
            word_map[s1] = s2;
            word_map[s2] = s2;
        }
    }

   
    vector<string> ans(n);
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        ans[i] = word_map[word];
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
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
