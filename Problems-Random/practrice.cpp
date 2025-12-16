// Author: Shawn Das Shachin-->(shawn_das)
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;
using ld = long double;
#define pb push_back
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define OPTIMIZE_IO ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(){
    int n;
    cin >> n;
    vector<int> v(3 * n);

    for (auto &score : v)
        cin >> score;

    sort(v.rbegin(), v.rend());

    int s = 0;
    for (int i = 1; i <= 2 * n; i += 2) {
        s += v[i];
    }

    cout << s << endl;
        

}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
