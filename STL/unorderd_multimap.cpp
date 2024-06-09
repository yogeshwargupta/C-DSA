#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Dublicate keys are allowed
//not neccessary it should be in sorted form
//Hashing function
//insert, delete, search in constant time

int main(){
   unordered_multimap<int,int>m;
   m.insert(make_pair(20,30));
   m.insert(make_pair(30,310));
   m.insert(make_pair(40,230));
   m.insert(make_pair(20,230));
   m.insert(make_pair(50,30));

   //m[20]=70;   //not allowed

   for(auto it=m.begin();it!=m.end();it++)
   cout<<it->first<<" "<<it->second<<endl;
}