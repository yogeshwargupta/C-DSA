#include<iostream>
using namespace std;
int main(){
   int arr[3][3] = {
        {2, 3, 5},
        {12, 3, 4},
        {5, 32, 2}
    };
    int Digonal_sum =0;
    for (int i=0;i<3;i++){
       Digonal_sum += arr[i][i];
    }

    cout<<"Digonal Sum: "<<Digonal_sum<<endl;
   
//---------------------------------------------------------------------------------------------

    int digonal2_sum = 0;
    int i=0,j=2;
    while(j>=0){
        digonal2_sum += arr[i][j];
        i++;
        j--;
    }
    cout<<"2nd Digonal Sum: "<<digonal2_sum<<endl;
}