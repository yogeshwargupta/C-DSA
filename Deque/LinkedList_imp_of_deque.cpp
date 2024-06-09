#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next, *prev;
    Node(int value){
        data=value;
        next=prev=NULL;
    }
};

class Deque{
   Node *front,*rear;
   public:
   Deque(){
    front=rear=NULL;
   }

   void push_front(int x){
    if(front==NULL){
    cout<<"Pushed from front Element: "<<x<<endl;
    front=rear=new Node(x);
    return;
    }

    else{
        Node *temp=new Node(x);
        cout<<"Pushed from front Element: "<<x<<endl;
        temp->next=front;
        front->prev=temp;
        front=temp;
        return;
    }
   }

   void push_back(int x){
    if(front==NULL){
        front=rear=new Node(x);
        cout<<"Pushed from back Element: "<<x<<endl;
        return;
    }
    else{
        Node *temp=new Node(x);
        cout<<"Pushed from back Element: "<<x<<endl;
        rear->next=temp;
        temp->prev=rear;
        rear=temp;
        return;
    }
   }

   void pop_front(){
       if(front==NULL)
       return;
       else{
        Node *temp=front;
        cout<<"Popped from front Element: "<<temp->data<<endl;
        front=front->next;
        delete temp;
        if(front)
            front->prev=NULL;
        else
            rear=NULL;
       }
   }

   void pop_back(){
       if(front==NULL)
       return;
       else{
        Node *temp=rear;
        cout<<"Popped from back Element: "<<temp->data<<endl;
        rear=rear->prev;
        delete temp;
        if(rear)
            rear->next=NULL;
        else
            front=NULL;
       }
   }
   int start(){
    if(front==NULL)
        return -1;
    else
        return front->data;
   }

   int end(){
    if(front==NULL)
        return -1;
    else
        return rear->data;
   }
};

int main(){
   Deque D;
   D.push_front(5);
   D.push_front(4);
   D.push_back(2);
   D.push_front(9);
   D.push_back(12);
   cout<<D.start()<<endl;
   cout<<D.end()<<endl;
   D.pop_back();
   D.pop_front();
   D.pop_back();
   cout<<D.start()<<endl;
   cout<<D.end()<<endl;
}