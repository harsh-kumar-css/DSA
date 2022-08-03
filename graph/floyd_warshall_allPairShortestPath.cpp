// # define INF 9999
// class Solution {
//   public:
// 	void shortest_distance(vector<vector<int>>&matrix){
// 	    // Code here
// 	    int n = matrix.size();
	    
// 	    for(int i=0;i<n;i++)
// 	    {
// 	        for(int j=0;j<n;j++)
// 	        {
// 	            if(matrix[i][j] == -1)
// 	             matrix[i][j] = INF;
// 	        }
// 	    }
	  
// 	    for(int k=0;k<n;k++)
// 	    {
// 	        for(int i=0;i<n;i++)
// 	        {
// 	            for(int j=0;j<n;j++)
// 	            {
	                
// 	                matrix[i][j] = min(matrix[i][j] , matrix[i][k]+matrix[k][j]);
// 	            }
// 	        }
// 	    }
	    
// 	    for(int i=0;i<n;i++)
// 	    {
// 	        if(matrix[i][i] < 0) cout<<"negative cycle present !";
// 	        return;
// 	    }
	    
// 	}
// };