
// logic - 

// 1) first apply topological sort and store all the elments in a stack
// 2) then at each step take out an element form the stack , visit that elements
//    neighbours and check if they have the distance greater then update the distance, if yes then update their distance

#include<bits/stdc++.h>
using namespace std;
void topoSort(int node,vector<pair<int,int>>graph[],vector<int>&visited,stack<int>&s)
{
    visited[node]=1;
    for(int i=0;i<graph[node].size();i++)
    {
        if(!visited[graph[node][i].first])
        {
            topoSort(graph[node][i].first,graph,visited,s);
        }
        
    }
    s.push(node);
}
int main()
{
    int v,e;
    cin>>v>>e;
    vector<pair<int,int>>graph[v];
    vector<int>visited(v,0);
    vector<int>dist(v,INT_MAX);
    for(int i=0;i<e;i++)
    {
        int u,v,weight;
        cin>>u>>v>>weight;
        graph[u].push_back({v,weight});
        // graph[v].push_back(u);
    }
    stack<int>s;
    for(int i=0;i<v;i++)
    {
        if(!visited[i])
        {
            topoSort(i,graph,visited,s);
        }
    }
    dist[0] = 0;
    while(!s.empty())
    {
        int node = s.top();
        s.pop();
        if(dist[node] != INT_MAX)
        {
             for(int i=0;i<graph[node].size();i++)
            {
                if(dist[graph[node][i].first] > dist[node] + graph[node][i].second)
                {
                    dist[graph[node][i].first] = dist[node] + graph[node][i].second;
                }
            }
        }
    }
    for(int i=0;i<v;i++)cout<<dist[i]<<" ";
}