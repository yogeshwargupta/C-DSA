#include<iostream>
using namespace std;
// int reverse(int arr[],int n){
//     int z[100];
//     for(int i=n-1;i>=0;i--){
//         z[100]= arr[i];
//     }
//     return z[100];
// }
int main(){
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // cout<<reverse(arr,n);
    int start=0,end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }

