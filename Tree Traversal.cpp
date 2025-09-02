#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};


void preorder(Node*root){
    if(root) {
        cout << root->data <<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(Node*root){
    if(root) {
        cout << root->data <<" ";
        inorder(root->left);
        inorder(root->right);
    }
}
void postorder(Node*root){
    if(root) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data <<" ";
    }
}
int main(){
    Node*root = new Node(10);
    root->left = new Node(11);
    root->right = new Node(12);
    root->left->left = new Node(13);
    root->left->right = new Node(14);
    root->right->left = new Node(15);
    root->right->right = new Node(16);
    cout<< "preorder:";
    preorder(root);
    cout << endl;
    cout<< "inorder:";
    inorder(root);
    cout << endl;
    cout<< "postorder:";
    postorder(root);
    cout << endl;
}
