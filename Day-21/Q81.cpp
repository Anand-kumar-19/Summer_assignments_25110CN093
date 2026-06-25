#include<iostream>

int main(){

    char str[100];

    // Taking input for the string
    std::cout << "Enter a string : ";
    std::cin.getline(str, 100);

    // Displaying the string
    std::cout << "String : " << str;

    // Finding the length of the string
    int length = 0;

    while(str[length] != '\0'){
        length++;
    }

    // Displaying the length
    std::cout << "\nLength of the string : " << length;

    return 0;
}