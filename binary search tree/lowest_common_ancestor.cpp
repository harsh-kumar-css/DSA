#include<bits/stdc++.h>
using namespace std;
class node
{
    public : 
    int data;
    node* left , *right;

    node(){

    }
    node(int x)
    {
        data =x;
        left = right = NULL;
    }

    node* insert(node*root , int value)
    {
        if(root == NULL) return new node(value);
        if(root->data  > value)
        {
            if(root->left == NULL)
            {
                root->left = new node(value);
                return root;
            }
            insert(root->left , value);
        }
          if(root->data  < value)
        {
            if(root->right == NULL)
            {
                root->right = new node(value);
                return root;
            }
            insert(root->right , value);
        }
    }

    node* LCA(node*root , int value1 ,int value2)
    {
        if(root == NULL) return NULL;

        if(root->data > value1 && root->data > value2)
        {
            return LCA(root->left , value1 ,value2);
        }
         else if(root->data < value1 && root->data < value2)
        {
             return LCA(root->right , value1 ,value2);
        }
        else
        {
            return root;
        }
    }
};
int main()
{
    node b ,*root = NULL;
    root = b.insert(root,20);
    b.insert(root,8);
    b.insert(root,22);
    b.insert(root,4);
    b.insert(root,12);
    b.insert(root,10);
    b.insert(root,14);

    node *lowest_common_ancestor = b.LCA(root , 10 ,14);
    if(lowest_common_ancestor != NULL)
    {
        cout<<lowest_common_ancestor->data<<" ";
    }

}