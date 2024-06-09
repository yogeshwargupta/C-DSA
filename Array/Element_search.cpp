#include<iostream>
using namespace std;
    int search(int arr[], int N, int X)
    {
        
        for(int i=0;i<N;i++){
            if(arr[i]== X)
            return i;
        }
        return -1;
        
    }
int main(){
    int arr[100],n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter key: ";
    cin>>x;
    cout<<search(arr,n,x);
}