#include<iostream>
using namespace std;

class Deque{
    int front,rear,size;
    int *arr;
    public:
    Deque(int n){
        arr=new int[n];
        size=n;
        front=rear=-1;
    }

    bool IsEmpty(){
        return front==-1;
    }

    bool IsFull(){
        return (rear+1) % size==front;
    }

    void push_front(int x){
        if(IsEmpty()){
            front=rear=0;
            arr[0]=x;
            cout<<"Element pushed at front is: "<<x<<endl;
            return;
        }
        else if(IsFull())
        return;
        else{
            front=(front-1+size)%size;
            arr[front]=x;
            cout<<"Element pushed at front is: "<<x<<endl;
            return;
        }
    }

    void push_back(int x){
        if(IsEmpty()){
            front=rear=0;
            arr[0]=x;
            cout<<"Element pushed at back is: "<<x<<endl;
            return;
        }
        else if(IsFull())
        return;
        else{
            rear=(rear+1)%size;
            arr[rear]=x;
            cout<<"Element pushed at back is: "<<x<<endl;
            return;
        }
    }

    void pop_front(){
        if(IsEmpty())
        return;

        else{
            cout<<"Element popped from front is: "<<arr[front]<<endl;
            if(front==rear)
            front=rear=-1;
             
            else
            front=(front+1)%size;
        }
    }

    void pop_back(){
        if(IsEmpty())
        return;

        else{
            cout<<"Element popped from back is: "<<arr[rear]<<endl;
            if(front==rear)
            front=rear=-1;
            
            else
            rear=(rear-1+size)%size;
        }
    }

    int start(){
    if(IsEmpty())
        return -1;
    else
        return arr[front];
   }

   int end(){
    if(IsEmpty())
        return -1;
    else
        return arr[rear];
   }
};
int main(){
   Deque D(6);
   cout<<D.IsEmpty()<<endl;
   cout<<D.IsFull()<<endl;
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
   cout<<D.IsEmpty()<<endl;
   cout<<D.IsFull()<<endl;
}