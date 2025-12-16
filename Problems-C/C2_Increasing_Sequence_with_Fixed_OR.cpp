/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jul 15 2024 9:20:38 PM
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
    int number;
    cin >> number;
    int len = 0;
    vector<int> sequence;
    vector<int> bitPositions;
    for (int i = 0; i < 61; i++) {
        if (number & (1LL << i)) {
            len++;
            bitPositions.push_back((1LL << i));
        }
    }
    len++;
    sequence.push_back(number);
    for (auto bitPosition : bitPositions) {
        if (number - bitPosition > 0) {
            sequence.push_back(number - bitPosition);
        }
    }

    reverse(sequence.begin(), sequence.end());
    cout << sequence.size() << endl;
    for (auto element : sequence) {
        cout << element << " ";
    }
    cout << endl;
    
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
