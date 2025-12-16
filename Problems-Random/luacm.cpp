/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Nov 20 2024 12:49:12 AM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll int
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
    //int, long long, char, float and double
    int a; long long b; char c; float d; double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl;
    
}
void sir2()
{
    ll a,b,c,d; cin>>a>>b>>c>>d;
    cout<<"Difference = "<<(a*b)-(c*d)<<endl;
}
void sir3()
{
    ld r; cin>>r;
    ld ans = 3.141592653 * r * r;
    cout<<fixed<<setprecision(9)<<ans<<endl;
}
void sirE()
{
    ll n; cin>>n;
    ll ans = ((1+n)*n)/2;
    cout<<ans<<endl;
}
void sirL()
{
    ll n; cin>>n;
    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for(ll j=1; j<=2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(ll i=n; i>=1; i--)
    {
        for(ll j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for(ll j=1; j<=2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void sirM()
{
    ll a,b; cin>>a>>b;
    vector<string>v;
    for(ll k=a; k<=b; k++)
    {
        string s = to_string(k);
        ll ok = 1;
        //cout<<s<<endl;
        for(ll i=0; i<s.length(); i++)
        {
            if(s[i]=='4'|| s[i]=='7'){
                ok = 1;
            }
            else{ok = 0; break;}
        }
        
        if(ok) v.pb(s);
    }
    if(v.size()==0) cout<<-1<<endl;
    else{
        for(auto e:v) cout<<e<<" "; cout<<endl;
    }
}
void sirD()
{
    ll n; cin>>n;
    ll a = n/365; n%=365;
    ll m = n/30; n%=30;
    cout<<a<<" years"<<endl<<m<<" months"<<endl<<n<<" days"<<endl;
}
void sirF()
{
    ll a,b,c,d; cin>>a>>b>>c>>d;
    ll ans =((a%100)*(b%100)%100 * (c%100)%100 * (d%100)%100)%100;
    if(ans<10) cout<<'0'<<ans<<endl;
    else cout<<ans<<endl;

}
void sirG()
{
    ll a,b,c; cin>>a>>b>>c;
    cout<<min(a,(min(b,c)))<<" "<<max(a,max(b,c))<<endl;
}
void sirH()
{
    double a,b; cin>>a>>b;
    if(a==0 && b==0){
        cout<<"Origem"<<endl;
        return;
    }
    else if(a==0){
        cout<<"Eixo Y"<<endl;
        return;
    }
    else if(b==0){
        cout<<"Eixo X"<<endl;
        return;
    }
    else{
        if(a>0 && b>0) cout<<"Q1"<<endl;
        else if(a<0 && b>0) cout<<"Q2"<<endl;
        else if(a<0 && b<0) cout<<"Q3"<<endl;
        else cout<<"Q4"<<endl;
        return;
    }
}
void sirI()
{
    ll a,b,c; cin>>a>>b>>c;
    cout<<min(a,min(b,c))<<endl;
    cout<<(a+b+c)-max(a,max(b,c))-min(a,min(b,c))<<endl;
    cout<<max(a,max(b,c))<<endl;

    cout<<endl;
    cout<<a<<endl<<b<<endl<<c;
}
void sirJ()
{
    int a, b, c;
    char s, q;

    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);

    int ans;
    if (s == '+') {
        ans = a + b;
    } else if (s == '-') {
        ans = a - b;
    } else if (s == '*') {
        ans = a * b;
    }

    if (ans == c) {
        cout << "Yes" << endl;
    } else {
        cout << ans << endl;
    }
    
}
void sirK()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

}
int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        //sir();
        //sir2();
        //sir3();
        //sirE();
        //sirL();
        //sirM();
        //sirD();
        //sirF();
        //sirG();
        //sirH();
        //sirI();
        //sirJ();
        sirK();
    }
    return 0;
}
