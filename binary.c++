#include <iostream>
using namespace std;

struct Node {
    int data;
    Node*left;
    Node*right;
    Node(int val) {
        data=val;
        left=right=nullptr;
    }
};
void inorder(Node*root){
    if(root){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
 Node*insert(Node*root,int key){
    if(root==nullptr){
        return new Node (key);
    }
    else if(key<root->data){
        root->left=insert(root->left,key);
    }
    else if(key>root->data){
        root->right=insert(root->right,key);
    }
        return root;
}
int main() {
    int n;
    cout<<"Enter the total no of Nodes:";
    cin>>n;
    int*arr=new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
      Node*root=nullptr;
    for (int i=0; i<n; i++) {
     root=insert(root,arr[i]);   
    }
    inorder(root);
}
