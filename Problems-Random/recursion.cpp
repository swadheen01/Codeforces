/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Feb 28 2025 2:25:23 AM
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

void create(int N, string word, int cnt) {
    if (word.length() == N) {
        if (cnt >= 2) {
            cout << word << endl;
        }
        return;
    }

    for (char ch = 'a'; ch <= 'z'; ch++) {
        create(N, word + ch, cnt+(ch == 'a'));
    }
}


int main() {
    ALLAHU_AKBAR

    int N;
    cin >> N;

    create(N, "", 0);
    return 0;
}
