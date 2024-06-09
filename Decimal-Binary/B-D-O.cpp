#include<iostream>
using namespace std;
int main (){
    int bn;
    cin>>bn;
    int ans=0,ans2=0,i=1,j=1;
while(bn){
    int rem=bn%10;
    bn=bn/10;
    ans=rem*i+ans;
    i=i*2;
}
cout<<ans<<endl;
for(j;ans>0;j=j*10){
    int rem2=ans%8;
    ans=ans/8;
    ans2=rem2*j+ans2;
}
cout<<ans2;
}