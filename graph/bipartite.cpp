//     bool bipartite(vector<int>adj[],vector<int>&color,int node)
//     {
//         if(color[node] == -1) color[node] = 1;
//         for(int i=0;i<adj[node].size();i++)
//         {
//             if(color[adj[node][i]] == -1)
//             {
//                 color[adj[node][i]] = 1-color[node];
//                 if(!bipartite(adj,color,adj[node][i])) return false;
                
//             }
//             else
//             {
//                 if(color[adj[node][i]] == color[node]) return false;
//             }
            
//         }
//         return true;
        
//     }

//     bool isBipartite(int V, vector<int>adj[]){
//     // Code here
//     vector<int>color(V,-1);
//     for(int i=0;i<V;i++)
//     {
//         if(color[i] == -1)
//         {
//             if(!bipartite(adj,color,i)) return false;
//         }
//     }
//     return true;
// }