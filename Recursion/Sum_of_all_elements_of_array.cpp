#include<iostream>
using namespace std;
int printSum(int arr[], int n){
    if(n>-1){
    int sum = arr[n] + printSum(arr,n-1);
    return sum;
    }
    return 0;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int sum=printSum(arr,8);
    cout<<sum;
}