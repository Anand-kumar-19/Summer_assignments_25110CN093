#include <iostream>

int binarySearch(int arr[], int size, int target);

int main() {

    int size;

    // Take the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];

    // Input array elements (must be sorted)
    std::cout << "Enter " << size
              << " elements in sorted order:\n";

    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // Displaying the array
    std::cout << "\nArray: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    // Input the element to search for
    int target;
    std::cout << "\nEnter the element to search: ";
    std::cin >> target;

    // Perform binary search
    int index = binarySearch(arr, size, target);

    // Displaying the result
    if (index != -1) {
        std::cout << target
                  << " found at index " << index;
    }
    else {
        std::cout << target
                  << " not found in the array.";
    }

    return 0;
}

// Binary Search function
int binarySearch(int arr[], int size, int target) {

    int left = 0;
    int right = size - 1;

    while (left <= right) {

        // Calculate the middle index
        int mid = left + (right - left) / 2;

        // Element found
        if (arr[mid] == target) {
            return mid;
        }

        // Search in the right half
        else if (arr[mid] < target) {
            left = mid + 1;
        }

        // Search in the left half
        else {
            right = mid - 1;
        }
    }

    // Element not found
    return -1;
}