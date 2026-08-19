#include <iostream>
using namespace std;

int main() {

    int A[] = {3,1,-2,-5,2,-4};
    int n = sizeof(A) / sizeof(A[0]);

    int result[n];

    int positive = 0;
    int negative = 1;

    for(int i = 0; i < n; i++) {

        if(A[i] > 0) {
            result[positive] = A[i];
            positive += 2;
        }
        else {
            result[negative] = A[i];
            negative += 2;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
