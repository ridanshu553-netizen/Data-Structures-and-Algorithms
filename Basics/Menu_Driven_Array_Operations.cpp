#include <iostream>
using namespace std;

int a[100], n;

void display() {
    if(n == 0) {
        cout << "Array is empty\n";
        return;
    }

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void insertBeginning() {
    int x;
    cout << "Enter element: ";
    cin >> x;

    for(int i = n; i > 0; i--)
        a[i] = a[i - 1];

    a[0] = x;
    n++;
}

void insertEnd() {
    int x;
    cout << "Enter element: ";
    cin >> x;

    a[n++] = x;
}

void insertPosition() {
    int x, pos;
    cout << "Enter index: ";
    cin >> pos;

    if(pos < 0 || pos > n) {
        cout << "Invalid index\n";
        return;
    }

    cout << "Enter element: ";
    cin >> x;

    for(int i = n; i > pos; i--)
        a[i] = a[i - 1];

    a[pos] = x;
    n++;
}

void deleteBeginning() {
    if(n == 0) {
        cout << "Array is empty\n";
        return;
    }

    for(int i = 0; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;
}

void deleteEnd() {
    if(n == 0) {
        cout << "Array is empty\n";
        return;
    }

    n--;
}

void deletePosition() {
    int pos;
    cout << "Enter index: ";
    cin >> pos;

    if(pos < 0 || pos >= n) {
        cout << "Invalid index\n";
        return;
    }

    for(int i = pos; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;
}

void search() {
    int x, pos = -1;
    cout << "Enter element: ";
    cin >> x;

    for(int i = 0; i < n; i++) {
        if(a[i] == x) {
            pos = i;
            break;
        }
    }

    if(pos == -1)
        cout << "Element not found\n";
    else
        cout << "Element found at index " << pos << endl;
}

void update() {
    int pos, x;
    cout << "Enter index: ";
    cin >> pos;

    if(pos < 0 || pos >= n) {
        cout << "Invalid index\n";
        return;
    }

    cout << "Enter new value: ";
    cin >> x;

    a[pos] = x;
}

int main() {
    int choice;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    do {
        cout << "\n--- Array Menu ---\n";
        cout << "1. Display Array\n";
        cout << "2. Insert at Beginning\n";
        cout << "3. Insert at End\n";
        cout << "4. Insert at Any Position\n";
        cout << "5. Delete from Beginning\n";
        cout << "6. Delete from End\n";
        cout << "7. Delete from Any Position\n";
        cout << "8. Search an Element\n";
        cout << "9. Update an Element\n";
        cout << "10. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: display(); break;
            case 2: insertBeginning(); break;
            case 3: insertEnd(); break;
            case 4: insertPosition(); break;
            case 5: deleteBeginning(); break;
            case 6: deleteEnd(); break;
            case 7: deletePosition(); break;
            case 8: search(); break;
            case 9: update(); break;
            case 10: cout << "Exiting..."; break;
            default: cout << "Invalid choice\n";
        }
    } while(choice != 10);

    return 0;
}