#include<iostream>
using namespace std;
int main(){
   int arr[3][3] = {
        {2, 3, 5},
        {12, 3, 4},
        {5, 32, 2}
    };
    for(int i=0;i<3;i++){
        int start =0, end= 2;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
    }
}