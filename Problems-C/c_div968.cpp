/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Aug 25 2024 9:22:12 PM
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

const int MAX = 1e5 + 5;
int freq[26];

void make() {
    fill(freq, freq + 26, 0);
}

void cnt(const string& s) {
    for (char ch : s) {
        freq[ch - 'a']++;
    }
}

string res(int len) {
    string ans = "";
    while (ans.size() < len) {
        for (int i = 0; i < 26; i++) {
            if (freq[i]) {
                char c = i + 'a';
                ans += c;
                freq[i]--;
            }
        }
    }
    return ans;
}

void sir() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    make();
    cnt(s);
    string ans = res(n);

    cout << ans << '\n';
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
 *Created on Sun Aug 25 2024 11:49:19 PM
 */
