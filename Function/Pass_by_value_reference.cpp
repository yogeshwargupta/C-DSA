#include<iostream>
using namespace std;
void inc(int n){          //pass by value
    n++;
}
void incr(int &n){        //pass by reference
    n++;
}
int main(){
 int a=5;
 inc(a);
 incr(a);
 cout<<a;

}