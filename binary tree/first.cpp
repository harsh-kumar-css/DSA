#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *right , *left;

    node(int x){
        data = x;
        right = left = NULL;
    }
};

void postorder(node* root)
{
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    postorder(root);
}