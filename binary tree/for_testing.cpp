#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *left , *right;

    node(int x){
        data = x;
        left = right = NULL;
    }
    
    };

void preorder(node* root){

    if(root == NULL) return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(){}

void inorder(){}

int main(){

    node *root = new node(1);
    root->left = new node(2);
   root->right  = new node(3);
   root->left->left = new node(4);
   root->left->right = new node(5);
   
   preorder(root);

}