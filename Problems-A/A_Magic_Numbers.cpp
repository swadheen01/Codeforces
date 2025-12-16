#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n = s.length();
    int flag = 1;
    for(int i=0; i<n; i++)
    {
        if(s[i] != '1' && s[i] != '4')
        {
            flag = 0;
            break;
        }
        // if((s[i]=='4' && s[i+1]=='4' && s[i+2]=='4') || s[i]=='4' && s[i+1]=='1' && s[i+2]=='4')
        // {
        //     flag = 0;
        //     break;
        // }
        // else{
        //     flag = 1;
        // }
        if(s[i]=='1')
        {
            if(s[i+1]=='1')
           {
            continue;
           }
           else if(s[i+1] == '4' && s[i+2]=='4' && s[i+3]=='4')
           {
            flag = 0; break;
           }
           else if(s[i+1]=='4' && s[i+2]=='4')
           {
            i+=2;
            continue;
           }
           else if(s[i+1]=='4' && s[i+2]=='1')
           {
            i+=1;
            continue;
           }
          
        //    else if(s[i+1]=='1' && s[i+2]=='4' && s[i+3]=='1')
        //    {
        //     i += 2;
        //     continue;
        //    }
        //    else if(s[i+1]=='1' && s[i+2]=='4' && s[i+3]=='4' && s[i+4]=='4')
        //    {
        //     flag = 0;
        //     break;
        //    }
        //    else if(s[i+1]='4' && s[i+2]=='1')
        //    {
        //     i++;
        //     continue;
        //    }
        //    else if(s[i+1]='4' && s[i+2]=='4' && s[i+3]=='1')
        //    {
        //     i += 2;
        //     continue;
        //    }
        }
        else{
            if(i == n-1 && n != 1)
            {
                flag = 1;
            }
            else{
                flag = 0;
                break;
            }

        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}