/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Sep 08 2024 11:04:55 PM
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

void sir2()
{
    ll x1,p1; cin>>x1>>p1;
    ll x2, p2; cin>>x2>>p2;

    x1 = x1 * pow(10, p1);
    x2 = x2 * pow(10, p2);

    cout<<x1<<" "<<x2<<endl;
    if(x1>x2) cout<<">"<<endl;
    else if(x1 == x2) cout<<"="<<endl;
    else cout<<"<"<<endl;
}
void sir()
{
    int x1, p1, x2, p2;
    cin >> x1 >> p1;
    cin >> x2 >> p2;

    
    int len1 = to_string(x1).length() + p1;
    int len2 = to_string(x2).length() + p2;


    if (len1 > len2) {
        cout << ">" << endl;
    } else if (len1 < len2) {
        cout << "<" << endl;
    } else {
        
        while (to_string(x1).length() < to_string(x2).length()) {
            x1 *= 10;
        }
        while (to_string(x2).length() < to_string(x1).length()) {
            x2 *= 10;
        }

        if (x1 > x2) {
            cout << ">" << endl;
        } else if (x1 < x2) {
            cout << "<" << endl;
        } else {
            cout << "=" << endl;
        }
    }
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
