	// vector<int> topoSort(int V, vector<int> adj[]) 
	// {
	//     // code here
	//    vector<int>topo;
	//   vector<int>inorder(V,0);
	//   for(int i=0;i<V;i++)
	//   {
	//     for(int j=0;j<adj[i].size();j++)
	//     {
	//         inorder[adj[i][j]]++;
	//     }
	//   }
	//   queue<int>q;
	//   for(int i=0;i<V;i++)
	//   {
	//       if(inorder[i] == 0)
	//       {
	//           q.push(i);
	//       }
	//   }
	//   while(!q.empty())
	//   {
	//       int node = q.front();
	//       q.pop();
	//       topo.push_back(node);
	//       for(int i=0;i<adj[node].size();i++)
	//       {
	//           inorder[adj[node][i]]--;
	//           if(inorder[adj[node][i]] == 0)
	//           {
	//               q.push(adj[node][i]);
	//           }
	//       }
	//   }
	//   return topo;
	  
	    
	// }