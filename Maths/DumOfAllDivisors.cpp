#include<iostream>
#include <cmath>
using namespace std;

int sumOfDivisors(int n) {
    int sum = 0;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) { // Check if i and n/i are different
                sum += n / i;
            }
        }
    }
    return sum;
}

int sumOfDivisorsInRange(int n) {
    int totalSum = 0;
    for (int i = 1; i <= n; ++i) {
        totalSum += sumOfDivisors(i);
    }
    return totalSum;
}
