#include<iostream>
using namespace std;
bool binary(int arr[],int start, int end,int x){
    if(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==x)
    return 1;
    else if(arr[mid]<x)
    return binary(arr,mid+1,end,x);
    else
    return binary(arr,start,mid-1,x);
    }
    return 0;
}
int main(){
    int arr[1000],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int start=0,end=n-1;
    cout<<binary(arr,start,end,x);
}