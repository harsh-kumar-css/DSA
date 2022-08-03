#include<bits/stdc++.h>
using namespace std;

class Node {
    
    public:

    int data;
    Node *right , *left;

    Node(){

    }

    Node(int value)
    {
     data = value;
     right = left = NULL;
    }

     Node* Insert(Node* root , int value)
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
            Insert(root->left , value);
        }
        else
        {
            if(root->right == NULL)
            {
                root->right = new Node(value);
               return root;
            }
            Insert(root->right , value);
        }

    }

    void Inorder(Node *root)
    {
        if(root == NULL) return;

        Inorder(root->left);
        cout<<root->data<<" ";
       Inorder(root->right);
    }

    int Search(Node *root , int value)
    {
        if(root == NULL)
        {
            return 0;
        }
        if(root->data == value)
        {
            return 1;
        }
        else if(root->data > value)
        {
           return Search(root->left ,value);
        }
        else if(root->data < value)
        {
           return Search(root->right,value);
        }

    }

};

int main()
{
    Node b , *root = NULL;
    root = b.Insert(root,3);
    b.Insert(root,4);
    b.Insert(root,1);
    b.Insert(root,2);
    b.Insert(root,5); 
    b.Inorder(root);
    int x =0;
    cout<<"enter the number to be searched : ";
    cin>>x;
    int y = b.Search(root , x);

    if(y==1)
    {
        cout<<"found !"<<endl;
    }
    else
    {
        cout<<"not found !"<<endl;
    }
}

