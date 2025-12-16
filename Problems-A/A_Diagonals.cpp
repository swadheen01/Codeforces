#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define pie 2*(acos(0.0))
#define yes cout<<"YES\n"
#define no_msg cout<<"NO\n" // Renamed this to avoid conflict
#define pb push_back
#define endl "\n"
#define lcm(a,b) (a*b)/(__gcd<ll>(a,b))
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

void sir()
{
    ll a,b;
    cin>>a>>b;
    ll p = a;
    ll diagonal = 1+((a-1)*2);
    bool ok = false, nono = false;
    ll i=0;
    while(b>0){
        if(ok==false){
            b-=a;
            a--;
            ok=true;
        }
        else if(nono==false){ 
            b-=a;
            nono=true;            
        }
        else if(nono==true){
            b-=a;
            a--;
            nono=false;
        }
        i++;
    }
    cout<<i<<endl;
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
