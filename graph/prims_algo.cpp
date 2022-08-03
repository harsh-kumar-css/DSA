// in this algo first start with the source node , then find the adjacent node with min edge from that source to its 
//adjacent node and thats in not our mst , include that node in our mstset and then find the min edge adjacent node of all the vertices

// 1) find the min key node not in MST , and include it in MST
// 2) iterate through that node's adjacent nodes and keep updating the distance of the adjacent nodes,if u find a better distance and the 
//   parent also accordingly.


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v,e;
    cin>>v>>e;
    vector<pair<int,int>>graph[v];
    for(int i=0;i<e;i++)
    {
        int u ,v ,wt;
        cin>>u>>v>>wt;
        graph[u].push_back(make_pair(v,wt));
        graph[v].push_back(make_pair(u,wt));
    }
    int key[v];
    int MSTset[v];
    int parent[v];
    for(int i=0;i<v;i++)
    {
        key[i] = INT_MAX;
        MSTset[i] = 0;
        parent[i] = -1;
    }

    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pq;

    key[0] = 0;
    pq.push(make_pair(0,0));
    while(!pq.empty())
    {
       int u = pq.top().second;
       pq.pop();

        MSTset[u] = 1;
        for(int i=0;i<graph[u].size();i++)
        {
            int adj_node = graph[u][i].first;
            int adj_node_distance = graph[u][i].second;
            if(!MSTset[adj_node] && key[adj_node] > adj_node_distance)
            {
                key[adj_node] = adj_node_distance;
                parent[adj_node] = u;
                pq.push(make_pair(key[adj_node],adj_node));
            }
        }
    }
    for(int i =1;i<v;i++)
    {
        cout<<"parent of "<<i<<" is : "<<parent[i]<<endl;
    }
}


// gfg

// int spanningTree(int V, vector<vector<int>> adj[])
//     {
//         // code here
//         int key[V];
//         int MST[V];
//         int parent[V];
//         for(int i=0;i<V;i++)
//         {
//             key[i] = INT_MAX;
//             MST[i] = 0;
//             parent[i] = -1;
//         }
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
//         key[0] = 0;
//         pq.push({0,0});
//        while(!pq.empty())
//         {
//             int node = pq.top().second;
//             int node_dist = pq.top().first;
//             pq.pop();
//             MST[node] = 1;
//             for(int j=0;j<adj[node].size();j++)
//             {
//                 int adj_node = adj[node][j][0];
//                 int adj_node_dist = adj[node][j][1];
//                 if(!MST[adj_node] && key[adj_node] > adj_node_dist)
//                 {
//                     key[adj_node] = adj_node_dist;
//                     parent[adj_node] = node;
//                     pq.push({key[adj_node],adj_node});
//                 }
//             }
//         }
//         int sum=0;
//         for(int i=0;i<V;i++)
//         {   sum+= key[i]; }
//         return sum;
        
       
//     }