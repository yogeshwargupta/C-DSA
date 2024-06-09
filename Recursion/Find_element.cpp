#include<iostream>
using namespace std;
bool found(int arr[],int n,int x){
    if(n>=0){
        if(arr[n] == x)
        return 1;
        return found(arr,n-1,x);
    }
    return 0;
}
int main(){
    int arr[1000],n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>x;
    cout<<found(arr,n-1,x)<<endl;
}