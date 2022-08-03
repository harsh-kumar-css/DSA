//==============================================================================================================//

// Given a weighted directed graph with n nodes and m edges. Nodes are labeled from 0 to n-1, the task is to check if it contains a negative weight cycle or not.
// Note: edges[i] is defined as u, v and weight.
 

// Example 1:

// Input: n = 3, edges = {{0,1,-1},{1,2,-2},
// {2,0,-3}}
// Output: 1
// Explanation: The graph contains negative weight
// cycle as 0->1->2->0 with weight -1,-2,-3,-1.	
    

//==============================================================================================================//
    
    
    // int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	//     // Code here
	//     vector<int>dist(n,100000);
	//     dist[0] = 0;
	//     for(int i=0;i<n;i++)
	//     {
	//         for(int j=0;j<edges.size();j++)
	//         {
	//             if(dist[edges[j][0]] + edges[j][2] < dist[edges[j][1]])
	//             {
	//                 dist[edges[j][1]] = dist[edges[j][0]] + edges[j][2];
	//             }
	//         }
	//     }
	//     for(int i=0;i<edges.size();i++)
	//     {
	//         if(dist[edges[i][0]] + edges[i][2] < dist[edges[i][1]])
	//         {
	//             return 1;
	//         }
	//     }
	//     return 0;
	// }