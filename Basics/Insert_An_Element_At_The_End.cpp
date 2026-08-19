#include <iostream>
using namespace std;

int main() {
    int a[100], n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter element to insert: ";
    cin >> x;

    a[n] = x;
    n++;

    cout << "Updated array: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}