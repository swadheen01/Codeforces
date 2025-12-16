/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jul 07 2025 9:38:37 PM
 */
#include <bits/stdc++.h>
using namespace std;
#define fs first
#define sc second
const int n = 1e6;
int v[n], bl[n], val[n], p;

int blk_n(int x)
{
    return x/p;
}
struct quer
{
    int l,r,ind;
};
quer q[n];

bool comp(const quer &q1, const quer &q2) {
    int bp = q1.l /p, bq = q2.l/p;
    if (bp != bq) return q1.l < q2.l;
    return (bp & 1) ? (q1.r < q2.r) : (q1.r > q2.r);
}

void add(int x)
{
    val[v[x]]++;
    if(val[v[x]]==1)
    {
        bl[blk_n(v[x])]++;
    }
    else if(val[v[x]]==2) bl[blk_n(v[x])]--;
}
void del(int x)
{
    val[v[x]]--;
    if(val[v[x]]==1)
    {
        bl[blk_n(v[x])]++;
    }
    else if(val[v[x]]==0) bl[blk_n(v[x])]--;
}
int get()
{
    for(int i=0; i<p; i++)
    {
        if(bl[i])
        {
            int start = i * p;
            int end = min(n - 1, (i+1)*p-1);
            for(int j=start; j<=end; j++)
            {
                if(val[j]==1) return j;
            }
        }
    }
    return 0;
}


int main() {

    int nn, m;
    scanf("%d", &nn);
    p = sqrt(n) + 1;
    for(int i=0; i<nn; i++) scanf("%d", &v[i]);
    scanf("%d", &m);

    for(int i=0; i<m;i++)
    {
        int l,r;
        scanf("%d%d",&l, &r);
        q[i] = {l-1, r-1, i};
    }
    sort(q, q+m, comp);

    vector<int>ans(m);
    int l = 0, r = -1;
    
    for(int i=0; i<m; i++)
    {
        int L= q[i].l;
        int R = q[i].r;

        while(r<R)
        {
            r++;
            add(r);
        }
        while(r>R)
        {
            del(r);
            r--;
        }
        while(l>L)
        {
            l--;
            add(l);
        }
        while(l<L)
        {
            del(l);
            l++;
        }
        ans[q[i].ind] = get();
    }

    for(int i=0; i<m; i++)
    {
        printf("%d\n", ans[i]);
    }
    return 0;
}