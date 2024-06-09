#include<iostream>
using namespace std;
int main(){
    int n;
cout<<"Enter the number: ";
cin>>n;

while(n>9){
int sum=0;
while(n){
    int rem=n%10;
    n=n/10;
    sum+= rem;
    }
   n=sum;
}
    cout<<n;
}
