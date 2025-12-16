#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string a;
        cin >> a;
        int zer=0;int one = 0;
        for(int i =0; i<n; i++)
        {   
        if(a[i]=='0'){
        zer += 1;
        } else{
        one += 1;
        }    
            
        }

        if(one>=zer){
            for(int i = 0; i<(1+n/2); i++)
            {
                if(a[i]=='1')
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
        else{
            for(int i = n-1; i>=0; i--)
            {
                if(a[i]=='0')
                {
                    cout<<i<<endl;
                    break;
                }
            }

        }
        
        
    }
    return 0;
}
