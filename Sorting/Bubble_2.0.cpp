#include<iostream>
using namespace std;
int main(){
    int arr[1000],n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
  for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
        if(arr[j]>arr[i]){
            swap(arr[j],arr[i]);
        }
    }
}
   for(int i=0;i<n;i++)
   cout<<arr[i]<<" ";
}