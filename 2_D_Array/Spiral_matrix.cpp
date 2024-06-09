#include<iostream>
using namespace std;
int main(){
   int arr[4][4] = {
        {2, 3, 5, 12},
        {12, 3, 4, 1},
        {5, 32, 2, 34},
        {50, 3, 21, 4}
    };

   int top=0,right=3,bottom=3,left=0;
    while(left<=right && top<=bottom){
   for(int j=left;j<=right;j++)
       cout<<arr[left][j]<<" ";
       top++;
    
   for(int i=top;i<=bottom;i++)
     cout<<arr[i][right]<<" ";
     right--;
    if(top<=bottom){
    for(int j=right;j>=left;j--)
    cout<<arr[bottom][j]<<" ";
    bottom--;
    }

    if(left<=right){
    for(int i=bottom;i>=top;i--)
    cout<<arr[i][left]<<" ";
    left++;
    } 
  }
}