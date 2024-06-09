#include<iostream>
using namespace std;
int sqSum(int n){
    if(n==0)
    return 0;
    return n*n+sqSum(n-1);
}
int main(){
    int n;
    cin>>n;
    int result = sqSum(n);
    cout<<result<<endl;
}