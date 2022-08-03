//  1) sort the nodes according to their finishing time , MEANS FIND THE TOPOLOGICAL SORT ,store in into a stack as we usually do 
//   2) make a transpose of the graph , which basically means reverse the nodes
// 3) now do the dfs according to order of the nodes stored in the stack during the topo sort , and find the number of components



// class Solution
// {
// 	public:
// 	//Function to find number of strongly connected components in the graph.
// 	void topo(int node,vector<int>adj[],vector<int>&visited,stack<int>&s)
// 	{
// 	    visited[node] = 1;
// 	    for(int i=0;i<adj[node].size();i++)
// 	    {
// 	        if(!visited[adj[node][i]])
// 	        {
// 	            topo(adj[node][i],adj,visited,s);
// 	        }
// 	    }
// 	    s.push(node);
// 	}
// 	void dfs(int node,vector<int>adj[],vector<int>&visited)
// 	{
//      cout<<node<<" ";
// 	    visited[node] = 1;
// 	    for(int i=0;i<adj[node].size();i++)
// 	    {
// 	        if(!visited[adj[node][i]])
// 	        {
// 	            dfs(adj[node][i],adj,visited);
// 	        }
// 	    }
// 	}
//     int kosaraju(int V, vector<int> adj[])
//     {
//         //code here
//         stack<int>s;
//         vector<int>visited(V,0);
//         for(int i=0;i<V;i++)
//         {
//             if(!visited[i])
//             {
//                 topo(i,adj,visited,s);
//             }
//         }
//     vector<int>transpose[V];
//     for(int i=0;i<V;i++)
//     {
//         for(int j=0;j<adj[i].size();j++)
//         {
//             transpose[adj[i][j]].push_back(i);
//         }
//     }
//     for(int i=0;i<V;i++)
//     {
//         visited[i] = 0;
//     }
    
//     int count = 0;
//     while(!s.empty())
//     {
//         int node = s.top();
//         s.pop();
//         if(!visited[node])
//         {
//          count++;
//          dfs(node,transpose,visited);
//         }
//     }
//     return count;
//     }
// };