#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    //for (int i = t; i >= 1; i--)
    while(t--)
    {

        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << endl;
        }
        else
        {

            int d = abs(a - b);
            int ans = d / 10;
            int result;
            if (d % 10 == 0)
            {
                result = ans;
            }
            else
            {
                result = ans + 1;
            }

            cout << result << endl;
        }
    }
}