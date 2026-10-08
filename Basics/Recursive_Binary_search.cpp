#include <iostream>
using namespace std;

int binarySearch(int A[], int low, int high, int key) {
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (A[mid] == key)
        return mid;

    if (key < A[mid])
        return binarySearch(A, low, mid - 1, key);

    return binarySearch(A, mid + 1, high, key);
}

int main() {
    int A[] = {2, 4, 6, 8, 10, 12, 14};
    int n = 7;
    int key = 10;

    int result = binarySearch(A, 0, n - 1, key);

    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}