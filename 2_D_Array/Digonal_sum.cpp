#include<iostream>
using namespace std;
int main(){
   int arr[3][4] = {
        {2, 3, 5, 74},
        {12, 3, 4, 56},
        {5, 32, 2, 12}
    };
    int Digonal_sum =0;
    // for (int i=0;i<3;i++){
    //     for (int j=0;j<4;j++){
    //         if(i==j){
    //         Digonal_sum += arr[i][j];
    //         }
    //     }
    // } 
    for (int i=0;i<3;i++){
       Digonal_sum += arr[i][i];
    }

    cout<<"Digonal Sum: "<<Digonal_sum<<endl;
}