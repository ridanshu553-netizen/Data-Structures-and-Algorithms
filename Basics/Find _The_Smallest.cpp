#include <iostream>
using namespace std;

int main() {

    int A[] = {5, 2, 8, 1, 9, 3};
    int n = sizeof(A) / sizeof(A[0]);

    int smallest = A[0];

    for(int i = 1; i < n; i++) {
        if(A[i] < smallest) {
            smallest = A[i];
        }
    }

    cout << "Smallest element: " << smallest;

    return 0;
}
