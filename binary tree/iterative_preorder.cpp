
//*************************PREORDER*****************************************//

//    vector<int> preorderTraversal(TreeNode* root) {
//         if(root == NULL) return {};
//      stack<TreeNode*>s;
//         vector<int>v;
//         s.push(root);
//         while(!s.empty())
//         {
//             TreeNode* root = s.top();
//             s.pop();
//             v.push_back(root->val);
//             if(root->right)s.push(root->right);
//             if(root->left)s.push(root->left);
//         }
//         return v;
//     }

//********************************INORDER******************************************//

// vector<int> inorderTraversal(TreeNode* root) {
//         stack<TreeNode*>s;
//         vector<int>v;
//         TreeNode*node = root;
//         while(true)
//         {
//             if(node!=NULL)
//             {
//                 s.push(node);
//                 node = node->left;
//             }
//             else
//             {
//                 if(s.empty())return v;
//                 node = s.top();
//                 s.pop();
//                 v.push_back(node->val);
//                 node = node->right;
                
//             }
//         }
//         return v;
//     }


//******************************POSTORER**********************************//

//  vector<int> postorderTraversal(TreeNode* root) {
//         if(root == NULL) return {};
//     stack<TreeNode*>s1;
//     stack<TreeNode*>s2;
//         vector<int>v;
//         s1.push(root);
//         while(!s1.empty())
//         {
//             TreeNode*top = s1.top();
//             s1.pop();
//             s2.push(top);
//             if(top->left)s1.push(top->left);
//             if(top->right)s1.push(top->right);
//         }
//         while(!s2.empty())
//         {
//             v.push_back(s2.top()->val);
//             s2.pop();
//         }
//         return v;
//     }