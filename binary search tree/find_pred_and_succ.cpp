#include<bits/stdc++.h>
using namespace std;

class node{

public:

int data;
node *left , *right;

node(){}

node(int value)
{
    data = value;
    left = right = NULL;
}

node* insert(node*root , int value)
{
    if(root == NULL) return new node(value);

    if(root->data > value)
    {
        if(root->left == NULL)
        {
            root->left = new node(value);
            return root;
        }
        insert(root->left , value);
    }
    else if(root->data < value)
    {
          if(root->right == NULL)
        {
            root->right = new node(value);
            return root;
        }
        insert(root->right , value);
    }
}
void find_pre_succ(node*root , node*& pred , node*&succ , int value)
{
    if(root == NULL) return;
    if(root->data == value)
    {
        if(root->left != NULL)
        {
            pred = root->left;
            while(pred->right != NULL)
            {
                pred = pred->right;
            }
        }
        if(root->right != NULL)
        {
            succ = root->right;
            while(succ->left != NULL)
            {
                succ = succ->left;
            }
        }
    }
    if(root->data > value)
    {
        succ = root;
        find_pre_succ(root->left , pred , succ , value);
    }
    if(root->data < value)
    {
       pred = root;
       find_pre_succ(root->right , pred , succ , value);
    }
}
void inorder(node *root)
{
    if(root == NULL) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
};

int main()
{
    node b,*root = NULL,*pred = NULL,*succ = NULL;
    root = b.insert(root,50);
    b.insert(root,80);
    b.insert(root,70);
    b.insert(root,20);
    b.insert(root,60);
    b.insert(root,40);
    b.insert(root,30);
    cout<<"inorder : ";
    b.inorder(root);
    cout<<"over"<<endl;
    b.find_pre_succ(root,pred,succ,10);

    if(pred != NULL)
    {
        cout<<pred->data<<" is the pred"<<endl;
    }
    else
    {
        cout<<"predecessor not found !"<<endl;
    }

    if(succ != NULL)
    {
        cout<<succ->data<<" is the succ"<<endl;
    }
    else
    {
        cout<<"successor not found !"<<endl;
    }

}