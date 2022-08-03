#include<bits/stdc++.h>
using namespace std;

class Node{

    int data;
    Node *left , *right;

    public:

    Node()
    {

    }

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }

    Node* insert(Node*root,int value)
    {
        if(root == NULL) return new Node(value);

        if(root->data > value)
        {
            if(root->left == NULL)
            {
                root->left = new Node(value);
                return root;
            }

            insert(root->left , value);
        }
        if(root->data < value)
        {
            if(root->right == NULL)
            {
                root->right = new Node(value);
                return root;
            }

            insert(root->right,value);
        }
    }

    void min_element(Node*root)
    {
        Node* curr = root;
        while(curr->left != NULL)
        {
            curr = curr->left;
        }
        cout<<curr->data<<endl;
    }
    void inorder(Node*root)
    {
        if(root == NULL) return;
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
};

int main()
{
    Node b , *root = NULL;
    root = b.insert(root , 50);
    b.insert(root,70);
    b.insert(root,30);
    b.insert(root,20);
    b.insert(root,80);
    b.insert(root,60);

    b.inorder(root);
    cout<<endl;
    b.min_element(root);
}