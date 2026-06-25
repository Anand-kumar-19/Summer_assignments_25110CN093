#include<iostream>

int main(){

    char str[100];

    // Taking input for the string
    std::cout << "Enter a string : ";
    std::cin.getline(str, 100);

    // Displaying the original string
    std::cout << "Original string : " << str;

    // Converting lowercase letters to uppercase
    int i = 0;

    while(str[i] != '\0'){

        // Checking if the character is lowercase
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }

        i++;
    }

    // Displaying the uppercase string
    std::cout << "\nUppercase string : " << str;

    return 0;
}