#include<iostream>
using namespace std;
int main(){
    int a[1000],n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];

    int start=0,end=n-1;
    int key;
    cin>>key;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(a[mid]==key){
        cout<<"Key Found At: "<<mid;
        break;
        }  
        else if(a[mid] < key){
        start=mid+1;
        }
        else if(a[mid] > key){
            end=mid-1;  
        }
        else
        cout<<"Key Not found";
   }
}