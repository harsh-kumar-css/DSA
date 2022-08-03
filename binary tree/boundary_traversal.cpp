//   void traversal1(Node*root,vector<int>&v)
//     {
//         if(root == NULL || root->left == NULL && root->right == NULL) return;
//          v.push_back(root->data);
//         if(root->left)
//        {
    
//            traversal1(root->left,v);
//        }
//         else 
//        { 
//            traversal1(root->right,v);
//        }
//     }
//     void inorder(Node*root,vector<int>&v)
//     {
//         if(root == NULL) return;
//         if(root->left == NULL && root->right == NULL)
//         {
//             v.push_back(root->data) ;
//         }
//         inorder(root->left,v);
//         inorder(root->right,v);
//     }
//     void traversal2(Node*root,vector<int>&v)
//     {
//        if(root == NULL || root->left == NULL && root->right == NULL) return;
//         if(root->right)
//         {
//             traversal2(root->right,v);
//         }
//         else
//         {
//             traversal2(root->left,v);
//         }
//          v.push_back(root->data) ;
//     }
//     vector <int> printBoundary(Node *root)
//     {
//         //Your code here
//         if(root == NULL) return {};
//         vector<int>v;
//         v.push_back(root->data);
//            traversal1(root->left,v);
//            inorder(root,v);
//            traversal2(root->right,v);
          
//         return v;
//     }