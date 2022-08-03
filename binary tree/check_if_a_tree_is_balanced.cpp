// class Solution {
// public:
//     int height(TreeNode*root)
//     {
//         if(root == NULL) return 0;
//         return 1+max(height(root->left),height(root->right));
//     }
//     bool isBalanced(TreeNode *root)
//     {
//         //  Your Code here
//         if(root == NULL) return true;
        
//         if(abs(height(root->left) - height(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right)) return true; // if true if the the tree is balanced
//         else return false;            // if we reach here then that means that our tree is not height balanced so we return false
        
        
//     }
// };