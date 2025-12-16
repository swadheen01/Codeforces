#include <iostream>
#include<vector>
using namespace std;
int main()
{   
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n,p,q;
        cin>>n>>p>>q;
        vector<int>ew(n);
        for(int i = 0; i<n; i++){
            cin>>ew[i];
        }
        int egg = 0;
        int w = 0;

        for(int i=0; i<n; i++)
        {
            if(egg<p && w + ew[i] <= q)
            {
                egg++;
                w += ew[i];
            }
            else
            {
                break;
            }
        }
        cout << "Case " << i << ": " << egg << endl;
    }
    return 0;
}

