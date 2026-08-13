#include <iostream>
using namespace std;

int main() {

    int A[] = {1, 2, 3, 4, 5};
    int n = sizeof(A) / sizeof(A[0]);

    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += A[i];
    }

    cout << "Sum = " << sum;

    return 0;
}
