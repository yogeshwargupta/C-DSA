#include<iostream>
using namespace std;
  string l2u(string s,int n){
    if(n==-1)
    return "";
    return l2u(s,n-1) + char (s[n]-32);  //char(s[n]-'a' + 'A')
  }
int main(){
    string s;
    cin>>s;
    int n=s.size()-1;
    cout<<l2u(s,n)<<endl;
}