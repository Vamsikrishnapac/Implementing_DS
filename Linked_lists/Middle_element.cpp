#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};
void push(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node -> data = new_data;
    new_node -> next = *head_ref;
    *head_ref = new_node;
}


void middle(Node**head_ref){
    Node* run = *head_ref;
    Node* walk = *head_ref;
    
    while(run!= NULL && run->next!=NULL){
        run= run->next->next;
        walk= walk ->next;
    }
    cout<<"middle element in the list is -"<<walk->data;
}
void printlist(Node* node){
    while(node!= NULL){
        cout<<node->data<<"->";
        node= node->next;
    }
    cout<<"NULL";
    cout<<endl;
}

int main(){
    Node* head = NULL;
    for(int i =0; i<5;i++)
    {
        push(&head,i);
    }
    printlist(head);
    middle(&head);
    
}
