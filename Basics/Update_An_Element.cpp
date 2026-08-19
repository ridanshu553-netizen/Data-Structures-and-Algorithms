#include <iostream>
using namespace std;

int main() {
    int a[100], n, pos, x;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter index to update: ";
    cin >> pos;

    if(pos < 0 || pos >= n) {
        cout << "Invalid index";
        return 0;
    }

    cout << "Enter new value: ";
    cin >> x;

    a[pos] = x;

    cout << "Updated array: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}