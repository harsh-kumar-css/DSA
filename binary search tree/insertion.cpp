#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data ;
    Node*left , *right;

    Node(){

    }

    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }

    Node* Insert(int value , Node* root)
    {
        if(root == NULL)
        {
            return new Node(value);
        }

        if(root->data > value)
        {
            if(root->left == NULL)
            {
                root->left = new Node(value);
                return root;
            }
            Insert(value , root->left);
        }
        if(root->data < value)
        {
            if(root->right == NULL)
            {
                root->right = new Node(value);
                return root;
            }
            Insert(value,root->right);
        }

    }

    void Inorder(Node *root)
    {
        if(root == NULL) return;

        Inorder(root->left);
        cout<<root->data<<" ";
        Inorder(root->right);
    }
};

int main()
{
Node b,*root = NULL;
root = b.Insert(3,root);
b.Insert(1,root);
b.Insert(2,root);
b.Insert(4,root);
b.Insert(5,root);

b.Inorder(root);
}