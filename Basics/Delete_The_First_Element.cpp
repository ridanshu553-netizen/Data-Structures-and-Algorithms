#include <iostream>
using namespace std;

int main() {
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;

    cout << "Updated array: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}