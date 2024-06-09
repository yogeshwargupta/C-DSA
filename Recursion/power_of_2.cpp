#include<iostream>
using namespace std;
int power(int n){
       if(n>0){
        return 2*power(n-1);
       }
       else
       return 1;
}
int main(){
    int n;
    cin>>n;
    int result = power(n);
    cout<<result<<endl;
}