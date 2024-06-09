#include <iostream>
using namespace std;

int main() {
    int matrix[3][4] = {
        {2, 30, 51, 90},
        {12, 31, 57, 99},
        {59, 73, 82, 100}
    };
    int n=3,m=4, count=0;
    int target ;
    cin>>target; 
    int i=0,j=m-1;
        while(i<n && j>=0){
            if(matrix[i][j]==target){
            cout<<"Found at: {"<<i<<","<<j<<"}";
            count++;
            break;
            }
            else if(matrix[i][j]>target)
            j--;
            else
            i++;
        }
        if (count == 0) {
        cout << "Not Found" << endl;
    }

    return 0;
}