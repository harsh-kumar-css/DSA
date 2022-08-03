#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
};

void push_front(node*&head , int data)
{
    node* new_node = new node();
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

void push_back(node*& head , int data)
{
    node* new_node = new node();
    new_node->data = data;
    new_node->next = NULL;
    if(head == NULL)
     {
         head = new_node;
         return;
     }
     else
     {   
         node* last = head;
         while(last->next != NULL)
         {
             last = last->next;
         }

         last->next = new_node;
     }

     return;
}

void print(node*head)
{
    while(head!= NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}


void del_node(node*& head, int data)
{
    
    if(head == NULL)
    {
        cout<<"empty list, nothing to delete !";
        return;
    }
    if(head->data == data)
    {
        head = head->next;
        return;
    }
    node* del_node = head;
    node* prev = NULL;
    while(del_node->data != data && del_node->next != NULL)
    {
        prev = del_node;
        del_node = del_node->next;
    }

    if(del_node->next == NULL && del_node->data != data)
    {
        cout<<"element to be deleted not found in the list !";
    }
    else
    {
        prev->next = del_node->next;
        
    }
    
}

int main()
{
    node*first = new node();
    node*second = new node();
    node*third = new node();
    first->data = 1;
    first->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    print(first);

    push_front(first , 0);

    print(first);

    push_back(first , 4);

    print(first);

    del_node(first , 3);

    print(first);

    del_node(first , 5);

     print(first);

    del_node(first , 0);

     print(first);
}