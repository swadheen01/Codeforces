/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Nov 30 2024 9:50:40 PM
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

void sir()
{
    ll n;
    cin >> n;
    set<pair<ll,ll>> a;
    vector<ll>v(n);
    int one = 0, two = 0, zero = 0;
    for (ll i = 0; i < n; ++i) {
        cin >> v[i];
        if(v[i]==0) zero = 1;
        else if(v[i]==1) one= 1;
        else two = 1;

    }
    //for(auto &p:a) cout<<p.second<<" ";
    
    int ok = 1;
    for(ll i=0; i<n-1; i++)
    {
        if(v[i]>v[i+1]) {ok = 0;break;}
    }
    if(ok || n==1){
        cout<<0<<endl;
        return;
    }
    ll count = 0;
    ll ind = 0;
    if(one+two+zero>=2){
    if(v[n-1]!=1){
        while(v[ind]!=1) ind++;
        //count++;
        a.insert({ind+1,n});
        v[ind] = v[n-1];
        v[n-1] = 1;
        }

    ind = n-2;  
    ll cng=n-1;
    while(ind>=0)
    {
        if(v[ind]==2)
        {
            v[cng] = 2;
            v[ind] = 1;
            a.insert({ind+1,cng+1});

            cng = ind;
            //count++;
        }
        ind--;
    }
    ind = 0;
    while(ind<n)
    {
        if(v[ind]==1)
        {
            ll x = ind;
            ind++;
            while(v[ind]!=2 && x!=ind)
            {
                count++;
                a.insert({x+1, ind+1});
                x++, ind++;
            }
        }
        ind++;
    }
    }
    else if(two==0) //2 na thakle
        {
            if(v[n-1]!=1){
            while(v[ind]!=1) ind++;
            //count++;
            a.insert({ind+1,n});
            v[ind] = v[n-1];
            v[n-1] = 1;
            }

        ind = n-2;  
        ll cng=n-1;
        while(ind>=0)
        {
            if(v[ind]==1)
            {
                v[cng] = 1;
                v[ind] = 0;
                a.insert({ind+1,cng+1});

                cng = ind;
                //count++;
            }
            ind--;
        }
        }
        // ind = 0;
        // while(ind<n)
        // {
        //     if(v[ind]==)
        //     {
        //         ll x = ind;
        //         ind++;
        //         while(v[ind]!=2 && x!=ind)
        //         {
        //             count++;
        //             a.insert({x+1, ind+1});
        //             x++, ind++;
        //         }
        //     }
        //     ind++;
        // }
        
    cout<<a.size()<<endl;
    for(auto &p:a)
    {
        if(p.first != p.second) cout<<p.first<<" "<<p.second<<endl;
    }


}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sir();
        //solve();
    }
    return 0;
}
// void solve() {
//   int n; cin >> n;
//   vector<int> a(n + 1);
//   set<int> id[3];
//   for (int i = 1; i <= n; i++) {
//     cin >> a[i];
//     id[a[i]].insert(i);
//   }
//   vector<pair<int, int>> v;
//   for (int i = n; i >= 1;) {
//     bool ok = true;
//     for (int x = a[i] + 1; x <= 2; x++) {
//       if (id[x].size()) ok = false;
//     }
//     if (!ok) {
//       for (int x = 2; x > a[i]; x--) {
//         if (abs(x - a[i]) == 1 and id[x].size()) {
//           int j = *id[x].begin();

//           v.push_back({j, i});

//           id[a[j]].erase(j);
//           a[j]--;
//           id[a[j]].insert(j);

//           id[a[i]].erase(i);
//           a[i]++;
//           id[a[i]].insert(i);
//           break;
//         }
//       }
//     } else {
//       id[a[i]].erase(i);
//       i--;
//     }
//   }
//   cout << v.size() << '\n';
//   for (auto [x, y]: v) {
//     cout << x << ' ' << y << '\n';
//   }
//   for (int i = 1; i < n; i++) {
//     assert(a[i] <= a[i + 1]);
//   }
}
