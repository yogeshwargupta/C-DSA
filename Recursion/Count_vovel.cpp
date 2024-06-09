#include<iostream>
using namespace std;
int CountVovel(string s, int n){
    if(n<0)
    return 0;

    int count = (s[n]=='a' || s[n]=='e' || s[n]=='i' || s[n]=='o' || s[n]=='u' || s[n]=='A' || s[n]=='E' || s[n]=='I' || s[n]=='O' || s[n]=='U');
    return count + CountVovel(s,n-1);
}
int main(){
    string s;
    cin>>s;
    int n=s.size()-1;
    cout<<CountVovel(s,n)<<endl;
}