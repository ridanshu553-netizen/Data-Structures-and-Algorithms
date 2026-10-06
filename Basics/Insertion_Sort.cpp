#include <iostream>
using namespace std;

int main() {
    int A[] = {7, 3, 8, 2, 6, 4, 5};
    int n = 7;

    for (int i = 1; i < n; i++) {
        int key = A[i];
        int j = i - 1;

        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j--;
        }

        A[j + 1] = key;
    }

    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}