
//*************************************Construct binary tree using inorder and preorder traversal***************************//

//   Node* buildTree(int in[],int pre[], int n)
//     {
//         // Code here
//         unordered_map<int,int>inMap;
//         for(int i=0;i<n;i++)
//         {
//             inMap[in[i]]=i;
//         }
//         Node *root = makeTree(in,0,n-1,pre,0,n-1,inMap);
//         return root;
//     }
//     Node* makeTree(int in[],int inStart,int inEnd ,int pre[],int preStart,int preEnd,unordered_map<int,int>&inMap)
//     {
//         if(preStart > preEnd || inStart > inEnd) return NULL;
        
//         Node* root = new Node(pre[preStart]);
        
//         int inRoot = inMap[pre[preStart]];
//         int nodesLeft = inRoot - inStart;
        
//         root->left = makeTree(in,inStart,inRoot-1,pre,preStart+1,preStart+nodesLeft,inMap);
//         root->right = makeTree(in,inRoot+1,inEnd,pre,preStart+nodesLeft+1,preEnd,inMap);
        
//         return root;
//     }



//***************************************construct binary tree using inorder and postorder tarversal**************************//


// Node *makeTree(int in[],int inStart,int inEnd,int post[],int postStart,int postEnd,unordered_map<int,int>&inMap)
// {
//     if(postStart < postEnd || inStart > inEnd)return NULL;
    
//     Node* root = new Node(post[postStart]);
    
//     int inRoot = inMap[post[postStart]];
//     int nodesLeft = inRoot - inStart;
    
//     root->left = makeTree(in,inStart,inRoot-1,post,postEnd+nodesLeft-1,postEnd,inMap);
//     root->right = makeTree(in,inRoot+1,inEnd,post,postStart-1,postEnd+nodesLeft,inMap);
//     return root;
    
// }

// Node *buildTree(int in[], int post[], int n) {
//     // Your code here
//     unordered_map<int,int>inMap;
//     for(int i=0;i<n;i++)
//     {
//         inMap[in[i]] = i;
//     }
//     Node * root = makeTree(in,0,n-1,post,n-1,0,inMap);
//     return root;
// }