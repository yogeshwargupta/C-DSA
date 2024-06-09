#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int front,rear,size;
  public:
  Queue(int n){
    arr = new int [n];
    front=rear=-1;
    size=n;
  }
  bool IsEmpty(){
    return front==-1;
  }
  bool IsFull(){
    return (rear+1)%size==front;
  }
  void push(int x){
    if(IsEmpty()){
        front=rear=0;
        arr[0]=x;
        cout<<"Element Pushed: "<<x<<endl;
    }
    else if(IsFull())
    cout<<"Queue Overflow"<<endl;
    else{
        rear=(rear+1)%size;
        arr[rear]=x;
        cout<<"Element Pushed: "<<x<<endl;
    }
  }
  void pop(){
    if(IsEmpty()){
        cout<<"Queue Underflow"<<endl;
    }
    else{
        if(front==rear)
        front=rear=-1;
        else
        front=(front+1)%size;
        cout<<"Element Popped"<<endl;
    }
  }
  int start(){
    if(IsEmpty()){
        cout<<"Queue is Empty"<<endl;
        return -1;
    }
    else
    return arr[front];
  }
};

int main(){
    Queue q1(5);
    q1.push(3);
    q1.push(2);
    q1.push(5);
    q1.push(51);
    q1.push(54);
    q1.pop();
    q1.push(59);
    q1.push(59);
    cout<<q1.start()<<endl;
}
