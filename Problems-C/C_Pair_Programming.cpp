/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Oct 22 2024 11:19:32 PM
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
    int k,n,m; cin>>k>>n>>m;

    vector<int>a(n),b(m);
    for(int i=0; i<n;i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];

    vector<int>ans;

    int i=0,j=0;

    while(i<n || j<m)
    {
        if(i<n && j<m){
            if(a[i]==0) ans.pb(0), i++, k++;
            else if(b[j]==0) ans.pb(0), j++, k++;
            else{
                if(a[i]<b[j] && a[i]<=k) ans.pb(a[i]), i++;
                else if(b[j]<=a[i] && b[j]<=k) ans.pb(b[j]), j++;
                else{
                    cout<<-1<<endl;
                    return ;
                }
            }
        }
        else if(i<n){
            if(a[i]==0) ans.pb(a[i]), i++, k++;
            else{
                if(a[i]<=k) ans.pb(a[i]), i++;
                else{
                    cout<<-1<<endl;
                    return;
                }
            }
        }
        else if(j<m)
        {
            if(b[j]==0) ans.pb(0), j++, k++;
            else{
                if(b[j]<=k) ans.pb(b[j]), j++;
                else{
                    cout<<-1<<endl;
                    return;
                }
            }
        }
    }
    for(auto e:ans)
    {
        cout<<e<<" ";
    }cout<<endl;
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
