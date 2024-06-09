#include<iostream>
#include<deque>
using namespace std;

int main(){
   deque<int>D;
   D.push_front(5);
   D.push_front(4);
   D.push_back(2);
   D.push_front(9);
   D.push_back(12);
   cout<<D.front()<<endl;
   cout<<D.back()<<endl;
   D.pop_back();
   D.pop_front();
   D.pop_back();
   cout<<D.front()<<endl;
   cout<<D.back()<<endl;
}