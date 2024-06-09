#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int start,int mid,int end){
    vector<int> temp(end-start+1);
    int left=start,right=mid+1,index=0;
    //sort and copy it in temp vector
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp[index]=arr[left];
            index++;
            left++;
        }  
        else{
            temp[index]=arr[right];
            index++;
            right++;
        }
    }
    //if left elemnt remaining
    while(left<=mid){
        temp[index]=arr[left];
        index++;
        left++;
    }
    //if right element remaining
    while(right<=end){
        temp[index]=arr[right];
        index++;
        right++;
    }
    //copy element from temp vecot to arr
    index=0;
    while(start<=end){
        arr[start]=temp[index];
        index++;
        start++;
    }
}
void mergesort(int arr[], int start, int end){
    int mid = start + (end-start)/2;
    if(start==end)
    return;
    //go left
    mergesort(arr,start,mid);
    //go right
    mergesort(arr,mid+1,end);
    //merge the divided arr
    merge(arr,start,mid,end);
}
int main(){
    int arr[1000],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0,end=n-1;
    mergesort(arr,start,end);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}