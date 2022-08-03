#include<bits/stdc++.h>
using namespace std;

class Node{

      int data ;
     Node *right , *left;
    public:


    Node(){

    }

    Node(int k){
        data = k;
        right = left  = NULL;
    }

    Node* insert(Node*root , int k)
    {
        if(root == NULL) return new Node(k);

        if(root->data > k)
        {
            if(root->left == NULL)
            {
                root->left = new Node(k);

                return root;
            }
            insert(root->left,k);
        }
        if(root->data < k)
        {
             if(root->right == NULL)
            {
                root->right = new Node(k);

                return root;
            }
            insert(root->right,k);
        }
    }

    Node* Delete(Node* root , int val)
    {
        if(root == NULL) return root;

        if(root->data > val)
        {
            root->left = Delete(root->left , val);
            
            return root;
        }
        if(root->data < val)
        {
            root->right = Delete(root->right,val);

            return root;
        }

        if(root->left == NULL)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        if(root->right == NULL)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node *succParent = root;
        Node *succ = root->right;

        while(succ->left != NULL)
        {
            succParent = succ;
            succ = succ->left;
        }

        if(succParent != root)
        {
            succParent->left = succ->right;
        }
        if(succParent == root)
        {
            succParent->right = succ->right;
        }

        root->data = succ->data;
        delete succ;
        return root;
    }

    void inorder(Node *root)
    {
        if(root == NULL) return;

        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
};

int main()
{
    Node b, *root = NULL;

    root = b.insert(root,50);
    b.insert(root,30);
    b.insert(root,20);
    b.insert(root,40);
    b.insert(root,70);
    b.insert(root,60);
    b.insert(root,80);

    b.inorder(root);

    b.Delete(root,80);
    cout<<endl;
    b.inorder(root);
    b.Delete(root,50);
    cout<<endl;
    b.inorder(root);
}