#include<iostream>
using namespace std;

class Node {
    public:
    int data, height;
    Node *left, *right;

    Node (int value){
        data=value;
        height=1;
        left=right=NULL;
    }
};

int getheight(Node *root){
    if(!root)
    return 0;

    return root->height;
}

int getbalance(Node *root){
    return getheight(root->left) - getheight(root->right);
}

//Right Roation
Node* rightRotation(Node *root){
   Node *child=root->left;
   Node *childRight=child->right;
   child->right=root;
   root->left=childRight;

   //Update height
   root->height=1+max(getheight(root->left),getheight(root->right));
   child->height=1+max(getheight(child->left),getheight(child->right));

   return child;
}

//Left Roation
Node* leftRotation(Node *root){
   Node *child=root->right;
   Node *childLeft=child->left;

   child->left=root;
   root->right=childLeft;

   root->height=1+max(getheight(root->left),getheight(root->right));
   child->height=1+max(getheight(child->left),getheight(child->right));
  
   return child;
}

Node *insert(Node *root, int key){
    //Doesn't exist
    if(!root)
    return new Node(key);
    //exist
    if(key<root->data)//left
    root->left=insert(root->left,key);
    else if(key>root->data)//right
    root->right=insert(root->right,key);
    else
    return root;

    //update height

    root->height=1+max(getheight(root->left),getheight(root->right));

    //Balancing check

    int balance=getbalance(root);

    //LL
    if(balance>1&&key<root->left->data){
        return rightRotation(root);
    }
    //RR
    else if(balance<-1&&root->right->data<key){
        return leftRotation(root);
    }
    //LR
    else if(balance>1&&key>root->left->data){
        root->left = leftRotation(root->left);
        return rightRotation(root);
    }
    //RL
    else if(balance<-1&&root->right->data>key){
        root->right = rightRotation(root->right);
        return leftRotation(root);
    }
    //No unbalancing
    else
    return root;
}

void preorder(Node *root){
    if(!root)
    return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node *root){
    if(!root)
    return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node *root){
    if(!root)
    return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){

//dublicate not allowed
Node *root=NULL;

root=insert(root,10);
root=insert(root,20);
root=insert(root,30);
root=insert(root,50);
root=insert(root,70);
root=insert(root,5);
root=insert(root,100);
root=insert(root,95);
root=insert(root,40);

cout<<"Preorder: ";
preorder(root);
cout<<endl;

cout<<"Inorder: ";
inorder(root);
cout<<endl;

cout<<"Postorder: ";
postorder(root);
cout<<endl;
}