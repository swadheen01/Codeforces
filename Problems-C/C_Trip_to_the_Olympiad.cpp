/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Jan 04 2025 9:38:25 PM
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

vector<ll> db(ll num) {
    vector<ll> binary;
    //string s="";
    if (num == 0) {
        return binary;
    }
    ll i = 0;
    
    while (num > 0) {
        binary.pb(num&1);
        num = num >> 1;
        i++;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

ll bd(vector<ll> v)
{
    reverse(v.begin(),v.end());

	ll dec = 0;
	ll base = 1;
    ll x = 0;
	while (x<v.size()) {

		dec += v[x++] * base;
		base = base * 2;
	}

	return dec;
}

void sir()
{
    // ll y
    ll l,r; cin>>l>>r;
    if(l==0 && r>2){
        cout<<l+1<<" "<<r-1<<" "<<r<<endl;
        return;
    }
    else if(l==0 && r==2){
        cout<<0<<" "<<1<<" "<<2<<endl;
        return;
    }
    else if(l==0 && r==1){
        cout<<0<<" "<<0<<" "<<1<<endl;
        return;
    }
    else if(l==0 && r==0){
        cout<<0<<" "<<0<<" "<<0<<endl;
        return;
    }
    vector<ll> lv = db(l);
    vector<ll>rv = db(r);
    ll i;;
    //cout<<bd(lv)<<" "<<bd(rv)<<endl;
    for(i=0;i<lv.size(); i++){
        if(lv[i]!=rv[i]){
            i++;
            break;
        }
    }
    ll x=i;
    while(x<lv.size()){
        lv[x++]=1;
    }
    ll y = i;
    while(y<rv.size()){
        rv[y++] = 0;
    }
    ll n1 = bd(lv);
    ll n2 = bd(rv);
    ll n3;
    if(n2<r) n3 = n2+1;
    else n3 = n2-1;
    cout<<n1<<" "<<n2<<" "<<n3<<endl;
    return;

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
