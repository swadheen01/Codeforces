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
bool binSearch(int arr[], int n, int x) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return true;
        else if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return false;
}
void sir()
{
    // int y
    int k;
        cin >> k;

        int a[k];
        for (int i = 0; i < k; ++i)
            cin >> a[i];

        int p = k - 2;
        sort(a, a + k);

        int n = -1, m = -1;
        for (int i = 1; i * i <= p; ++i) {
            if (p % i == 0) {
                int x = i, y = p / i;
                if (binSearch(a, k, x) && binSearch(a, k, y)) {
                    n = x;
                    m = y;
                    break;
                }
            }
        }

        cout << n << " " << m << endl;
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

