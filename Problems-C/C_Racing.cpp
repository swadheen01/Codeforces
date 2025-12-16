/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat May 24 2025 8:57:21 PM
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
   
    ll n; cin>>n; 
    vector<ll>d(n); for(auto &e:d) cin>>e;

    ll pres = 0;
    ll ind = 0;
    vector<pair<ll,ll>>lr;
    ll mx=-1;
    ll mn = -1;
    for(int i=0; i<n; i++)
    {
        ll aa,bb; cin>>aa>>bb;
        lr.pb({aa,bb});
        mx = bb; mn=aa;
    }
    //for(auto e:lr) cout<<e.first<<endl;
    ll one = 0; for(auto e:d) one +=(e==1);
    for(ll x =0; x<n; x++)
    {
        ll l = lr[x].first; ll r = lr[x].second;
        if(d[ind]==0)
        {
            if(pres>=l && pres<=r)
            {
                ind++;
            }
            else{
                cout<<-1<<endl;
                return;
            }
        }
        else if(d[ind]==1)
        {
            pres++; one--;
            if(pres>=l && pres<=r)
            {
                ind++;
            }
            else{
                cout<<-1<<endl;
                return;
            }
        }
        else{   //-1

            // if(pres>=l && pres<=r)
            // {
            //     d[ind]=0;
            //     ind++;
            // }
            // else{
                bool pl = false;
                if(one+pres+1<=mx || one+pres+1>=mn) pres++, pl = true;
                
                if(pres>=l && pres<=r)
                {
                    d[ind++]=1;
                }
                else if(pres>r)
                {
                    if(pl){pres--; d[ind++]=0;}
                    else d[ind++]=0;
                }
                else{
                    cout<<-1<<endl;
                    return;
                }
            }
        
    }
    for(ll i=0; i<d.size(); i++) cout<<d[i]<<" ";cout<<endl;
}
void sirTutorial()
{
    ll n; cin>>n;
    vector<ll>d(n); for(auto &e:d) cin>>e;
    vector<ll>l(n), r(n);
    for(ll i=0; i<n; i++) cin>>l[i]>>r[i];
    ll mn = 0,mx = 0;
    bool check = true;
    for(ll i=0; i<n; i++){

        if(d[i]==-1) mx++;
        else{
            mx+= d[i];
            mn += d[i];
        }
        if(mx<l[i]||mn>r[i])
        {
            check = false; break;
        }
        mx = min(mx, r[i]);
        mn = max(mn,l[i]);
        //check = mn<=mx;
    }

    if(!check)
    {
        cout<<-1<<endl;
        return;
    }
    stack<ll>st;

    ll ht = 0;
    for(ll i=0; i<n; i++)
    {
        if(d[i] != -1) ht += d[i];
        else
        {
            st.push(i);
            d[i] = 0;
        }
        while(ht<l[i])
        {
            ll ind = st.top();
            st.pop();
            ht++;
            d[ind] = 1;
        }
        
    }
    for(auto &e:d) cout<<e<<" "; cout<<endl;

}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sirTutorial();
    }
    return 0;
}
