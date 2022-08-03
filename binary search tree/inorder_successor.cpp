#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node*left , *right;

node()
{

}
node(int value)
{
    data = value;
    right = left = NULL;
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
        insert(root->left,value);
    }
    if(root->data < value)
    {
        if(root->right == NULL)
        {
            root->right = new node(value);
            return root;
        }
        insert(root->right,value);
    }
}

node* inorderSuccessor(node*root , int data)
{
  node*curr = search(root,data);
  if(curr->right != NULL)
  {
      node* succ = curr->right;
      while(succ->left != NULL)
      {
          succ = succ->left;
      }

      return succ;
  }
  else{
      node* ancestor = root;
      node* succ = NULL;
      while(ancestor != curr)
      {
         if(ancestor->data < curr->data)
         {
             ancestor = ancestor->right;
         }
         else if(ancestor->data > curr->data)
         {
             succ = ancestor;
             ancestor = ancestor->left;
         }
      }
      return succ;
  }
}

node* search(node* root , int data)
{
    if(root== NULL) return root;
    if(root->data == data) return root;
    if(root->data > data) return search(root->left , data);
    if(root->data < data) return search(root->right , data);
}
};
int main()
{
    node b,*root = NULL, *succ = NULL;
     root = b.insert(root, 20);
     b.insert(root, 8);
     b.insert(root, 22);
     b.insert(root, 4);
     b.insert(root, 12);
     b.insert(root, 10);
     b.insert(root, 14);

     succ = b.inorderSuccessor(root,4);
     if(succ != NULL) {
           cout<<succ->data<<" ";
     }
     else{
         cout<<-1;
     }
}