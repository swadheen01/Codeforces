/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Oct 13 2024 2:14:50 PM
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
    // int n; cin>>n;
    // string s; cin>>s;
    // for(int i=1; i<s.length(); i++)
    // {
    //     if (stoi(s.substr(i, 1)) < stoi(s.substr(i-1, 1)))
    //     {
    //         cout<<"No"<<endl;return;
    //     }
    // }
    // cout<<"Yes"<<endl;
    int n;
    string s;
    cin >> n >> s;
    
    string main = s;
    bool ugly = false;

    for (int i = 1; i < n; ++i) {
        // string shift = s.substr(i,n);
        if (s[i] < s[0]) {
            ugly = true;
            break;
        }
        if(s[i]==s[0])
        {
            int x = 0;
            while(s[(i+x)%n]==s[x]){
                x++;
            }
            if(s[(i+x)%n]<s[x]){
                ugly=true; break;
            }
            i+=x;
        }
    }
    
    cout << (ugly ? "No" : "Yes") << endl;
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
