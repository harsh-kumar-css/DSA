#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* right;
    node* left;
    node(int val){
        data =val;
        right = left = NULL;
    }
};
node* inorder(node* root)
{
    if(root == NULL) return NULL ;
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
    return NULL;
}
int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    inorder(root);
}