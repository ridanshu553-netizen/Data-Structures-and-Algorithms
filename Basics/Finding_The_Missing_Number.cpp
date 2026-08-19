#include <iostream>
using namespace std;

int main() {

    int A[] = {1, 2, 3, 5};
    int n = 5;

    int sum = n * (n + 1) / 2;

    int arraySum = 0;

    for(int i = 0; i < n - 1; i++) {
        arraySum += A[i];
    }

    cout << "Missing number: " << sum - arraySum;

    return 0;
}
