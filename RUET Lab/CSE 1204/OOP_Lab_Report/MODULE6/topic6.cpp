#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> ax;

void displayList() {
    cout << "Current list elements: ";
    for (const auto& elem : ax) {
        cout << elem << " ";
    }
    cout << endl;
}

void insertAtFirst(int value) {
    ax.insert(ax.begin(), value);
    cout << "Element inserted at the beginning." << endl;
}

void insertAtLast(int value) {
    ax.push_back(value);
    cout << "Element inserted at the end." << endl;
}

void insertBefore(int existingValue, int newValue) {
    auto it = find(ax.begin(), ax.end(), existingValue);
    if (it != ax.end()) {
        ax.insert(it, newValue);
        cout << "Element inserted before " << existingValue << "." << endl;
    } else {
        cout << existingValue << " not found in the list." << endl;
    }
}

void insertAfter(int existingValue, int newValue) {
    auto it = find(ax.begin(), ax.end(), existingValue);
    if (it != ax.end()) {
        ax.insert(it + 1, newValue);
        cout << "Element inserted after " << existingValue << "." << endl;
    } else {
        cout << existingValue << " not found in the list." << endl;
    }
}

void deleteElement(int value) {
    auto it = find(ax.begin(), ax.end(), value);
    if (it != ax.end()) {
        ax.erase(it);
        cout << "Element " << value << " deleted." << endl;
    } else {
        cout << value << " not found in the list." << endl;
    }
}

void searchElement(int value) {
    auto it = find(ax.begin(), ax.end(), value);
    if (it != ax.end()) {
        cout << value << " found in the list." << endl;
    } else {
        cout << value << " not found in the list." << endl;
    }
}

int main() {
    int option;

    do {
        cout << "\n**** Main Menu ****\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Search\n";
        cout << "4. Display list\n";
        cout << "5. Exit\n";
        cout << "Enter your option: ";
        cin >> option;

        switch (option) {
            case 1: {
                int insertOption;
                cout << "\n**** Insert Sub Menu ****\n";
                cout << "1. Insert at First\n";
                cout << "2. Insert at Last\n";
                cout << "3. Insert Before\n";
                cout << "4. Insert After\n";
                cout << "5. Exit\n";
                cout << "Enter your option: ";
                cin >> insertOption;

                switch (insertOption) {
                    case 1: {
                        int value;
                        cout << "Enter the value to insert: ";
                        cin >> value;
                        insertAtFirst(value);
                        break;
                    }
                    case 2: {
                        int value;
                        cout << "Enter the value to insert: ";
                        cin >> value;
                        insertAtLast(value);
                        break;
                    }
                    case 3: {
                        int existingValue, newValue;
                        cout << "Enter the existing value: ";
                        cin >> existingValue;
                        cout << "Enter the new value to insert: ";
                        cin >> newValue;
                        insertBefore(existingValue, newValue);
                        break;
                    }
                    case 4: {
                        int existingValue, newValue;
                        cout << "Enter the existing value: ";
                        cin >> existingValue;
                        cout << "Enter the new value to insert: ";
                        cin >> newValue;
                        insertAfter(existingValue, newValue);
                        break;
                    }
                    case 5:
                        break;
                    default:
                        cout << "Invalid option. Please try again.\n";
                }
                break;
            }
            case 2: {
                int value;
                cout << "Enter the value to delete: ";
                cin >> value;
                deleteElement(value);
                break;
            }
            case 3: {
                int value;
                cout << "Enter the value to search: ";
                cin >> value;
                searchElement(value);
                break;
            }
            case 4:
                displayList();
                break;
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid option. Please try again.\n";
        }
    } while (option != 5);

    return 0;
}
