#include<bits/stdc++.h>
using namespace std;
bool dfs(int node,vector<int>graph[],vector<int>&vis,int k,int maxx,int mid,vector<int>&arr)
{
    if(k==0)
    {
         return maxx<mid;
    }
    vis[node] = 1;
    for(auto i:graph[node])
    {
        if(arr[i] < mid && !vis[i])
        {
            if(dfs(i,graph,vis,k-1,max(maxx,arr[i]),mid,arr)) return true;
        }
    }

    return false;

}
int main()
{

    int n=0,m=0,k=0,x=0;
    cin>>n>>m>>k;
    int size = n;
    int edges = m;
    int l=INT_MAX,r=INT_MIN;
    vector<int>arr;
    while(size--)
    {
        cin>>x;
        l=min(l,x);
        r=max(r,x);
        arr.push_back(x);
    }

    vector<int>graph[n];
    while(edges--)
    {
        int u=0,v=0;
        cin>>u>>v;
        if(u==v) return -1;
        graph[u-1].push_back(v-1);

    }
    int ans = -1;
    while(l<=r)
    {
        int mid = l+(r-l)/2;
        bool flag = false;
        for(int i=0;i<n;i++)
        {
            vector<int>vis(n,0);
            if(dfs(i,graph,vis,k-1,arr[i],mid,arr))
            {
                flag = true;
                break;
            }
        }
        if(flag)
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    cout<<r;
}