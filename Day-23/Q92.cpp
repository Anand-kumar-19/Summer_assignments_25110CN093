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

    // Finding the maximum occurring character
    char maxchar;
    int maxcount = 0;

    for(int i = 0; i < length; i++){

        // Skip if the character has already been counted
        if(str[i] == '\0' || str[i] == ' '){
            continue;
        }

        int count = 1;

        for(int j = i + 1; j < length; j++){

            if(str[i] == str[j]){
                count++;
                str[j] = '\0'; // Mark duplicate as counted
            }
        }

        if(count > maxcount){
            maxcount = count;
            maxchar = str[i];
        }
    }

    // Displaying the result
    std::cout << "\nMaximum occurring character : " << maxchar;
    std::cout << "\nFrequency : " << maxcount;

    return 0;
}