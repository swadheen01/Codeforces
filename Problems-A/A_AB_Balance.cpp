/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Sep 06 2024 11:53:53 PM
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
    string s; cin>>s;
    int cab = 0;
    int cba = 0;
    int n = s.size();
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]=='a' && s[i+1]=='b')
        {
            cab++;
            
        }
        if(s[i]=='b' && s[i+1]=='a')
        {
            cba++;
    
        }
    }
    //cout<<cab<<" "<<cba<<endl;
    if(cab==cba){
        cout<<s<<endl;
        return;
    }
    if(cab>cba)
    {
        int d = cab-cba;
        while(d)
        {
            for(int i=0;i<n-1; i++)
            {
                if(s[i]=='a'&& s[i+1]=='b')
                {
                    if(i != 0 && s[i-1]=='b'){
                        s[i]='b'; break;}
                    else{
                        s[i] = 'a';
                        break;
                    }
                }
            }
            d--;
        }
        cout<<s<<endl;
        return;
    }
    else
    {
        int d = cba-cab;
        while(d)
        {
            for(int i=0;i<n-1; i++)
            {
                if(s[i]=='b'&& s[i+1]=='a')
                {
                    if(i != 0 && s[i-1]=='a'){
                        s[i]='a'; break;}
                    else{
                        s[i] = 'b';
                        break;
                    }
                }
            }
            d--;
        }
        cout<<s<<endl;
        return;
    }
}
void solve()
{
    string s; cin>>s;
    int n = s.size();
    n--;
    if(s[0]=='a' && s[n] != 'a') s[n] = 'a';
    if(s[0]=='b' && s[n] != 'b') s[n] = 'b';

    cout<<s<<endl;
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        //sir();
        solve();
    }
    return 0;
}
