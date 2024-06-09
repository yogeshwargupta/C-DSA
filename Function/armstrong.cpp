#include<iostream>
using namespace std;
int main(){
    int n,rem=0,ams=0;
    cout<<"Enter the number: ";                 // Armstrong No. Check
    cin>>n;
    int p=n;
    int real=n;
    int count =0;
    while(n){
        n/=10;
        count++;
    }
    while(p){
        rem=p%10;
        p/=10;
        int z=1;
        for(int i=1;i<=count;i++){              // ans= ans+pow(rem,count);
          z*=rem;
        }
        ams=ams+z;
    }
    if(real==ams){
        cout<<"Its a Armstrong Number."<<endl;
    }
    else cout<<"It isn't a armstrong Number.";
}