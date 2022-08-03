#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void push_back(node*& head , int data)
{   
    node * new_node = new node();
      new_node->data = data;
      new_node->next = NULL;
  if(head == NULL)
  {
      head = new_node;
      return;
  }
  node* first = head;
    while(first->next != NULL)
    {
        first = first->next;
    }
    first->next= new_node;

}
void print(node* root)
{
  node*head = root;
  while (head != NULL)
  {
      cout<<head->data<<" ";
      head = head->next;
  }
  cout<<endl;
  
}
void delete_node(node*& root,int node_number)
{
    if(node_number == 0)
    {
        root = root->next;
        return;
    }
    node* first = root;
    while(node_number != 1)
    {
        node_number--;
        first = first->next;

    }
    first->next = first->next->next;
    first->next->next= NULL;
}
int main()
{
    node* first = NULL;
    push_back(first , 0);
    push_back(first ,1);
    push_back(first,2);
    push_back(first,3);
    print(first);
    delete_node(first , 2);
    print(first);
     delete_node(first , 0);
    print(first);

}