#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//unique keys are present, dublicate keys not allowed
//not neccessary it should be in sorted form
//Hashing function
//insert, delete, search in constant time

int main(){
   unordered_map<int,int>m;
   m.insert(make_pair(20,30));
   m.insert(make_pair(30,310));
   m.insert(make_pair(40,230));
   m.insert(make_pair(20,230));
   m.insert(make_pair(50,30));

   m[20]=70;   //allowed

   for(auto it=m.begin();it!=m.end();it++)
   cout<<it->first<<" "<<it->second<<endl;
}