#include <iostream>

using namespace std;

// Node class definition
class Node {
public:
    int data;
    Node* Next;
};

int main() {
    // Declare first node
    Node first;
    first.data = 10;
    first.Next = NULL;

    // Declare head pointer and assign it to first
    Node* head = &first;

    // Traverse the linked list and print the values
    Node* current = head;
    cout << "Linked List values: ";
    while (current != NULL) {
        cout << current->data << " ";
        current = current->Next;
    }
    cout << endl;

    return 0;
}
