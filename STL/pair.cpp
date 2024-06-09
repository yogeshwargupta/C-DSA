#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
   //pair<string,int>p;
    // Two method insert
   //p=make_pair("RAM",30);
   //p.firsr="RAM";
   //p.second=30;

   //pair<string,pair<int,int>>p;
   pair<pair<string,int>,int>p;
//    p.first="RAM";
//    p.second.first=20;
//    p.second.second=34;
//p = make_pair("RAM", make_pair(25,80));
p=make_pair(make_pair("RAM",80),25);
    cout<<p.second<<endl;
    cout<<p.first.first<<endl;
    cout<<p.first.second<<endl;
}