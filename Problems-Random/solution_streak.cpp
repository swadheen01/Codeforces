#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int mah[7][m];
    int noy[7][n];
    for(int i=0; i<7; i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mah[i][j];
        }
    }
    for(int i=0; i<7; i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>noy[i][j];
        }
    }
    int noyon_st =0;
    int mahfuj_st =0;

    int noy_solve = 0;
    int mah_solve = 0;

    int max_mah_st = 0;
    int max_noy_st = 0;

    int max_mah_solve = 0;
    int max_noy_solve = 0;

    for(int j=0; j<m;j++)
    {
        for(int i=0; i<7; i++)
        {
            if(mah[i][j]>0){
                mahfuj_st++;
                mah_solve += mah[i][j];
                if(mahfuj_st >= max_mah_st)
                {
                    max_mah_st = mahfuj_st;  
                    max_mah_solve = max(max_mah_solve, mah_solve); 
                }
                
            }else{
                mahfuj_st = 0;
                mah_solve = 0;
            }
        }
    }
    for(int j=0; j<n;j++)
    {
        for(int i=0; i<7; i++)
        {
            if(noy[i][j]>0){
                noyon_st++;
                noy_solve += noy[i][j];
                if(noyon_st >= max_noy_st)
                {
                    max_noy_st = noyon_st;  
                    max_noy_solve = max(max_noy_solve,noy_solve); 
                }
                
            }else{
                noyon_st = 0;
                noy_solve = 0;
            }
        }
    }
    if(max_noy_st>max_mah_st)
    {
        cout<<"Nayon is the boss"<<endl;
    }
    else if(max_mah_st>max_noy_st)
    {
        cout<<"Mahfuz is the boss"<<endl;
    }
    else{
        if(max_noy_solve>max_mah_solve)
        {
            cout<<"Nayon is the boss"<<endl;
        }
        else if(max_mah_solve>max_noy_solve)
        {
            cout<<"Mahfuz is the boss"<<endl;
        }
        else
        {
            cout<<"No one is the boss"<<endl;
        }
    }
    return 0;

}