#include<iostream>
using namespace std;
int main(){
   int arr[4][4] = {
        {2, 3, 5, 12},
        {12, 3, 4, 1},
        {5, 32, 2, 34},
        {50, 3, 21, 4}
    };
  // int a[14][4];
  // for(int i=0;i<=3;i++){
  //   for(int j=0;j<=3;j++){
  //      a[i][j]=arr[j][i];
  //   }
  // }
  // for(int i=0;i<=3;i++){
  //   for(int j=0;j<=3;j++){
  //       cout<<a[i][j]<<" ";
  //   }
  // }

    for(int i=0;i<4;i++){
    for(int j=i+1;j<4;j++){
      swap(arr[i][j],arr[j][i]);
    }
    }
    for(int i=0;i<=3;i++){
    for(int j=0;j<=3;j++){
       cout<<arr[i][j]<<" ";
    }
    }
}