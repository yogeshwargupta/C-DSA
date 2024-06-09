#include<iostream>
using namespace std;
int main(){
   int arr[4][4] = {
        {2, 3, 5, 12},
        {12, 3, 4, 1},
        {5, 32, 2, 34},
        {50, 3, 21, 4}
    };

    int n=4;
    // int a[4][4];
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         a[j][row-1-i]=arr[i][j];
    //     }
    // }
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<a[i][j]<<" ";
    //     }
    // }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    } 
    for(int i=0;i<n;i++){
        int start=0,end=n-1;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }
   
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       cout<<arr[i][j]<<" ";
        }
     }
}
