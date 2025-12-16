#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void sir()
{
    int n,k; cin>>n>>k;
    multiset<long long>bag;
    for(int i=0; i<n; i++)
    {
        ll candy; cin>>candy;
        bag.insert(candy);
    }
    ll total = 0;
    for(int i=0; i<k; i++)
    {
        auto last = (--bag.end());

        ll mx = *last;
        total += mx;
        bag.erase(last);
        bag.insert(mx/2);
    }
    cout<<total<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        sir();
    }

}
