#include <iostream>
using namespace std;

int main() {

    int A[] = {1, 0, 2, 0, 3, 0, 4};
    int n = sizeof(A) / sizeof(A[0]);

    int j = 0;

    for(int i = 0; i < n; i++) {

        if(A[i] != 0) {
            swap(A[i], A[j]);
            j++;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
