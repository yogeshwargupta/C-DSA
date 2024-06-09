#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node *left, *right;
    Node(int value){
        data=value;
        left=right=NULL;
    }
};

Node * BinaryTree(){
    int x;
    cin>>x;
    if(x==-1)
    return NULL;

    Node *temp=new Node(x);
    cout<<"Enter the Left Child of "<<x<<": ";
    temp->left=BinaryTree();
    cout<<"Enter the Right Child of "<<x<<": ";
    temp->right=BinaryTree();
    return temp;
}

void preOrder(Node* root){
    if(root==NULL)
    return;
  
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root){
    if(root==NULL)
    return;
  
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node* root){
    if(root==NULL)
    return;
  
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    cout<<"Enter the root Node: ";
    Node *root;
    root = BinaryTree();

    cout<<"Pre-Order: ";
    preOrder(root);
    cout<<endl;

    cout<<"In-Order: ";
    inOrder(root);
    cout<<endl;

    cout<<"PostOrder: ";
    postOrder(root);
    cout<<endl;
}