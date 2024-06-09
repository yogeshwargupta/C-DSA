#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=NULL;
    }
};

class Queue{
    Node *front, *rear;
    public:
    Queue(){
        rear=front=NULL;
    }

    bool IsEmpty(){
        return front==NULL;
    }
    void push(int x){
        if(IsEmpty()){
            front=new Node(x);
            cout<<"Element Pushed: "<<x<<endl;
            rear=front;
            return;
        }
        else{
            rear->next=new Node(x);
            cout<<"Element Pushed: "<<x<<endl;
            rear=rear->next;
        }
    }
    void pop(){
        if (IsEmpty()){
            cout<<"Queue Underflow";
            return;
        }
        else{
            Node *temp=front;
            front=front->next;
            cout<<"Element Popped"<<endl;
            delete temp;
        }
    }
    int start(){
        if(IsEmpty()){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        else
        return front->data;
    }
};

int main(){
    Queue q1;
    q1.push(3);
    q1.push(2);
    q1.push(5);
    q1.push(51);
    q1.push(54);
    q1.pop();
    q1.push(59);
    q1.push(59);
    cout<<q1.start()<<endl;
    cout<<q1.IsEmpty()<<endl;
    q1.pop();
    cout<<q1.start()<<endl;
}