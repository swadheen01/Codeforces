/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Oct 25 2024 2:58:06 PM
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
    int a,b; cin>>a>>b;
    cout<<max((a+b), max((a-b), (a*b)));
}
bool solve(const vector<int>& vec) {
    int n = vec.size();
    unordered_map<int, pair<int, int>> xmp;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int cur = vec[i] ^ vec[j];
            if (xmp.count(cur)) {
                int x = xmp[cur].first;
                int y = xmp[cur].second;
                if (x < i && y < j) {
                    return true;
                }
            } else {
                xmp[cur] = {i, j};
            }
        }
    }
    return false;
}
void sir2()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    cout << (solve(vec) ? "Yes" : "No") << endl;

}
int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        sir2();
    }
    return 0;
}
