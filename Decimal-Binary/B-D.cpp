#include<iostream>
using namespace std;
int main (){
int bn;
cin>>bn;
int ans=0, i=1 ;
// while(bn>0){
//     int rem=(bn%10);
//     bn =bn/10;
//     ans=rem*i+ans;
//     i=i*2;
// }
   for(i;bn>0;i=i*2){
    int rem=(bn%10);
    bn =bn/10;
    ans=rem*i+ans;
   }
   cout<<ans;
}