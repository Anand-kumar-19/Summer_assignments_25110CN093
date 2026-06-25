#include<iostream>

int main(){

    char str[100];

    // Taking input for the string
    std::cout << "Enter a string : ";
    std::cin.getline(str, 100);

    // Displaying the original string
    std::cout << "Original string : " << str;

    // Removing spaces from the string
    int i = 0, j = 0;

    while(str[i] != '\0'){

        // Copy only non-space characters
        if(str[i] != ' '){
            str[j] = str[i];
            j++;
        }

        i++;
    }

    // Add the null character at the end
    str[j] = '\0';

    // Displaying the modified string
    std::cout << "\nString after removing spaces : " << str;

    return 0;
}