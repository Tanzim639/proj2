#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtEnd(Node*& head, int newData) {
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void deleteFirstNode(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty. Nothing to delete." << endl;
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteLastNode(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty. Nothing to delete." << endl;
        return;
    }

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
}


int findLength(Node* head) {
    int length = 0;
    Node* current = head;

    while (current != nullptr) {
        length++;
        current = current->next;
    }

    return length;
}

void deleteAtLocation(Node*& head, int position) {
    if (head == nullptr) {
        cout << "List is empty. Nothing to delete." << endl;
        return;
    }

    if (position == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    for (int i = 0; i < position - 1 && temp != nullptr; ++i) {
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr) {
        cout << "Invalid position. Nothing to delete." << endl;
        return;
    }

    Node* toDelete = temp->next; 
    temp->next = temp->next->next;
    delete toDelete;
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

    insertAtEnd(head, 3);
    insertAtEnd(head, 7);
    insertAtEnd(head, 1);

    cout << "Original Linked List: ";
    displayList(head);

    // deleteFirstNode(head);
    // cout << "Linked List after deleting first node: ";
    // displayList(head);

    // deleteLastNode(head);
    // cout << "Linked List after deleting last node: ";
    // displayList(head);

    deleteAtLocation(head, 2);
    cout << "Linked List after deleting node at position 0: ";
    displayList(head);

    return 0;
}
