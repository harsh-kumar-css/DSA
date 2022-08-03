#include<bits/stdc++.h>
using namespace std;
void topo(int node,vector<int>&visited , vector<int>graph[],stack<int> &s)
{
    visited[node] = 1;
    for(int i=0;i<graph[node].size();i++)
    {
        if(!visited[graph[node][i]])
        {
            topo(graph[node][i],visited,graph,s);
        }
    }
    s.push(node);
}
int main()
{
    int v,e;
    cin>>v>>e;
    vector<int>graph[v];
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
    }
    vector<int>visited(v,0);
    stack<int> s;
    for(int i=0;i<v;i++)
    {
        if(!visited[i])
        {
            topo(i,visited,graph,s);
        }
    }
    while(!s.empty())
    {   
        int node = s.top();
        s.pop();
        cout<<node<<" ";
    }
}