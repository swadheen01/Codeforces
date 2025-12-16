/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon May 26 2025 11:17:39 PM
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

void sir1()
{
    // int y
    ll n; cin>>n;
    vector<ll>x(n), y(n),xx(n),yy(n);
    map<ll,ll>mx,my;
    for(ll i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
        xx[i]=x[i], yy[i]=y[i];
        mx[x[i]]++, my[y[i]]++;
    }
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    rsrt(xx); rsrt(yy);

    ll ans = 1e18;
    ll mxx = xx[0], mnx = xx[n-1], mxy = yy[0], mny = yy[n-1];
    ll a = mxx, b = mnx, c = mxy, d = mny;
    cout<<mxx<<" "<<mnx<<" "<<mxy<<" "<<mny<<endl;
    for(ll i=0; i<n; i++)
    {
        if(x[i]==mxx && mx[mxx]==1) mxx = xx[1];
        if(x[i]==mnx && mx[mnx]==1) mnx = xx[n-2];
        if(y[i]==mxy && my[mxy]==1) mxy = yy[1];
        if(y[i]==mny && my[mny]==1) mny = yy[n-2];
        cout<<"HI "<<i+1<<" ";
        cout<<mxx<<" "<<mnx<<" "<<mxy<<" "<<mny<<endl;
        ll r = (mxx-mnx+1);
        ll c= (mxy-mny+1);
        ll ar = r*c;
        if(ar==n-1) ar+=(min(r,c));
        ans = min(ans,ar);
        mxx = a, mnx = b, mxy = c, mny = d;
    }
    //cout<<ans<<endl;
}
void sir2()
{
    ll n; cin>>n;
    vector<ll>x(n), y(n);
    map<ll,ll>mx,my;

    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    for(ll i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
        mx[x[i]]++;
        my[y[i]]++;
    }
    rsrt(x); rsrt(y);

    ll xcnt = mx.size();
    ll ycnt = my.size();
    ll ans1=-1; ll ans2=-1;
    for(auto [a,b]:mx)
    {
        if(b==1)
        {
            xcnt--;
            if(a<y[0]) ans1 = xcnt*y[0];
            else {
                ans1 = xcnt * (y[0]+1);
            }
            break;
        }
    }
    if(ans1<0)
    {
        ans1 = xcnt*y[0];
    }
    for(auto [a,b]:my)
    {
        if(b==1)
        {
            ycnt--;
            if(a<x[0]) ans2 = ycnt*x[0];
            else {
                ans2 = ycnt * (x[0]+1);
            }
            break;
        }
    }
    if(ans2<0)
    {
        ans2 = ycnt*x[0];
    }
    cout<<min(ans1,ans2)<<endl;

}
void sir()
{
    ll n; cin>>n;
    vector<ll>x(n), y(n);
    map<ll,ll>mx,my;
    for(ll i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
        mx[x[i]]++, my[y[i]]++;
    }
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    multiset<ll>xx, yy;
    for(auto e:x) xx.insert(e);
    for(auto a:y) yy.insert(a);

    ll mnx, mxx, mny, mxy;
    ll ans = 1e18;
    for(ll i=0; i<n; i++)
    {
        ll a = x[i], b = y[i];
        xx.erase(xx.find(a)); yy.erase(yy.find(b));
        mnx = *xx.begin(); mxx = *xx.rbegin();
        mny = *yy.begin(); mxy = *yy.rbegin();

        ll r = (mxx-mnx+1);
        ll c= (mxy-mny+1);
        ll ar = r*c;
        if(ar==n-1) ar+=(min(r,c));
        ans = min(ans,ar);
        xx.insert(a), yy.insert(b);
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
