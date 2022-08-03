#include<bits/stdc++.h>
using namespace std;
void dfs(int node, vector<int>graph[] , vector<int> &trav , vector<int> &visited)
{
        visited[node] = 1;
        trav.push_back(node);
        for(int i=0;i<graph[node].size();i++)
        {
           if(!visited[graph[node][i]])
           { dfs(graph[node][i],graph,trav,visited);}
        }
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
        graph[v].push_back(u);
        graph[u].push_back(v);
    }
    
    vector<int>trav;
    vector<int>visited(v,0);
    for(int i=0;i<v;i++)
    {
        if(!visited[i])
        {
            dfs(i , graph,trav,visited);
        }
    }

    for(int i=0;i<trav.size();i++)
    {
        cout<<trav[i]<<" ";
    }
}