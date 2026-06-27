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

    // Compressing the string
    std::cout << "\nCompressed string : ";

    int i = 0;

    while(i < length){

        int count = 1;
        int j = i + 1;

        // Count consecutive occurrences of the current character
        while(j < length && str[i] == str[j]){
            count++;
            j++;
        }

        // Print the character and its count
        std::cout << str[i] << count;

        // Move i to the next new character
        i = j;
    }

    return 0;
}