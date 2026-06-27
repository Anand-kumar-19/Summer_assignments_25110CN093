#include<iostream>

int main(){

    char str[100];

    // Taking input for the string
    std::cout << "Enter a string : ";
    std::cin.getline(str, 100);

    // Displaying the original string
    std::cout << "Original string : " << str;

    // Finding the length of the string
    int length = 0;
    while(str[length] != '\0'){
        length++;
    }

    // Removing duplicate characters
    for(int i = 0; i < length; i++){

        // Skip if the character has already been removed
        if(str[i] == '\0'){
            continue;
        }

        for(int j = i + 1; j < length; j++){

            if(str[i] == str[j]){
                str[j] = '\0';   // Mark duplicate as removed
            }
        }
    }

    // Displaying the string without duplicates
    std::cout << "\nString after removing duplicates : ";

    for(int i = 0; i < length; i++){
        if(str[i] != '\0'){
            std::cout << str[i];
        }
    }

    return 0;
}