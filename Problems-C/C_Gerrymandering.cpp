/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Oct 14 2024 2:56:58 AM
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
    ll n;
    cin >> n; 

    string s1, s2;
    cin >> s1 >> s2; 

    ll win = 0;

    for (ll i = 0; i < n; i += 3) {
        ll ac = 0;
        if (s1[i] == 'A') ac++;
        if (s1[i+1] == 'A') ac++;
        if (s1[i+2] == 'A') ac++;
        if (s2[i] == 'A') ac++;
        if (s2[i+1] == 'A') ac++;
        if (s2[i+2] == 'A') ac++;

        if (ac >= 4) {
            win += 2; 
        } else if (ac >= 2) {
            win += 1; 
        }
    }

    cout << win << endl;
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin >> t;
    while (t--) {
        sir();
    }

    return 0;
}
/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Oct 14 2024 2:56:58 AM
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

// Function to compute maximum districts Álvaro can win
void sir() {
    ll n;
    cin >> n;
    
    string s1, s2;
    cin >> s1 >> s2;
    
    // DP table to store maximum number of votes Álvaro can secure till column i
    vector<ll> dp(n + 1, 0);

    // Process every group of 3 columns
    for (ll i = 3; i <= n; i += 3) {
        // Count how many houses in these 6 cells vote for Álvaro ('A')
        ll alvaroCount = 0;
        for (ll j = i - 3; j < i; ++j) {
            if (s1[j] == 'A') alvaroCount++;
            if (s2[j] == 'A') alvaroCount++;
        }

        // If 4 or more houses vote for Álvaro, he wins 2 votes, otherwise 1 or 0
        if (alvaroCount >= 4) {
            dp[i] = dp[i - 3] + 2;
        } else if (alvaroCount >= 2) {
            dp[i] = dp[i - 3] + 1;
        } else {
            dp[i] = dp[i - 3];  // No new district won
        }
    }
    
    // The last dp[n] will give the maximum number of votes Álvaro can secure
    cout << dp[n] << endl;
}

int main() {
    ALLAHU_AKBAR

    ll t;
    cin >> t;
    while (t--) {
        sir();
    }

    return 0;
}
