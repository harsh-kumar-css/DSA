    // vector<vector<int>> verticalTraversal(TreeNode* root) {
    //     queue<pair<TreeNode*,pair<int,int>>>todo;
    //     map<int,map<int,multiset<int>>>nodes;
    //     todo.push({root,{0,0}});
    //     while(!todo.empty())
    //     {
    //         auto p = todo.front();
    //         todo.pop();
    //         TreeNode* node= p.first;
    //         int x = p.second.first;
    //         int y = p.second.second;
    //         nodes[x][y].insert(node->val);
    //         if(node->left)
    //         {
    //             todo.push({node->left,{x-1,y+1}});
    //         }
    //         if(node->right)
    //         {
    //             todo.push({node->right,{x+1,y+1}});
    //         }
              
    //     }
    //     vector<vector<int>>ans;
    //     for(auto i:nodes)
    //     {
    //         vector<int>temp;
    //         for(auto j : i.second)
    //         {
    //             temp.insert(temp.end(),j.second.begin(),j.second.end());
    //         }
    //         ans.push_back(temp);
    //     }
    //     return ans;
    // }