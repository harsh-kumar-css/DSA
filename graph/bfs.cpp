#include<bits/stdc++.h>
using namespace std;
void bfs(int node ,vector<int>graph[],vector<int>&visited,vector<int>&trav)
{
    queue<int>q;
    q.push(node);
    visited[node] = 1;
    while(!q.empty())
    {
        int front = q.front();
        q.pop();
        trav.push_back(front);
        visited[front] = 1;
        for(int i=0;i<graph[front].size();i++)
        {
            if(!visited[graph[front][i]])
            {
                visited[graph[front][i]] = 1;
                q.push(graph[front][i]);
            }
        }
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
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector<int>trav;
    vector<int>visited(v,0);
    for(int i=0;i<v;i++)
    {
        if(!visited[i])
        {
            bfs(i,graph,visited,trav);
        }
    }
    for(int i=0;i<trav.size();i++)
    {
        cout<<trav[i]<<" ";
    }
}