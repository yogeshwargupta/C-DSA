#include<iostream>
using namespace std;
int partition(int arr[], int start, int end) {
    int pos = start;
    for (int i = start; i <= end; i++) {
        if (arr[i] <= arr[end]) {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos-1;
}
void Qsort(int arr[],int start,int end){
    if(start>=end)
    return;

    int pivot = partition(arr,start,end);
    Qsort(arr,start,pivot-1);
    Qsort(arr,pivot+1,end);
}
int main(){
    int arr[1000],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0,end=n-1;
    Qsort(arr,start,end);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}