#include<iostream>
using namespace std;
bool prime(int n){
    if(n<2){
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}

int fact (int n=3){                   // if no value of n will be passed then it will take 3 by default
    int ans=1;
    for(int i=1;i<=n;i++){
        ans =ans*i;
    }
    return ans;
}
int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    cout<<prime(a)<<endl;
    cout<<prime(b)<<endl;
    cout<<prime(a-b)<<endl;
    cout<<fact(a)<<endl;
    cout<<fact(b)<<endl;
    cout<<fact(a-b)<<endl;
}