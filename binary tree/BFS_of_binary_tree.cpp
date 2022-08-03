#include<bits/stdc++.h>
using namespace std;

class node{

public:
int data;
node *left,*right;

node(int x){
    data = x;
    left = right = NULL;
}
};

int height(node *root){

    if(root == NULL) return 0;

    int leftheight = height(root->left);
    int rightheight = height(root->right);

    if(leftheight > rightheight) 
    {return (leftheight +1);}
    else 
    {return (rightheight +1);}
}

void postorder(node *root){
    if(root == NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void print_level_order(node *root , int d)
{  
    if(d == 1){
        cout<<root->data<<" ";
        return;
    }
    print_level_order(root->left , d-1);
    print_level_order(root->right , d-1);
}

void bfs(node *root){

    int d = height(root);

for(int i=1;i<=d;i++)
{
    print_level_order(root,i);
}


}

int main(){

node *root = new node(1);
root->left = new node(2);
root->right = new node(3);
root->left->left = new node(4);
root->left->right = new node(5);

bfs(root);
}