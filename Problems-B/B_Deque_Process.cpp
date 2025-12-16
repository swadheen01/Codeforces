/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Jul 27 2025 9:42:03 PM
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

// bool check(vector<ll>& v) {
//     int inc = 1, dec = 1;
//     for (int i = 1; i < v.size(); i++) {
//         if(v[i] >= v[i - 1]) {
//             inc++;
//         }
//         else{
//             inc = 1;
//         }

//         if(v[i] <= v[i - 1]) {
//             dec++;
//         } else {
//             dec = 1;
//         }
//         if(inc >= 5 || dec >= 5) return false;
//     }
//     return true;
// }


// void sir2()
// {
//     ll n; cin>>n;
//     vector<ll>a(n);
//     for(auto &e:a) cin>>e;

//     vector<string>st;

//     for(ll i=1; i<=400; i++)
//     {
//         string tem = "";
//         for(ll j=0; j<n; j++)
//         {
//             if(rand()%2) tem.pb('L');
//             else tem.pb('R');
//         }
//         st.pb(tem);
//     }
//     vector<vector<ll>> vv;
//     for(auto &s:st)
//     {
//         vector<ll>temp;
//         ll l = 0, r = n-1;
//         for(ll i=0; i<n; i++)
//         {
//             if(s[i]=='L') temp.pb(a[l++]);
//             else temp.pb(a[r--]);
//         }
//         vv.pb(temp);
//     }
//     for(ll i=0;i<vv.size(); i++)
//     {
//         if(check(vv[i]))
//         {
//             cout<<st[i]<<endl;
//             return;
//         }
//     }
// }
void sir()
{
    ll n;cin>>n;
    vector<ll>v(n); for(auto &e:v) cin>>e;

    string ans;
    ans.pb('L');
    ll i=1, j = n-1; ll last = v[0];
    while(i<j && i<n)
    {
        if(v[i]<last && v[j]<last)
        {
            if(v[i]<v[j])
            {
                ans.pb('L');
                ans.pb('R');
                last = v[j];
            }
            else{
                ans.pb('R');
                ans.pb('L');
                last = v[i];
            }
        }
        else
        {
            if(v[i]<v[j])
            {
                ans.pb('R');
                ans.pb('L');
                last = v[i];
            }
            else{
                ans.pb('L');
                ans.pb('R');
                last = v[j];
            }
        }
        i++, j--;
  
    }
    if(!(n&1))
    {
        ans.pb('R');
    }
    cout<<ans<<endl;
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
