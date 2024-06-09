#include<iostream>
using namespace std;
int power(int num,int n){
    if(n==0)
    return 1;
    return num*power(num,n-1);
}
int main(){
    int num,n;
    cin>>num>>n;
    int result = power(num,n);
    cout<<result<<endl;
}