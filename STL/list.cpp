#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//push_front, push_back
//size
//pop_front(), pop_back()
//iterator

int main(){
    list<int>l;
    l.push_back(1);
    l.push_back(33);
    l.push_back(454);
    l.push_back(565);
    l.push_back(677);
    l.push_front(0);
    l.pop_back();
    l.pop_front();


    // cout<<l.front()<<" "<<l.back()<<endl;
    // cout<<l.size();

    for(auto it=l.begin();it!=l.end();it++)   //auto-list<int>::iterator
    cout<<*it<<" ";
    cout<<endl;
    for(auto it=l.rbegin();it!=l.rend();it++)   //auto-list<int>::iterator
    cout<<*it<<" ";
}
