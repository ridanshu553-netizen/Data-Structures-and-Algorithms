#include <iostream>
using namespace std;

int main() {

    int A[] = {2, 7, 11, 15};
    int n = sizeof(A) / sizeof(A[0]);

    int target = 9;

    for(int i = 0; i < n; i++) {

        for(int j = i + 1; j < n; j++) {

            if(A[i] + A[j] == target) {

                cout << "Indexes: "
                     << i << " " << j;

                return 0;
            }
        }
    }

    return 0;
}
