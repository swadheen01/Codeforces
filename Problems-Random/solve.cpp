#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) 
    {   //space
        for(int j=1;j<=n-i;j++)
            {
                cout<<" ";
            }
        
        for (int k = 1; k <= 2*i-1; k++)
        {   //devide line
            if(i==n/2+1)
        {
            if(k==1 || k==2*i-1)
            {
                cout<<"#";
            }else
            {
                cout<<"-";
            }
        }else
        {   //others line
            if(k==1 || k==2*i-1)
            {
                cout<<"#";
            }else{
                cout<<" ";
            }

        }
        }                        
            
        cout << endl;
    }
   
    return 0;
}
