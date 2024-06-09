#include<iostream>
using namespace std;
bool palindrome(string s,int start,int end){
    if(start>=end)
     return 1;

    if(s[start]!=s[end])
     return 0;
     return palindrome(s,start+1,end-1);
}

int main(){
    string s;
    cin>>s;
    int start=0,end=s.size()-1;
    cout<<palindrome(s,start,end)<<endl;
}