/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Aug 20 2024 11:23:36 PM
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
    int n = s.size();
    if(n==1){
        cout<<s;
        if(s[0] == 'a') cout<<'b';
        else cout<<'a';
        cout<<endl;
        return;
    }
    else{

        for(int i=1; i<n; i++)
        {
            if(s[i]==s[i-1])
            {
                char c;
                if(s[i]=='a') c = 'b';
                else c = 'a';
                s.insert(i, 1,c);
                cout<<s<<endl;
                return;
            }
        }
        cout<<s;
        if(s[n-1]=='a') cout<<'b';
        else cout<<'a';
        cout<<endl;
    }
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
