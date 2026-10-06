#include <iostream>
using namespace std;

int main() {
    int A[] = {6, 3, 8, 2, 7, 1, 5, 4};
    int n = 8;

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[minIndex])
                minIndex = j;
        }

        swap(A[i], A[minIndex]);
    }

    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}