/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Jul 06 2024 11:18:18 PM
 */
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int lo = (s[0] == 'O');
    int ll1 = (s[0] == 'L');
    //cout<<lo<<" "<<ll1<<endl;
    int o = 0, l = 0;
    for (int i = 1; i < n; i++)
    {
        o += (s[i] == 'O');
        l += (s[i] == 'L');
    }
    for (int i = 1; i < n; i++)
    {
        if (lo != o && ll1 != l)
        {
            cout << i<<"\n";
            return;
        }
        else{
            o -= (s[i] == 'O');
            l -= (s[i] == 'L');
            lo += (s[i] == 'O');
            ll1 += (s[i] == 'L');
        }
    }
    cout<<"-1\n";
    
}
int main()
{
    
    solve();

    return 0;
}
