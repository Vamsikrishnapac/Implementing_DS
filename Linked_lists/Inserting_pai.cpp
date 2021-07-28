#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};
// pushing on front
void push(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node-> data = new_data;
    new_node-> next = *head_ref;
    *head_ref = new_node;
}

// inserting after a given node 
void insertafter(Node* prev_node, int new_data){
    if(prev_node == NULL)
    {
        cout<<"the prev node is null" ;
        return;
    }
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node-> next = prev_node ->next;
    prev_node-> next = new_node;
}

// append the linked list 
void append(Node** head_ref, int new_data){
    
    Node* new_node = new Node();
    Node *last = *head_ref;
    
    new_node -> data = new_data;
    new_node -> next = NULL;
    
    if(*head_ref == NULL){
        *head_ref = new_node;
        return;
    }
    while(last->next!=NULL)
        last  = last-> next;
        
    last -> next = new_node;
    return;
}

void printlist(Node *node)
{
    while (node!=NULL)
    {
        cout<<" "<<node->data;
        node = node->next;
    }
}

int main(){
        Node*head = NULL;
        push(&head, 7);
        push(&head,2);
        push(&head,4);
        insertafter(head,1);
        append(&head,77);
        printlist(head);
        return 0;
}
