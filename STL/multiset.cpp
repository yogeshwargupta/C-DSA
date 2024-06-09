#include<iostream>
#include<bits/stdc++.h>

using namespace std;


//dublicate values are stord
//ascending ordeer
//insertion deletion ans serch --->TC=O(log n)
//Generally implemented using Red-Black Tree & ALV Tree

int main(){
    multiset<int>s;
    s.insert(12);
    s.insert(121);
    s.insert(3);
    s.insert(54);
    s.insert(787);
    s.insert(1);
    s.insert(234);

  for(auto it=s.begin();it!=s.end();it++) 
  cout<<*it<<" ";
}