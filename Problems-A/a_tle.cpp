#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n ;

    int arr[n];
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int even = 0;
    int odd =0;
    int summ = 0;
    for(int i=0; i<n; i++)
    {   
       if(arr[i]%2!=0 ){
            odd++;    
        }
    }
    if(odd%2 != 0)
    {
        cout<<-1<<endl;
    }
    else{
        odd = 0;
        for(int i =0; i<n; i++)
        {
            if(arr[i]%2==0 && odd == 0){
                even++;
            }
            else if(arr[i]%2==0 && odd == 1){
                continue;
            }
            else if(arr[i]%2 != 0 && odd==1)
            {
                even++;
                odd = 0;
            }
            else{
                odd++;
                
            }
        }
        cout<<even<<endl;
    }

    return 0;
}
