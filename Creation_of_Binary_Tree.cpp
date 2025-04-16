#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* right;
    Node* left;

    Node(int data){
        this->data = data;
        this->right = nullptr;
        this->left = nullptr;
    }

};

Node* createNode(int data){
    Node* newNode = new Node(data);
    return newNode; 
}

void preOrderTraversal(Node* root){
   //Base Case if Node is NULL 
    if(root == NULL){
        return;
    }

    cout<<root->data<<endl;
    preOrderTraversal(root->right);
    preOrderTraversal(root->left);
}

int main(){
    Node* root = createNode(5);
    root->left = createNode(6);
    root->right = createNode(7);

    preOrderTraversal(root);
    return 0;

}