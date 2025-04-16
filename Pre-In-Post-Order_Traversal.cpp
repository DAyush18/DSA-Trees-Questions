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

//PreOrder Traversal
void preOrderTraversal(Node* root){
   //Base Case if Node is NULL 
    if(root == NULL){
        return;
    }

    cout<<root->data<<endl;
    preOrderTraversal(root->right);
    preOrderTraversal(root->left);
}

//Inorder Traversal
void inOrderTraversal(Node* root){
    //Base Case if Node is NULL 
     if(root == NULL){
         return;
     }
 
     inOrderTraversal(root->right);
     cout<<root->data<<endl;
     inOrderTraversal(root->left);
 }


//Post Order Traversal
 void postOrderTraversal(Node* root){
    //Base Case if Node is NULL 
     if(root == NULL){
         return;
     }
 
     postOrderTraversal(root->right);
     postOrderTraversal(root->left);
     cout<<root->data<<endl;

 }

int main(){
    Node* root = createNode(5);
    root->left = createNode(6);
    root->right = createNode(7);

    cout<<"Pre - Order- Traversal"<<endl;
    preOrderTraversal(root);
    cout<<"In - Order- Traversal"<<endl;
    inOrderTraversal(root);
    cout<<"Post - Order- Traversal"<<endl;
    postOrderTraversal(root);
    return 0;

}