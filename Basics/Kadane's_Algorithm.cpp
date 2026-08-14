#include <iostream>
using namespace std;

int main() {

    int A[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(A) / sizeof(A[0]);

    int sum = 0;
    int maximum = A[0];

    for(int i = 0; i < n; i++) {

        sum = sum + A[i];

        if(sum > maximum) {
            maximum = sum;
        }

        if(sum < 0) {
            sum = 0;
        }
    }

    cout << "Maximum Subarray Sum: " << maximum;

    return 0;
}
