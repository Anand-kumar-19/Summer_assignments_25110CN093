#include <iostream>

void bubbleSort(int arr[], int size);

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
    bubbleSort(arr, size);

    // Displaying the sorted array
    std::cout << "\nSorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}

// Bubble Sort function
void bubbleSort(int arr[], int size) {

    for (int i = 0; i < size - 1; i++) {

        // Compare adjacent elements
        for (int j = 0; j < size - i - 1; j++) {

            // Swap if elements are in the wrong order
            // changing the condition of comparison gives the output as descending
            if (arr[j] < arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}