#include<bits/stdc++.h>
using namespace std;

void sir2()
{
    int n,q;
    cin>>n>>q;
    long long arr[n];
    long long arr2[n] = {0};
    long long arr3[n] = {0};
    long long odd= 0;
    long long odd2 = 0;
    // long long summ1 = 0;
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
        // summ1 += arr[i];
        if(arr[i]%2 != 0){
            arr2[i] = odd + 1;
            odd = arr2[i];
        }else{
        arr2[i]= odd;
        }
    }
    for(int i = n-1; i>=0; i--)
    {
        if(arr[i]%2 != 0){
            arr3[i] = odd2 + 1;
            odd2 = arr3[i];
        } else{
        arr3[i]= odd2;
        }
    }
    // for(int i=0; i<n; i++) //checking the sum array for odd num
    // {
    //     cout<<arr2[i]<<" ";
    // }

    while(q--)
    {
        long long l,r,k,odd_num;
        cin>>l>>r>>k;

        odd_num = arr2[l-2] + arr3[r];
        long long num = (r-l + 1)*k;

        if(odd_num%2==0)
        {
            odd_num = 0;
        }
        else{odd_num = 1;}

        if((odd_num + num)%2==0)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sir2();
    }
}
        
        // if(arr[r-1]%2 ==0 && arr[l-1]==0)
        // {
        //     odd_num = arr2[r-1] - arr2[l-1];
        // }
        // else{
        //     odd_num = arr2[r-1] - arr2[l-1]+1;
        // }
        //long long odd_num = arr2[r-1] - arr2[l-1];
        
        // if(summ%2==0)
        // {
        //     if(odd_num%2==0 && (num*k)%2 != 0)
        //     {
        //         cout<<"YES"<<endl;
                
        //     }
        //     else if(odd_num%2==0 && (num*k)%2 == 0)
        //     {
        //         cout<<"NO"<<endl;
                
        //     }
        //     else if(odd_num%2 != 0 && (num*k)%2 != 0)
        //     {
        //         cout<<"NO"<<endl;
                
        //     }
        //     else if(odd_num%2 != 0 && (num*k)%2 == 0)
        //     {
        //         cout<<"YES"<<endl;
                
        //     }
        // }
        // else
        // {
        //     if(odd_num%2==0 && (num*k)%2 != 0)
        //     {
        //         cout<<"NO"<<endl;
                
        //     }
        //     else if(odd_num%2==0 && (num*k)%2 == 0)
        //     {
        //         cout<<"YES"<<endl;
                
        //     }
        //     else if(odd_num%2 != 0 && (num*k)%2 != 0)
        //     {
        //         cout<<"YES"<<endl;
                
        //     }
        //     else if(odd_num%2 != 0 && (num*k)%2 == 0)
        //     {
        //         cout<<"NO"<<endl;
               
        //     }
        // }
        //int summ = 0;
        // long long summ = summ1;
        // summ += k * (r-l+1);
        
        // for(int i = l; i<=(r/2); i++)
        // {   
        //     summ -= arr[i-1]; 1 2 3 4 5 6 7 8 9 10 11 = 66 
                            //         1 1 1               69

                            //1 2 3 4 5 6 7 8 9 10 = 55 - 12 + 3 = 56 no
                            //    1 1 1            43
        //     summ -= arr[(2*i)-1];
            
        // }

        // if(summ%2 != 0){
        //     cout<<"YES"<<endl;
        //     cout<<summ<<endl;
        //     summ = summ1;

        // }
        // else{
        //     cout<<"NO"<<endl;
        //     cout<<summ<<endl;
        //     summ = summ1;
        // }
    




// void sir()
// {
//     int n,q;
//     cin>>n>>q;
//     int arr[n];
//     for(int i=0; i<n;i++)
//     {
//         cin>>arr[i];
    
//     }
//     while(q--)
//     {
//         int l,r,k;
//         cin>>l>>r>>k;
//         int summ = 0;
//         summ += k * (r-l+1);
//         for(int i = 1; i<=n; i++)
//         {
//             if(i>=l && i<=r)
//             {continue;}
//             else{
//                 summ += arr[i-1];
//             }
//         }
//         if(summ%2 != 0){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }

//     }

// }


