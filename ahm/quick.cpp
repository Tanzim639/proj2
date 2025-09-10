#include <iostream>
#include <vector>

using namespace std;

// Function to partition the array into two halves
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Choose the last element as the pivot
    int i = low - 1; // Index of smaller element

    for (int j = low; j < high; j++) {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // Swap the pivot element with the element at index (i + 1)
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Function to implement quick sort
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // Partition the array into two halves and get the partitioning index
        int pi = partition(arr, low, high);

        // Recursively sort the subarrays
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << "\n";

    // Perform quick sort
    quickSort(arr, 0, arr.size() - 1);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}
