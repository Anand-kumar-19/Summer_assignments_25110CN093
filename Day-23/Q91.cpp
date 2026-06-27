#include<iostream>

int main(){

    char str1[100], str2[100];

    // Taking input for the strings
    std::cout << "Enter the first string : ";
    std::cin.getline(str1, 100);

    std::cout << "Enter the second string : ";
    std::cin.getline(str2, 100);

    // Displaying the strings
    std::cout << "First string : " << str1;
    std::cout << "\nSecond string : " << str2;

    // Finding the lengths of the strings
    int length1 = 0, length2 = 0;

    while(str1[length1] != '\0'){
        length1++;
    }

    while(str2[length2] != '\0'){
        length2++;
    }

    // If lengths are different, they cannot be anagrams
    if(length1 != length2){
        std::cout << "\nThe strings are not anagrams.";
        return 0;
    }

    // Sorting the first string
    for(int i = 0; i < length1 - 1; i++){
        for(int j = i + 1; j < length1; j++){
            if(str1[i] > str1[j]){
                std::swap(str1[i], str1[j]);
            }
        }
    }

    // Sorting the second string
    for(int i = 0; i < length2 - 1; i++){
        for(int j = i + 1; j < length2; j++){
            if(str2[i] > str2[j]){
                std::swap(str2[i], str2[j]);
            }
        }
    }

    // Comparing the sorted strings
    bool isanagram = true;

    for(int i = 0; i < length1; i++){
        if(str1[i] != str2[i]){
            isanagram = false;
            break;
        }
    }

    // Displaying the result
    if(isanagram){
        std::cout << "\nThe strings are anagrams.";
    }
    else{
        std::cout << "\nThe strings are not anagrams.";
    }

    return 0;
}