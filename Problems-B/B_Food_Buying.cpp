#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n<10)
        {
            cout<<n<<endl;
        }
        else{
            long long m;
            m = n;
            int i = 9;
            while(i>0)
            {   
                if(m<10){
                    break;
                }else{

                n += m/10;
                m = m/10 + m%10 ;
                }
                i--;
            }
            cout<<n<<endl;
        }
        
    }
}