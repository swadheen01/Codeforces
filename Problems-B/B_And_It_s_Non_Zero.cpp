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
    
    char v[3][3];
    vector<string>tem;
    for(ll i=0; i<3; i++)
    {
        string x;
        cin>>x;
        tem.pb(x);
    }
    //for(auto &e:tem) cout<<e<<" ";
    for(ll i=0; i<3; i++)
    {
        for(ll j=0; j<3; j++)
        {
        
            v[i][j]=tem[i][j];
            //cout<<v[i][j];
        }
        //cout<<endl;
    }
    vector<string>rot;
    ll x = n;
    while(x--)
    {
        string s; cin>>s;
        
        if(s[0]=='1')
        {
            ll i=0, j=0;
            char a= v[i][j], b = v[i][j+1], c = v[i+1][j+1], d = v[i+1][j];
            if(s[1]=='C')
            {
                v[i][j] = d, v[i][j+1] = a, v[i+1][j+1] = b, v[i+1][j]=c;
            }
            else{
                v[i][j] = b, v[i][j+1] = c, v[i+1][j+1] = d, v[i+1][j]=a;
            }
        }
        else if(s[0]=='2')
        {
            ll i=0, j=1;
            char a= v[i][j], b = v[i][j+1], c = v[i+1][j+1], d = v[i+1][j];
            if(s[1]=='C')
            {
                v[i][j] = d, v[i][j+1] = a, v[i+1][j+1] = b, v[i+1][j]=c;
            }
            else{
                v[i][j] = b, v[i][j+1] = c, v[i+1][j+1] = d, v[i+1][j]=a;
            }
        }
        else if(s[0]=='3')
        {
            ll i=1, j=0;
            char a= v[i][j], b = v[i][j+1], c = v[i+1][j+1], d = v[i+1][j];
            if(s[1]=='C')
            {
                v[i][j] = d, v[i][j+1] = a, v[i+1][j+1] = b, v[i+1][j]=c;
            }
            else{
                v[i][j] = b, v[i][j+1] = c, v[i+1][j+1] = d, v[i+1][j]=a;
            }
        }
        else if(s[0]=='4'){
            ll i=1, j=1;
            char a= v[i][j], b = v[i][j+1], c = v[i+1][j+1], d = v[i+1][j];
            if(s[1]=='C')
            {
                v[i][j] = d, v[i][j+1] = a, v[i+1][j+1] = b, v[i+1][j]=c;
            }
            else{
                v[i][j] = b, v[i][j+1] = c, v[i+1][j+1] = d, v[i+1][j]=a;
            }
        }
    }
    for(ll i=0; i<3; i++)
    {
        for(ll j=0; j<3;j++)
        {
            cout<<v[i][j];
        }
        cout<<endl;
    }

}

int main() {

    ll t;
    cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}