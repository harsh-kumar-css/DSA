//   void parent_tracker(TreeNode*root,unordered_map<TreeNode*,TreeNode*>&parent_track)
//     {
//         queue<TreeNode*>q;
//         q.push(root);
//         while(!q.empty())
//         {
//             TreeNode*node = q.front();
//             q.pop();
//             if(node->left)
//             {
//                 parent_track[node->left] = node;
//                 q.push(node->left);
//             }
//             if(node->right)
//             {
//                 parent_track[node->right] = node;
//                 q.push(node->right);
//             }
            
//         }
//     }
//     vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
//          unordered_map<TreeNode*,TreeNode*>parent_track;
//         parent_tracker(root,parent_track);
//         unordered_map<TreeNode*,bool>visited;
//         visited[target] = true;
//         int curr_level = 0;
//         queue<TreeNode*>q;
//         q.push(target);
//         while(!q.empty())
//         {
//             int size = q.size();
//             if(curr_level==k) break;
//             curr_level++;
//             for(int i=0;i<size;i++)
//             {
//                TreeNode*node = q.front();
//                q.pop();
//                if(node->left && !visited[node->left])
//                {
//                    q.push(node->left);
//                    visited[node->left] = true;
//                }
//                if(node->right && !visited[node->right])
//                {
//                    q.push(node->right);
//                    visited[node->right] = true;
//                }
//                if(parent_track[node] && !visited[parent_track[node]])
//                {
//                    q.push(parent_track[node]);
//                    visited[parent_track[node]]= true;
//                }
//             }
//         }
//        vector<int>v;
//        while(!q.empty())
//        {
//            v.push_back(q.front()->val);
//            q.pop();
//        }
//        return v;
//     }