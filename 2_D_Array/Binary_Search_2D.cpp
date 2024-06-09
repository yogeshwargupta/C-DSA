#include <iostream>
using namespace std;

int main() {
    int matrix[3][4] = {
        {2, 3, 5, 9},
        {12, 13, 14, 56},
        {59, 73, 82, 99}
    };

    int target ;
    cin>>target;
    int N = 3, M = 4;
    int start = 0, end = M * N - 1;
    int count = 0;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        int row_index = mid / M;
        int col_index = mid % M;

        if (matrix[row_index][col_index] == target) {
            cout << "Found at Index: {" << row_index << "," << col_index << "}" << endl;
            count++;
            break;
        } else if (matrix[row_index][col_index] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    if (count == 0) {
        cout << "Not Found" << endl;
    }

    return 0;
}
