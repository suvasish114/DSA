#include <iostream>
using namespace std;

// Node structure
struct Node{
    int data;
    int *lchild, *rchild;
};

// creates a new node and return it
Node* newNode(int data){
    Node* temp = new Node();
    temp->data = data;
    temp->lchild = temp->rchild = NULL;
    return temp;
}
int main(){
    return 0;
}