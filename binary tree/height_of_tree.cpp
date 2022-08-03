#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *left , *right;

    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

int height(node* root)
{
    if(root == NULL) return 0;

    int lheight = height(root->left);
   int rheight =  height(root->right);

   if(lheight > rheight) return (lheight +1);
   else
   return (rheight + 1);
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    cout<<height(root);
}