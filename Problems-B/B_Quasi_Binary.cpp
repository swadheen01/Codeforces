/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Dec 03 2024 8:17:37 PM
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
    // int y
    int n;
    cin >> n;

    vector<int> ans;
    while (n > 0) {
        int c = 0;
        int mult = 1;
        int temp = n;

        while (temp > 0) {
            
            if (temp % 10 > 0) {
                
                c += mult;
                // cout<<mult<<endl;
                //cout<<c<<endl;
            }
            temp /= 10;
            mult *= 10;
        }

        ans.push_back(c);
        n -= c;
    }

    cout << ans.size() << endl;
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;
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
