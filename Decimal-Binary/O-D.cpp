#include<iostream>
using namespace std;
int main (){
int n;
cin>>n;
int ans=0, i=1;
while(n){
    int rem=n%10;
    n=n/10;
   ans=rem*i+ans;
   i=i*8;
}
cout<<ans;
}