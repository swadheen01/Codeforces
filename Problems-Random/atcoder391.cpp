/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Feb 01 2025 6:00:49 PM
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

// void sir2()
// {
//     string s; cin>>s;
//    //N, E, W, S, NE, NW, SE, SW.
//     if(s=="N") cout<<"S"<<endl;
//     else if(s=="E") cout<<"W"<<endl;
//     else if(s=="W") cout<<"E"<<endl;
//     else if(s=="S") cout<<"N"<<endl;
//     else if(s=="NE") cout<<"SW"<<endl;
//     else if(s=="SW") cout<<"NE"<<endl;
//     else if(s=="NW") cout<<"SE"<<endl;
//     else cout<<"NW"<<endl;    
// }
void sir()
{
    ll n,m; cin>>n>>m;
    vector<vector<char>>v(n,vector<char>(n));
    vector<vector<char>>c(m,vector<char>(m));
    for(ll i=0;i<n; i++)
    {
        for(ll j=0; j<n; j++) cin>>v[i][j];
    }
    for(ll i=0;i<m; i++)
    {
        for(ll j=0; j<m; j++) cin>>c[i][j];
    }
    if(m==n)
    {
        cout<<1<<" "<<1<<endl;
    }
    
    for(ll i=0; i<n;i++)
    {
        for(ll j=0; j<n; j++)
        {
            if(v[i][j]==c[0][0])
            {
                ll ii = 0, jj = 0;
                //if((i+m-1)>=(n) || (j+m-1)>=(n)) break;
                bool ok = true;
                for(ll x =i; x<n; x++,ii++)
                {
                    if(ii==m) break;
                    for(ll y=j; y<n; y++,jj++)
                    {
                        if(jj==m)  jj =0;
                        if(v[x][y] != c[ii][jj]) {ok = false; break;}
                        
                        
                    }
                   
                    if(!ok) break;
                    

                }
                if(ok){
                    cout<<i+1<<" "<<j+1<<endl;
                    return;
                }
            }
        }
    }
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
