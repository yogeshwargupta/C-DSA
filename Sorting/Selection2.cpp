#include<iostream>
using namespace std;
int main(){
  int arr[1000],n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n-1;i++){
    int index=i;
    for(int j=i+1;j<n;j++){
       if(arr[j]>arr[index])
       index=j; 
    }
    swap(arr[i],arr[index]);
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}