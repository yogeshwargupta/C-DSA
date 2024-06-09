#include<iostream>
using namespace std;
string reverse(string s,int start,int end){
    if(start>=end)
    return s;
    swap(s[start],s[end]);
    return reverse(s,++start,--end);
}
int main(){
    string s;
    cin>>s;
    int start=0,end=s.size()-1;
    cout<<reverse(s,start,end)<<endl;
}