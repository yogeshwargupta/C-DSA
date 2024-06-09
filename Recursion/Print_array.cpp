#include<iostream>
using namespace std;
void print(int arr[],int n){
    if(n>=0){
    print(arr,n-1);
    cout<<arr[n]<<" ";
    } 
}
void printRev(int arr[],int n){
    if(n>=0){
    cout<<arr[n]<<" ";
    printRev(arr,n-1);
    } 
}
int main(){
   int arr[]={2,3,4,5,6,7,8,9};
   int n=7;
   print(arr,n);
   cout<<endl;
   printRev(arr,n);
}