#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//It stores data in key-value pair
//key may not be unique(dublicate key allowed)
//it uses Red-black Tree or AVL for implementation
//Insertion, deletion and searc in logrithmic TC
//O(log n), making them fast for most use cases

int main(){
    // map creation

    multimap<int,int>m;
    m.insert(make_pair(20,30));
    m.insert(make_pair(30,310));
    m.insert(make_pair(40,230));
    m.insert(make_pair(20,230));
    m.insert(make_pair(50,30));
    // m[100]=60;    //not allowed in multimap
    // m[20]=70;
    for(auto it=m.begin();it!=m.end();it++)
    cout<<it->first<<" "<<it->second<<endl;



    // m.erase(20);   //delete operation
    // for(auto it=m.begin();it!=m.end();it++)
    // cout<<it->first<<" "<<it->second<<endl;

}