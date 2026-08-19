#include <iostream>
using namespace std;

int main() {
    int a[100], n, x, pos;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter index: ";
    cin >> pos;

    if(pos < 0 || pos > n) {
        cout << "Invalid index";
        return 0;
    }

    cout << "Enter element to insert: ";
    cin >> x;

    for(int i = n; i > pos; i--)
        a[i] = a[i - 1];

    a[pos] = x;
    n++;

    cout << "Updated array: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}