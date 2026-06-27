#include<iostream>

int main(){

    int n1, n2;

    // Taking input for the sizes of the arrays
    std::cout << "Enter the size of the first array : ";
    std::cin >> n1;

    std::cout << "Enter the size of the second array : ";
    std::cin >> n2;

    int arr1[n1], arr2[n2];

    // Taking input for the first sorted array
    std::cout << "Enter the elements of the first sorted array : ";
    for(int i = 0; i < n1; i++){
        std::cin >> arr1[i];
    }

    // Taking input for the second sorted array
    std::cout << "Enter the elements of the second sorted array : ";
    for(int i = 0; i < n2; i++){
        std::cin >> arr2[i];
    }

    // Displaying the arrays
    std::cout << "\nFirst array : ";
    for(int i = 0; i < n1; i++){
        std::cout << arr1[i] << " ";
    }

    std::cout << "\nSecond array : ";
    for(int i = 0; i < n2; i++){
        std::cout << arr2[i] << " ";
    }

    // Merging the arrays
    int mergedArray[n1 + n2];

    int i = 0, j = 0, k = 0;

    while(i < n1 && j < n2){

        if(arr1[i] <= arr2[j]){
            mergedArray[k] = arr1[i];
            i++;
        }
        else{
            mergedArray[k] = arr2[j];
            j++;
        }

        k++;
    }

    // Copy remaining elements of the first array
    while(i < n1){
        mergedArray[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements of the second array
    while(j < n2){
        mergedArray[k] = arr2[j];
        j++;
        k++;
    }

    // Displaying the merged array
    std::cout << "\nMerged array : ";
    for(int i = 0; i < n1 + n2; i++){
        std::cout << mergedArray[i] << " ";
    }

    return 0;
}