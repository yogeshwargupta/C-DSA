#include <iostream>
using namespace std;

int main() {
    int arr[3][4] = {
        {2, 3, 5, 74},
        {12, 3, 4, 56},
        {5, 32, 2, 12}
    };

    int sum = INT16_MIN; 

    for (int i = 0; i < 3; i++) {
        int total = 0;
        for (int j = 0; j < 4; j++) {
            total += arr[i][j];
        }
        if (sum < total)
            sum = total;
    }
    cout << sum;
}
