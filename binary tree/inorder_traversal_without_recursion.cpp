#include<bits/stdc++.h>

using namespace std;
class node{
    public:
    int data;
    node *left , *right;

    node(int x){
      data = x;
      right = left = NULL;
    }
};

void inorder(node* root){
    stack<node*>s;
    node* current = root;

    while(current != NULL || s.empty() == false)
    {
        while(current!= NULL)
        {
            s.push(current);
            current = current->left;

        }

         current = s.top();
         s.pop();
         cout<<current->data<<" ";
         current = current->right;

    }
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    inorder(root);
}