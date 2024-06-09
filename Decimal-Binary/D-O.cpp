#include<iostream>
using namespace std;
int main (){
int n;
cin>>n;
int ans=0,i=1;
// while(n){
//     int rem = n%8;
//     n=n/8;
//     ans=rem*i+ans;
//     i=i*10;
// }

for(i;n>0;i=i*10){
    int rem = n%8;
    n=n/8;
    ans=rem*i+ans;  
}
cout<<ans;
}