#include<iostream>
using namespace std;
int main (){
    int arr[1000],n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int i=n-2;i>=0;i--){
    for(int j=i;j>0;j--){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j-1]);
           }
        else
            break;
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}