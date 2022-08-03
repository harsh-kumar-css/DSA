#include<bits/stdc++.h>
using namespace std;
bool detect_cycle(int node , vector<int>&visited , vector<int>&DFSvisited , vector<int>graph[])
{
    visited[node] = 1;
    DFSvisited[node] = 1;
    for(int i=0;i<graph[node].size();i++)
    {
        if(!visited[graph[node][i]])
        {
            if(detect_cycle(graph[node][i],visited,DFSvisited,graph)){ return true;}
        }
        else if(DFSvisited[graph[node][i]])
        {
            return true;
        }
    }
    DFSvisited[node] = 0;
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
}
vector<int>visited(v,0);
vector<int>DFSvisited(v,0);
bool found = false;
for(int i=0;i<v;i++)
{
    if(!visited[i])
    {
        if(detect_cycle(i,visited,DFSvisited,graph))
        {
            found = true;
            break;
        }
    } 
}
if(found) cout<<"cycle found !";
else cout<<"cycle not found !";
}