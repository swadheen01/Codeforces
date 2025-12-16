/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Sep 20 2024 3:33:41 PM
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

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> vec(n);
    int total = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
        total += vec[i];
    }
    
    int minn = total; 

    int cnt = 1 << n;
    for (int msk = 0; msk < cnt; ++msk) {
        int subsum = 0;
        
        for (int i = 0; i < n; ++i) {
            if (msk & (1 << i)) {
                subsum += vec[i];
            }
        }

        int sum2 = total - subsum;
        
        minn = min(minn, abs(subsum - sum2));
    }

    cout << minn << endl;
    
    return 0;
}
