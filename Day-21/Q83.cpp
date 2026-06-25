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

    // Counting vowels and consonants
    int i = 0, vowels = 0, consonants = 0;

    while(i < length){

        // Check if the character is an alphabet using ASCII values
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z')){

            // Check if the alphabet is a vowel
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
               str[i] == 'o' || str[i] == 'u' ||
               str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
               str[i] == 'O' || str[i] == 'U'){

                vowels++;
            }
            else{
                consonants++;
            }
        }

        i++;
    }

    std::cout << "\nThe string has " << vowels
              << " vowels and " << consonants
              << " consonants";

    return 0;
}