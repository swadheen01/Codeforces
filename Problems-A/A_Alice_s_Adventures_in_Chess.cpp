/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Nov 10 2024 10:11:11 PM
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
    
}
bool can(int a, int b, const string& s) {
    int x = 0, y = 0;
    int dx = 0, dy = 0;

    for (char ch : s) {
        if (ch == 'N') y++;
        else if (ch == 'E') x++;
        else if (ch == 'S') y--;
        else if (ch == 'W') x--;
        
        if (x == a && y == b) return true;
    }

    dx = x;
    dy = y;

    if (dx == 0 && dy == 0) return false;

    x = 0;
    y = 0;
    for (int i = 0; i < 1000; i++) {
        if (x == a && y == b) return true;
        
        for (char ch : s) {
            if (ch == 'N') y++;
            else if (ch == 'E') x++;
            else if (ch == 'S') y--;
            else if (ch == 'W') x--;

            if (x == a && y == b) return true;
        }
    }

    return false;
}
int main() {
    ALLAHU_AKBAR

    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        string s;
        cin >> n >> a >> b >> s;

        if (can(a, b, s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
