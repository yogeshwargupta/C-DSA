#include<iostream>
using namespace std;
int main(){
   int matrix[4][4] = {
        {2, 3, 5, 12},
        {12, 3, 4, 1},
        {5, 32, 2, 34},
        {50, 3, 21, 4}
    };

    int n=4;
    for(int j=0;j<n;j++){
        int start=0,end=n-1;
        while(start<end){
            swap(matrix[start][j],matrix[end][j]);
            start++;
            end--;
        }
    }
    
    for(int i=0;i<n;i++){
        int start=0,end=n-1;
        while(start<end){
            swap(matrix[i][start],matrix[i][end]);
            start++;
            end--;
        }
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       cout<<matrix[i][j]<<" ";
        }
     }
    }