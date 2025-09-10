#include<bits/stdc++.h>
using namespace std;

class Stack {
private:
    stack<int> ax;

public:
    void pushData(int data) {
        ax.push(data);
        cout << "Data pushed: " << data << endl;
    }

    void popData() {
        if (!ax.empty()) {
            cout << "Data popped: " << ax.top() << endl;
            ax.pop();
        } else {
            cout << "Stack is empty. Cannot pop.\n";
        }
    }

    void displayTop() {
        if (!ax.empty()) {
            cout << "Top element: " << ax.top() << endl;
        } else {
            cout << "Stack is empty. No top element.\n";
        }
    }

    void display() {
        if (!ax.empty()) {
            cout << "Stack elements: ";
            stack<int> temp = ax;
            while (!temp.empty()) {
                cout << temp.top() << " ";
                temp.pop();
            }
            cout << endl;
        } else {
            cout << "Stack is empty.\n";
        }
    }
};

void displayMenu() {
    cout << "\n**** Stack Menu ****\n";
    cout << "1. Push\n";
    cout << "2. Pop\n";
    cout << "3. Display\n";
    cout << "4. Exit\n";
    cout << "Enter your option: ";
}

int main() {
    Stack s;
    int option;

    do {
        displayMenu();
        cin >> option;

        switch (option) {
            case 1: {
                int data;
                cout << "Enter data to push: ";
                cin >> data;
                s.pushData(data);
                break;
            }
            case 2:
                s.popData();
                break;
            case 3:
                s.display();
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid option. Please try again.\n";
        }

    } while (option != 4);

    return 0;
}
