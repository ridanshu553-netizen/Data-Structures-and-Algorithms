#include <iostream>
using namespace std;
int main() {
    int a[100], n, x, pos = -1;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter value to search: ";
    cin >> x;

    for(int i = 0; i < n; i++) {
        if(a[i] == x) {
            pos = i;
            break;
        }
    }

    if(pos != -1)
        cout << "Element found at index " << pos;
    else
        cout << "Element not found";

    return 0;
}