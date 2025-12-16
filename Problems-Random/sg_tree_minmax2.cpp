#include<bits/stdc++.h>
using namespace std;
int a[100];
pair<int,int> tree[400];

void build(int node,int start,int end)
{
    if(start==end)
    {
        tree[node].first=a[start];
        tree[node].second=1;
        return;
    }
    int mid=(start+end)/2;
    build(node*2,start,mid);
    build(node*2+1,mid+1,end);

    if(tree[node*2].first > tree[node*2+1].first)
    {
        tree[node].first=tree[node*2].first;
        tree[node].second=tree[node*2].second;
    }
    else if(tree[node*2].first < tree[node*2+1].first)
    {
        tree[node].first=tree[node*2+1].first;
        tree[node].second=tree[node*2+1].second;
    }
    else
    {
        tree[node].first=tree[node*2].first;
        tree[node].second=tree[node*2].second+tree[node*2+1].second;
    }
}

pair<int,int> query(int node,int start,int end,int l,int r)
{
    if(start>r || end<l) return {-1,0};
    if(start>=l && end<=r) return tree[node];

    int mid=(start+end)/2;
    pair<int,int> a = query(node*2,start,mid,l,r);
    pair<int,int> b = query(node*2+1,mid+1,end,l,r);

    if(a.first>b.first) return a;
    else if(a.first<b.first) return b;
    else return {a.first,a.second+b.second};

}

void update(int node,int start,int end,int ind,int val)
{
    if(start==end)
    {
        tree[node]={val,1};
        return;
    }
    int mid = (start+end)/2;
    if(ind<=mid) update(node*2,start,mid,ind,val);
    else update(node*2+1,mid+1,end,ind,val);

    if(tree[node*2].first > tree[node*2+1].first) tree[node]=tree[node*2];
    else if(tree[node*2].first<tree[node*2+1].first) tree[node]=tree[node*2+1];
    else tree[node]={tree[node*2].first,tree[node*2].second+tree[node*2+1].second};
}
int main()
{
    int n; cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    build(1,0,n-1);
    int q; cin>>q;
    while(q--)
    {
        int l,r; cin>>l>>r;
        pair<int,int> ans=query(1,0,n-1,l-1,r-1);
        cout<<ans.first<<" "<<ans.second<<endl;
    }
    update(1,0,n-1,4,1);
    cin>>q;
    while(q--)
    {
        int l,r; cin>>l>>r;
        pair<int,int> ans=query(1,0,n-1,l-1,r-1);
        cout<<ans.first<<" "<<ans.second<<endl;
    }
}