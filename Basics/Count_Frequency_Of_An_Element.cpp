#include <iostream>
using namespace std;

int main() {
    int n, target;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> target;

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            count++;
    }

    cout << "Frequency: " << count;

    return 0;
}
