#include<bits/stdc++.h>
using namespace std;

class Queue {
private:
    queue<int> ax;

public:
    void enqueue(int data) {
        ax.push(data);
        cout << "Data enqueued: " << data << endl;
    }

    void dequeue() {
        if (!ax.empty()) {
            cout << "Data dequeued: " << ax.front() << endl;
            ax.pop();
        } else {
            cout << "Queue is empty. Cannot dequeue.\n";
        }
    }

    void displayFront() {
        if (!ax.empty()) {
            cout << "Front element: " << ax.front() << endl;
        } else {
            cout << "Queue is empty. No front element.\n";
        }
    }

    void displayBack() {
        if (!ax.empty()) {
            cout << "Rear element: " << ax.back() << endl;
        } else {
            cout << "Queue is empty. No rear element.\n";
        }
    }

    void display() {
        if (!ax.empty()) {
            cout << "Queue elements: ";
            queue<int> temp = ax;
            while (!temp.empty()) {
                cout << temp.front() << " ";
                temp.pop();
            }
            cout << endl;
        } else {
            cout << "Queue is empty.\n";
        }
    }
};

void displayMenu() {
    cout << "\n**** Queue Menu ****\n";
    cout << "1. Enqueue\n";
    cout << "2. Dequeue\n";
    cout << "3. Display Front\n";
    cout << "4. Display Rear\n";
    cout << "5. Display All\n";
    cout << "6. Exit\n";
    cout << "Enter your option: ";
}

int main() {
    Queue q;
    int option;

    do {
        displayMenu();
        cin >> option;

        switch (option) {
            case 1: {
                int data;
                cout << "Enter data to enqueue: ";
                cin >> data;
                q.enqueue(data);
                break;
            }
            case 2:
                q.dequeue();
                break;
            case 3:
                q.displayFront();
                break;
            case 4:
                q.displayBack();
                break;
            case 5:
                q.display();
                break;
            case 6:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid option. Please try again.\n";
        }

    } while (option != 6);

    return 0;
}
