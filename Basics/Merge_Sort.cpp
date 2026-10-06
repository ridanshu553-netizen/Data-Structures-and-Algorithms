#include <iostream>
using namespace std;

void merge(int A[], int low, int mid, int high) {
    int temp[100];
    int i = low, j = mid + 1, k = 0;

    while (i <= mid && j <= high) {
        if (A[i] < A[j])
            temp[k++] = A[i++];
        else
            temp[k++] = A[j++];
    }

    while (i <= mid)
        temp[k++] = A[i++];

    while (j <= high)
        temp[k++] = A[j++];

    for (i = low, k = 0; i <= high; i++, k++)
        A[i] = temp[k];
}

void mergeSort(int A[], int low, int high) {
    if (low >= high)
        return;

    int mid = (low + high) / 2;

    mergeSort(A, low, mid);
    mergeSort(A, mid + 1, high);
    merge(A, low, mid, high);
}

int main() {
    int A[] = {38, 12, 27, 43, 9, 31, 18, 25};
    int n = 8;

    mergeSort(A, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}