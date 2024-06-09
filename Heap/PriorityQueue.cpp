#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //priority_queue<int>p;   //max heap
    priority_queue<int, vector<int>, greater<int> >p;   //min heap

    p.push(10);
    p.push(20);
    p.push(11);
    p.push(18);
    p.push(15);


    cout<<p.top()<<endl;
    p.pop();
    cout<<p.top()<<endl;

    cout<<p.size()<<endl;
    cout<<p.empty()<<endl;

    while(!p.empty()){
    cout<<p.top()<<" ";
    p.pop();
    }
}