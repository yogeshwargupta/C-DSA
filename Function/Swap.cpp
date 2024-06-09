#include<iostream>
using namespace std;
// when funcn have same name but diff argument -> Funcn Overloading
void swap(int &m,int &n){            // Pass by reference
    int c=0;
    c=n;
    n=m;
    m=c;
}

int main(){
    int a=5, b=23;
    swap(a,b);
    cout<<a<<endl<<b;
}