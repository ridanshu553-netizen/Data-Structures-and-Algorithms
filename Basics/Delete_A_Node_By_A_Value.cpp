#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;

public:
    List() {
        head = NULL;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }

    void deleteValue(int val) {
        if (head == NULL)
            return;

        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;

        while (temp->next != NULL && temp->next->data != val)
            temp = temp->next;

        if (temp->next == NULL) {
            cout << "Value not found\n";
            return;
        }

        Node* del = temp->next;
        temp->next = del->next;
        delete del;
    }

    void display() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }
};

int main() {
    List ll;

    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);
    ll.push_back(40);

    cout << "Original List: ";
    ll.display();

    ll.deleteValue(30);

    cout << "After Deletion: ";
    ll.display();

    return 0;
}
