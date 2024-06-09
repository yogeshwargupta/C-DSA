#include<iostream>
using namespace std;
// void print(int i,int n){
//     if(i<n+1){
//     cout<<i<<endl;
//     print(i+2,n);
//     }
// }
// int main(){
//     int n=100;
//     print(2,n);
// }
void print(int n){
    if(n>0){
    print(n-2);
    cout<<n<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    if(n%2==1)
    n--;
    print(n);
}