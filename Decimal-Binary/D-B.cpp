#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int ans=0,i=1;
    // while(n>0){
    //     int rem=(n%2);
    //     n=n/2;
    //     ans=rem*i+ans;     
    //     i=i*10;
    // }
    // cout<<ans;
for(i;n>0;i=i*10){
    int rem=(n%2);  // rem=n&1;
    n=n/2;         //  n=n>>1;
    ans=rem*i+ans; 
}
 cout<<ans;
}