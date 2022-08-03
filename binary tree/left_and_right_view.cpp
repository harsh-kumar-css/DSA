

//*****************************************RIGHT VIEW***********************************************//

//  void printView(Node*root,int level,vector<int>&v)
//     {
//         if(root == NULL) return;
//         if(v.size() == level)v.push_back(root->data);
//         printView(root->right,level+1,v);
//         printView(root->left,level+1,v);
//     }
//    
//     vector<int> rightView(Node *root)
//     {
//        // Your Code here
//        vector<int>view;
//        int level=0;
//        printView(root,level,view);
//        return view;
//     }


//*****************************************LEFT VIEW*************************************************//

// void printView(Node*root,int level,vector<int>&v)
// {
//     if(root == NULL)return;
//     if(v.size() == level)v.push_back(root->data);
//     printView(root->left,level+1,v);
//     printView(root->right,level+1,v);
// }
// vector<int> leftView(Node *root)
// {
//    // Your code here
//     vector<int>ans;
//     int level =0;
//     printView(root,level,ans);
//     return ans;
// }