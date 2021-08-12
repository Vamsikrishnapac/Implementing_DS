
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

void printpostorder(Node* node){
    if(node == NULL)
        return;
    
    printpostorder(node->left);
    printpostorder(node->right);
    cout<<node->data<<" ";
}

void printInorder(Node* node){
    if(node == NULL)
        return;
    printInorder(node->left);
    cout<<node->data<<" ";
    printInorder(node->right);
}
void printpreorder(Node* node){
    if(node == NULL)
        return;
    cout<< node-> data<<" ";
    printpreorder(node->left);
    printpreorder(node->right);
}


int main(){
    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    printpreorder(root);
    cout<<endl;
    printInorder(root);
    cout<<endl;
    printpostorder(root);
    cout<<endl;
    return 0;
    
  
    
}
