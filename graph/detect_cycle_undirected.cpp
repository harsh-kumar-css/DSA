#include<bits/stdc++.h>
using namespace std;
bool detect_cycle(int node , int parent , vector<int>graph[],vector<int>&visited)
{
    visited[node] = 1;
    for(int i=0;i<graph[node].size();i++)
    {
        if(!visited[graph[node][i]])
        {
            if(detect_cycle(graph[node][i],node,graph,visited)) return true;
        }
        else if(graph[node][i] != parent)
        {
            return true;
        }
    }
    return false;
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
    vector<int>visited(v,0);
    bool found = false;
    for(int i=0;i<v;i++)
    { 
        if(!visited[i])
        {
             if(detect_cycle(i , -1 , graph , visited)){
                 found = true;
                 break;
             }
        }
    }
    if(found)cout<<"cycle found";
    else cout<<"cycle not found ";
}