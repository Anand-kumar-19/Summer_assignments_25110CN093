#include <iostream>

void selectionSort(int arr[], int size);

int main() {

    int size;

    // Take the size of the array from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];

    // Take array elements as input
    std::cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // Displaying array
    std::cout << "\nOriginal array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    // Sort the array
    selectionSort(arr, size);

    // Displaying sorted array
    std::cout << "\nSorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}

// Selection Sort function
void selectionSort(int arr[], int size) {

    // Traverse the array
    for (int i = 0; i < size - 1; i++) {

        // Assume the current element is the minimum
        int minIndex = i;

        // Find the index of the smallest element
        // in the remaining unsorted part of the array
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the smallest element with the current element
        std::swap(arr[i], arr[minIndex]);
    }
}