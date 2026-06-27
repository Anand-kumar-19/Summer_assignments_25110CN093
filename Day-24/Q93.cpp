#include<iostream>
#include<string.h>

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
    int length1 = strlen(str1);
    int length2 = strlen(str2);

    // If lengths are different, they cannot be rotations
    if(length1 != length2){
        std::cout << "\nThe strings are not rotations of each other.";
        return 0;
    }

    // Concatenating str1 with itself
    char doubled[200];

    strcpy(doubled, str1);
    strcat(doubled, str1);

    // Checking if str2 is present in doubled
    bool isrotation = false;

    if(strstr(doubled, str2) != NULL){
        isrotation = true;
    }

    // Displaying the result
    if(isrotation){
        std::cout << "\nThe strings are rotations of each other.";
    }
    else{
        std::cout << "\nThe strings are not rotations of each other.";
    }

    return 0;
}