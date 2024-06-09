#include<iostream>
using namespace std;
int main(){
   int arr[4][4] = {
        {2, 3, 5, 12},
        {12, 3, 4, 1},
        {5, 32, 2, 34},
        {50, 3, 21, 4}
    };

    for(int j=0;j<4;j++){
        if(j%2==0){
            for(int i=0;i<4;i++)
            cout<<arr[i][j]<<" ";
        }
        else{
            for(int i=3;i>=0;i--)
            cout<<arr[i][j]<<" ";
        }
    }
}