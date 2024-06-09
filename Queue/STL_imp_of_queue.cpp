#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q1;
    q1.push(3);
    q1.push(2);
    q1.push(5);
    q1.push(51);
    q1.push(54);
    cout<<q1.size()<<endl;
    q1.pop();
    cout<<q1.size()<<endl;
    q1.push(59);
    q1.push(59);
    cout<<q1.front()<<endl;
    cout<<q1.size()<<endl;
    cout<<q1.empty()<<endl;
    q1.pop();
    cout<<q1.front()<<endl;
    cout<<q1.size()<<endl;
}