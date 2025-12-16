#include <iostream>
#define ll long long
using namespace std;

int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        ll cnt = b;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            cnt += min(a - 1, x);
        }
        cout << cnt << '\n';
    }
    return 0;
}