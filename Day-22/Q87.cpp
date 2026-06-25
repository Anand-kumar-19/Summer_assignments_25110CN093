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

    // Finding the frequency of each character
    std::cout << "\nCharacter frequencies :\n";

    for(int i = 0; i < length; i++){

        int count = 1;

        // Skip if the character has already been counted
        if(str[i] == '\0'){
            continue;
        }

        for(int j = i + 1; j < length; j++){

            if(str[i] == str[j]){
                count++;
                str[j] = '\0';   // Mark the character as counted
            }
        }

        std::cout << str[i] << " : " << count << '\n';
    }

    return 0;
}