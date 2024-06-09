#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the no. of Lines: ";
    cin>>m;
    cout<<"Enter no of Characters: ";
    cin>>n;
    char ch='F';
    for(int j=1;j<=n;j++){
        for(ch = 'F';ch <= 'K';ch++){
        cout<<ch+1;}       
        cout<<endl;
    }
}