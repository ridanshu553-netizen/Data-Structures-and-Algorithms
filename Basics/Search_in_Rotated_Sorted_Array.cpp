#include <iostream>
using namespace std;

int search(int A[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (A[mid] == key)
            return mid;

        if (A[low] <= A[mid]) {
            if (A[low] <= key && key < A[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else {
            if (A[mid] < key && key <= A[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int A[] = {4, 5, 6, 7, 1, 2, 3};
    int n = 7;
    int key = 2;

    int result = search(A, n, key);

    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}