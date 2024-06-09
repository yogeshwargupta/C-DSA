#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//it contains only unique elements
//search, insert and removal have average constant TC
//It uses hashing technique to achieve it

int main(){
    unordered_set<int>s;
    s.insert(21);
    s.insert(4);
    s.insert(81);
    s.insert(11);
    s.insert(2);
    s.insert(43);
    s.insert(112);
    s.insert(0);

    for(auto it=s.begin();it!=s.end();it++)
    cout<<*it<<" ";
}

//set: unique element, sorted
//multiset: dublicate, sorted
//unordered_set: unique element, unsorted
//unorderedmultiset: dublicate, unsorted 