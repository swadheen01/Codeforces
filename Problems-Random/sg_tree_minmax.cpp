#include<bits/stdc++.h>
using namespace std;
int a[100], tree[400];

void build(int node,int start,int end)
{
    if(start==end)
    {
        tree[node]=a[start];
        return;
    }

    int mid=(start+end)/2;
    build(node*2,start,mid);
    build(node*2+1,mid+1,end);
    tree[node]=max(tree[node*2],tree[node*2+1]);
}

int query(int node,int start,int end,int l,int r)
{
    if(l>end || r<start) return -1;
    if(l<=start && r>=end) return tree[node];

    int mid=(start+end)/2;
    int n1 = query(node*2,start,mid,l,r);
    int n2 = query(node*2+1,mid+1,end,l,r);
    return max(n1,n2);
}
void update(int node,int start,int end,int ind,int val)
{
    if(start==end)
    {
        a[ind]=val;
        tree[node]=val;
        return;
    }
    int mid=(start+end)/2;
    if(ind<=mid) update(node*2,start,mid,ind,val);
    else update(node*2+1,mid+1,end,ind,val);

    tree[node]=max(tree[node*2],tree[node*2+1]);
}

int main()
{
    int n; cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    build(1,0,n-1);
    //for(int i=0;i<=3*n;i++) cout<<tree[i]<<" "; cout<<endl;
    int q; cin>>q;
    while(q--)
    {
        int l,r; cin>>l>>r;
        cout<<query(1,0,n-1,l-1,r-1)<<endl;
    }
    cin>>q;
    while(q--)
    {
        int ind,val; cin>>ind>>val;
        update(1,0,n-1,ind-1,val);
        for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<endl;
    }
    cin>>q;
    while(q--)
    {
        int l,r; cin>>l>>r;
        cout<<query(1,0,n-1,l-1,r-1)<<endl;
    }
}