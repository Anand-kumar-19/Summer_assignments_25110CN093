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

    std::cout << "\nCommon characters : ";

    // Finding common characters using brute force
    for(int i = 0; i < length1; i++){

        // Skip if the character has already been printed
        if(str1[i] == '\0'){
            continue;
        }

        for(int j = 0; j < length2; j++){

            if(str1[i] == str2[j]){
                std::cout << str1[i] << " ";

                // Mark all occurrences of this character in str1
                for(int k = i + 1; k < length1; k++){
                    if(str1[k] == str1[i]){
                        str1[k] = '\0';
                    }
                }

                break;
            }
        }
    }

    return 0;
}