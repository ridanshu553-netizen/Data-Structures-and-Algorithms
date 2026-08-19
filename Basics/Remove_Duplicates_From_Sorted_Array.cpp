#include <iostream>
using namespace std;

int main() {

    int A[] = {1, 1, 2, 2, 3, 3, 4};
    int n = sizeof(A) / sizeof(A[0]);

    int j = 0;

    for(int i = 1; i < n; i++) {

        if(A[i] != A[j]) {
            j++;
            A[j] = A[i];
        }
    }

    for(int i = 0; i <= j; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
