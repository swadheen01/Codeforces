/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jul 22 2024 3:11:53 AM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2*(acos(0.0))
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pb push_back
#define endl "\n"
#define lcm(a,b) (a*b)/(__gcd<ll>(a,b))
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

//int div(char s[], char)

void sir()
{
    //cout<<"Enter the Whole Operation: "<<endl;
    string s;
    cin>>s;
    //for_div
    int n = s.length();
    char sn[1000];

    int ind = 0;
    for(int i=0; i<n;i++)
    {
        if(s[i]=='/')
        {
            int div = (s[i-1] - '0')/(s[i+1]-'0');

            if(div>=10)
            {
                vector<int>v;
                while(div>=10)
                {
                    int dig = div%10;
                    div/=10;
                    v.pb(dig);
                }
                v.pb(div);

                ind -= 1;

                for(int i= v.size()-1; i>=0; i--)
                {
                    sn[ind] = v[i] + '0';
                    ind++;
                }

            }
            //Jodi 10 er boro na hoy
            else{
                sn[ind-1] = div + '0';  //here is the problem
            }
            
            i++;    //divide er pore ek number pore jawa lagbe
        }
        //divide na hole
        else{
            sn[ind++] = s[i];
        }
        
    }
    printf("%s\n",sn);
    //cout<<sn<<endl;

    char sn2[n];
    int ind2 = 0;
    ll mult;
    for(int i=0; i<n; i++)
    {
        if(sn[i]=='*')
        {
            if(sn[i-2]=='*')
            {
                mult = (sn2[ind2-1] - '0') * (sn[i+1]-'0');
                if(mult>=10){

                    vector<int>v;
                    while(mult>=10)
                    {
                        int dig = mult%10;
                        mult/=10;
                        v.pb(dig);
                    }
                    v.pb(mult);

                    ind2 -= 1;

                    for(int i=v.size()-1; i>=0; i--)
                    {
                        sn2[ind2] = v[i] + '0';
                        ind2++;
                    }
                    i++;

                }
                
                else sn2[ind2-1] = mult + '0';  // mult jodi 10 er boro na hoy
    
            }
            
            else{   //jodi continuous * na thake
    
                mult = (sn[i-1] - '0')*(sn[i+1]-'0');
                sn2[ind2-1] = mult + '0';
            }
            
            i++;
        }
        else{
            sn2[ind2++] = sn[i];
        }
    }
    

    printf("%s\n",sn2);
    //cout<<sn2<<endl;
    
    

}

int main() {
    //ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
