#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//It stores data in key-value pair
//key should be unique
//it uses Red-black Tree or AVL for implementation
//Insertion, deletion and searc in logrithmic TC
//O(log n), making them fast for most use cases

int main(){
    // map creation

    map<int,int>m;
    m.insert(make_pair(20,30));
    m.insert(make_pair(30,310));
    m.insert(make_pair(40,230));
    m.insert(make_pair(20,230));
    m.insert(make_pair(50,30));
    m[100]=60;    //insert + update value
    m[20]=70;
    for(auto it=m.begin();it!=m.end();it++)
    cout<<it->first<<" "<<it->second<<endl;

    cout<<m[100]<<endl;
    if(m.count(20))
    cout<<m[20]<<endl;

    m.erase(20);   //delete operation
    for(auto it=m.begin();it!=m.end();it++)
    cout<<it->first<<" "<<it->second<<endl;
}