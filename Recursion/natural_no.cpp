#include<iostream>
using namespace std;
// void print (int i ,int n){
//     if(i>n)
//     return;
//     cout<<i<<endl;
//     print(i+1,n);
// }
// int main(){
//     int n=100;
//     print(1,n);
// }
void print(int n){
    if(n>0){
    print(n-1);
    cout<<n<<endl;
    }
}


int main(){
    int n=100;
    print(n);
}