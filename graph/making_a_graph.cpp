#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int>graph[],int u,int v){
    graph[u].push_back(v);
    graph[v].push_back(u);
}

int main()
{
 int V=5;
 vector<int>graph[V];

 addEdge(graph,0,1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    for(int i=0;i<V;i++)
    {  cout<<i<<"->";
        for(int j=0;j<graph[i].size();j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}