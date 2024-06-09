#include<iostream>
using namespace std;
int main(){
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=INT32_MIN,second=INT32_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>ans)
        ans=arr[i];
    }
    for(int i=0;i<n;i++){
        if(ans!=arr[i]) 
        second=max(second,arr[i]);
    }
    cout<<second;   
}

