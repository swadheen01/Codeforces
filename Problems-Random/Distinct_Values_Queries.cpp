/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Jul 13 2025 12:29:37 AM
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
const int MAXA = 2e5+5;
int root,n, quer;
int v[MAXA];
struct Q{
    int l,r,ind;
};
vector<Q>qq;
int freq[MAXA];
int res[MAXA]; 
bool comp(const Q &q1, const Q &q2) {
    int bp = q1.l /root, bq = q2.l/root;
    if (bp != bq) return q1.l/root < q2.l/root;
    return (bp & 1) ? (q1.r > q2.r) : (q1.r < q2.r);
}

int d = 0;

void add(int x) {
    freq[x]++;
    if (freq[x] == 1)
        d++;
}

void rem(int x) {
    freq[x]--;
    if (freq[x] == 0)
        d--;
}

void sir()
{
    // Bismillahir Rahmanir Rahim 
    cin>>n>>quer;
    vector<ll>a(n); for(auto &e:a) cin>>e;

    vector<ll>temp = a;
    srt(temp);
    temp.erase(unique(temp.begin(), temp.end()),temp.end());
    root = sqrt(n);
    for(ll i=0; i<n; i++)
    {
        v[i] = lower_bound(temp.begin(), temp.end(), a[i])-temp.begin();
    }
    
    for (int i = 0; i < quer; ++i) {
        int l, r;
        cin >> l >> r;
        qq.push_back({--l, --r, i});
    }

    sort(qq.begin(), qq.end(),comp);

    int cl = 0, cr = -1;
    for (auto& qu : qq) {
        while (cl > qu.l)
            add(v[--cl]);
        while (cr < qu.r)
            add(v[++cr]);
        while (cl < qu.l)
            rem(v[cl++]);
        while (cr > qu.r)
            rem(v[cr--]);

        res[qu.ind] = d;
    }
    for (int i = 0; i < quer; ++i)
        cout << res[i] << '\n';
    
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
