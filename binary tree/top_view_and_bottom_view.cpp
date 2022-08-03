//*********************************TOP VIEW********************************************//

//  vector<int> topView(Node *root)
//     {
//         //Your code here
//         queue<pair<Node*,int>>q;
//         map<int,int>m;
//         q.push({root,0});
//         while(!q.empty())
//         {
//             auto p = q.front();
//             q.pop();
//             Node*node = p.first;
//             int x = p.second;
//             if(m.find(x)==m.end())
//             {
//                 m[x] = node->data;
//             }
//             if(node->left)
//             {
//                 q.push({node->left,x-1});
//             }
//             if(node->right)
//             {
//                 q.push({node->right,x+1});
//             }
//         }
//         vector<int>ans;
//         for(auto i:m)
//         {
//             ans.push_back(i.second);
//         }
//         return ans;
//     }


//******************************************BOTTOM VIEW*********************************************//


//  vector <int> bottomView(Node *root) {
//         // Your Code Here
//         queue<pair<Node*,int>>q;
//         map<int,int>m;
//         q.push({root,0});
//         while(!q.empty())
//         {
//             auto p = q.front();
//             q.pop();
//             Node *node = p.first;
//             int x = p.second;
//             m[x] = node->data;
//             if(node->left)
//             {
//                 q.push({node->left,x-1});
//             }
//             if(node->right)
//             {
//                 q.push({node->right,x+1});
//             }
            
//         }
//         vector<int>ans;
//         for(auto i:m)
//         {
//             ans.push_back(i.second);
//         }
//         return ans;
//     }