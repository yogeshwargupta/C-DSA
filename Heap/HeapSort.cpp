#include<iostream>
using namespace std;

//Step.1- Array covert MaxHeap
//Step.2- MaxHeap to sorted arrayy

int Heapify(int arr[], int i, int n){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<n&&arr[left]>arr[largest])
    largest=left;
    if(right<n&&arr[right]>arr[largest])
    largest=right;


    if(largest!=i){
        swap(arr[largest],arr[i]);
        Heapify(arr,largest,n);
    }
}
void BuildMaxHeap(int arr[], int n){
    //Step Down
    for(int i=n/2-1;i>=0;i--){
        Heapify(arr,i,n);
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortArray(int arr[], int n){
    for(int i=n-1;i>0;i--){
    swap(arr[i],arr[0]);
    Heapify(arr,0,i);
    }
}
int main(){
    int arr[] = {10,3,8,9,5,13,18,14,11,70};
    BuildMaxHeap(arr,10);
    sortArray(arr,10);
    print(arr,10);
}