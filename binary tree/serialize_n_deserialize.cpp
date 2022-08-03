//  void newSeralize(Node*root,vector<int>&v)
//     {
//         if(root == NULL)
//         {
//             v.push_back(-1);
//             return;
//         }
//         else
//         {
//             v.push_back(root->data);
//             newSeralize(root->left,v);
//             newSeralize(root->right,v);
//         }
//     }
//     Node* newDeSerialize(vector<int>A,int &ind,int n)
//     {
//         if(A[ind] == -1 ||ind >= n)
//         {
//             ind++;
//             return NULL;
//         }
        
//             Node*root= new Node(A[ind]);
//             ind++;
//             root->left = newDeSerialize(A,ind,n);
//             root->right = newDeSerialize(A,ind,n);
//             return root;
        
//     }
//     vector<int> serialize(Node *root) 
//     {
//         //Your code here
//         vector<int>v;
//         newSeralize(root,v);
//         return v;
//     }
    
//     //Function to deserialize a list and construct the tree.
//     Node * deSerialize(vector<int> &A)
//     {
//        //Your code here
//        int n = A.size();
//       int ind = 0; 
//        Node* node = newDeSerialize(A,ind,n);
//        return node;
//     }