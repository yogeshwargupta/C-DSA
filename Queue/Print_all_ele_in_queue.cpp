#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(3);
    q.push(2);
    q.push(5);
    q.push(51);
    q.push(54);

   int n=q.size();
   while(n--){
    cout<<q.front()<<" ";
    q.push(q.front());
    q.pop();
   }
   cout<<endl;
   cout<<q.size()<<endl;
}