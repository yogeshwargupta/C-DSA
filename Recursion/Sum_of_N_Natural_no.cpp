#include<iostream>
using namespace std;
int sum(int n){
    if(n>0)
    return n+sum(n-1);
}
int main(){
    int n;
    cin>>n;
    int result = sum(n);
    cout<<"Sum of "<<n<<" ntural no. is: "<<result<<endl;
}