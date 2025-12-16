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
       
        if(arr[i]%2==0 && summ ==0){
            even++;
        }
        else{
            summ += arr[i];
            if(summ%2==0)
            {
                even++;
                summ = 0;
            }
            

            }
    }

    if(even>0 && summ==0){
        cout<<even<<endl;
    }
    else{
        cout<<-1<<endl;
    }

    return 0;
}
