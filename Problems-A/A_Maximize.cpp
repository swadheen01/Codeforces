#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin>>n;
        int x;
        int flag = 1;
        for(int i=2; i<=sqrt(n)+1; i++)
        {
            if(n%i==0)
            {
                x = i;
                flag = 0;
                break;
            }
        }
        if(n==2 || n==3)
        {
            cout<<1<<endl;
        }
        else if(flag == 1)
        {
            cout<<1<<endl;
        }
        else{
            cout<<n/x<<endl;
        }
        

    }
    return 0;
}
