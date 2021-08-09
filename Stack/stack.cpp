#include <bits/stdc++.h>
using namespace std;

int top = -1;


void push(int stack[], int x, int n){
    if(top == n-1){
        cout<< "overflow";
    }
    else{
        top = top+1;
        stack[top] = x;
    }
}
bool isempty(){
    if(top == -1) 
        return true;
    else
        return false;
}


void pop(int stack[], int n){
    if(isempty()){
        cout<<"empty stack";
    }
}

int topElement(int stack[]){
    return stack[top] ;
}


int size(){
    int g = top +1;
    return g;
}

int main(){
    int stack [5];
    push(stack,1,5);
    push(stack,2, 5);
    cout<< size()<<endl;
    cout<<top;
}
