#include<iostream>
using namespace std;


int Heapify(int arr[], int i, int n){
    int smallest=i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<n&&arr[left]<arr[smallest])
    smallest=left;
    if(right<n&&arr[right]<arr[smallest])
    smallest=right;


    if(smallest!=i){
        swap(arr[smallest],arr[i]);
        Heapify(arr,smallest,n);
    }
}
void BuildMinHeap(int arr[], int n){
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
int main(){
    int arr[] = {10,3,8,9,5,13,18,14,11,70};
    BuildMinHeap(arr,10);
    print(arr,10);
}