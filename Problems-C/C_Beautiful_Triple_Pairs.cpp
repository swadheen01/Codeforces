/*All Right Reserved by Swadheen*/

/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Sep 03 2025 10:57:11 AM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2 * (acos(0.0))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define endl "\n"
#define asn ans
#define lcm(a, b) (a * b) / (__gcd<ll>(a, b))
#define mod 1000000007
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define ALLAHU_AKBAR             \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void sir()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &e : v)
        cin >> e;

    map<vector<ll>, ll> mp;
    ll ans = 0;

    for (ll i = 0; i < n - 2; i++)
    {
        vector<ll> a, b, c, d;
        a = {v[i], v[i + 1], v[i + 2]};
        b = {v[i], v[i + 1], 0};
        c = {v[i], 0, v[i + 2]};
        d = {0, v[i + 1], v[i + 2]};

        ans += mp[b] - mp[a];
        mp[b]++;
        ans += mp[c] - mp[a];
        mp[c]++;
        ans += mp[d] - mp[a];
        mp[d]++;
        mp[a]++;
    }
    cout << ans << endl;
}

int main()
{
    ALLAHU_AKBAR

    ll t = 1;
    cin >> t;
    while (t--)
    {
        sir();
    }
    return 0;
}

// //vector_of_array_approach
// long long count(const vector<long long>& arr)
// {
//     long long n = arr.size();
//     long long ans = 0;

//     vector<array<long long,3>>tri;
//     for(long long i=0; i<=n-3; i++){
//         tri.push_back({arr[i], arr[i+1], arr[i+2]});
//     }
//     long long nt = tri.size();

//     for(long long i=0; i<nt; i++)
//     {
//         long long j = i+1;
//         for(long long j=i+1; j<nt; j++)
//         {
//             long long diff = 0;
//             if(tri[i][0] != tri[j][0]) diff++;
//             if(tri[i][1] != tri[j][1]) diff++;
//             if(tri[i][2] != tri[j][2]) diff++;

//             if(diff == 1) ans++;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     long long t; cin>>t;
//     while(t--)
//     {
//         // long long n; cin>>n;
//         // vector<long long>arr(n);
//         // for(long long i=0; i<n; i++){
//         //     cin>>arr[i];
//         //     }
//         // long long result = count(arr);
//         // cout<<result<<endl;
//         sir();
//     }
// }