#include <bits/stdc++.h>
using namespace std;

class Node{
public: 
    int data;   // this contains the data of the node 
    Node* next; // this contains the reference to the next node 
};

void printlist(Node* n){
    while(n!=NULL){
        cout<< n->data<<" ";
        n = n->next;
    }
}

int main(){
    // this is a list with 3 nodes 
    
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    
    // allocate 3 nodes in the heap 
    head = new Node();
    second = new Node();
    third = new Node();

    // allocating data and next node.
    head -> data = 1;
    head -> next = second;
    
    // allocating data and next node. 
    second -> data = 2;
    second -> next = third;
    
    // allocating data and next node. 
    third -> data = 3;
    third -> next = NULL;
    
    printlist(head);
    
    return 0;
    
    
}
