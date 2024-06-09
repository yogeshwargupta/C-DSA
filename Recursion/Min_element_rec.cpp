#include<iostream>
using namespace std;
 int findMin(int arr[],int n){
    int mini=INT_FAST32_MAX;
    if(n>-1){  
    int rest=findMin(arr,n-1);
    return min(arr[n],rest);
 }
}
int main(){
    int arr[1000],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findMin(arr,n-1)<<endl;
}