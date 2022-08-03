//   bool isSymmTree(Node*root1,Node*root2)
//     {
//         if(root1 == NULL && root2 == NULL)return true;
//         if(root1 != NULL && root2 == NULL) return false;
//         if(root1 == NULL && root2 != NULL) return false;
//         if(root1->data != root2->data) return false;
//         return (isSymmTree(root1->left,root2->right) && isSymmTree(root1->right,root2->left));
//     }
//     bool isSymmetric(struct Node* root)
//     {
// 	    // Code here
// 	    return isSymmTree(root,root);
//     }