//  int getMaxWidth(Node* root) {

//         // Your code here
//         if(root == NULL) return 0;
//         queue<pair<Node*,int>>q;
//         q.push({root,0});
//         int ans=0;
//         while(!q.empty())
//         {
//             int minn = q.front().second;
//             int size = q.size();
//             int last=0,first=0;
//             for(int i=0;i<size;i++)
//             {
//                 int curr_ind = q.front().second - minn;
//                 Node *node = q.front().first;
//                 q.pop();
//                 if(i==0) first  = curr_ind;
//                 if(i==size-1) last = curr_ind;
//                 if(node->left)
//                 {
//                     q.push({node->left,curr_ind*2+1});
//                 }
//                 if(node->right)
//                 {
//                     q.push({node->right,curr_ind*2+2});
//                 }
//             }
//             ans = max(ans,last-first+1);
//         }
//         return ans;
//     }



//***************************************MAX WIDTH Of a TREE GFG******************************************//
//   int getMaxWidth(Node* root) {

//         // Your code here
//        int res =0;
//        queue<Node*>q;
//        q.push(root);
//        while(!q.empty())
//        {
//            int size  = q.size();
//            res = max(res,size);
//            for(int i=0;i<size;i++)
//            {
//                Node*node = q.front();
//                q.pop();
//                if(node->left) q.push(node->left);
//                if(node->right) q.push(node->right);
//            }
//        }
//        return res;
    // }