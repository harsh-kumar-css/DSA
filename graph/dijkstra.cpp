#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v,e;
    cout<<"enter the value of v and e"<<endl;
    cin>>v>>e;
    vector<pair<int,int>>graph[v];
    for(int i=0;i<e;i++)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        graph[u].push_back(make_pair(v,wt));
        graph[v].push_back(make_pair(u,wt));
    }
    int source;
    cout<<"enter the source vertex"<<endl;
    cin>>source;

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    vector<int>dist(v,INT_MAX);

    pq.push(make_pair(0,source));
    dist[source] = 0;
    while(!pq.empty())
    {
        int node = pq.top().second;
        pq.pop();
        for(int i=0;i<graph[node].size();i++)
        {
            int adj_node = graph[node][i].first;
            int adj_node_distance = graph[node][i].second;
            if(dist[adj_node] > dist[node] + adj_node_distance )
            {
                dist[adj_node] = dist[node] + adj_node_distance;
                pq.push(make_pair(dist[adj_node],adj_node));
            }

        }
    }

    for(int i=0;i<dist.size();i++)
    {
        cout<<dist[i]<<" ";
    }

}