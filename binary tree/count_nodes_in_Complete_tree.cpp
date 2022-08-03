

//  int countNodes(TreeNode* root) {
//        if(root == NULL) return 0;
//         int lh = countleft(root);
//         int rh = countright(root);
//         if(lh == rh) return (1<<lh)-1;
//         else return 1+countNodes(root->left)+countNodes(root->right);
//     }
//     int countleft(TreeNode*root)
//     {
//         int high =0;
//         while(root)
//         {
//             high++;
//             root=root->left;
//         }
//         return high;
//     }
//     int countright(TreeNode*root)
//     {
//         int high = 0;
//         while(root)
//         {
//             high++;
//             root=root->right;
//         }
//         return high;
//     }


