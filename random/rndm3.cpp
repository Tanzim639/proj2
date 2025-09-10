#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtLocation(Node*& head, int newData, int position) {
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = nullptr;

    if (position == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 0; i < position - 1 && temp != nullptr; ++i) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Invalid position. Inserting at the end." << endl;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void displayList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    insertAtLocation(head, 3, 0);
    insertAtLocation(head, 7, 1);
    insertAtLocation(head, 1, 1); // Inserting at position 1 means inserting between the first and second nodes
    cout << "Linked List: ";
    displayList(head);

    return 0;
}
